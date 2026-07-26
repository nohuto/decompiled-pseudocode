/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FD30
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00323D8 (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ndisFreeMappingAddress@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0032468 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ndisFreeMappingAddress@@YAX0@ZU-$integra.c)
 *     ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C0037574 (-ndisFreeMappingAddress@@YAXPEAX@Z.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D018 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B1698 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ndisGetNodeIdForProcessor @ 0x1C011FF80 (ndisGetNodeIdForProcessor.c)
 *     ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C0120018 (--$MakeSizedPoolPtr@U_MDL@@@@YA-AV-$unique_ptr@U_MDL@@U-$KFreePool@U_MDL@@@@@wistd@@K_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C01217AC (--_V@YAXPEAX@Z.c)
 */

unsigned __int64 ndisAllocateNumaStripedPages(void)
{
  ULONG v0; // r15d
  SIZE_T v1; // rbx
  ULONG v2; // r13d
  unsigned __int64 v3; // r14
  SIZE_T v4; // rax
  __int64 v5; // rdx
  PMDL v6; // rdi
  struct _MDL *v7; // r12
  size_t v8; // rbx
  PMDL *Pool2; // rax
  PMDL *v10; // rsi
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rcx
  char v13; // r15
  PMDL *v14; // rbx
  __int64 v15; // r12
  __int64 v17; // [rsp+40h] [rbp-18h]
  PVOID MappingAddress; // [rsp+A0h] [rbp+48h] BYREF
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+58h] BYREF
  signed __int64 v21; // [rsp+B8h] [rbp+60h]

  v0 = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = v0 << 12;
  v2 = 0;
  MappingAddress = MmAllocateMappingAddress(v1, 0x6C53444Eu);
  v3 = (unsigned __int64)MappingAddress;
  if ( !MappingAddress )
    goto LABEL_24;
  v4 = MmSizeOfMdl(0LL, (unsigned int)v1);
  MakeSizedPoolPtr<_MDL>(&MemoryDescriptorList, v5, v4);
  v6 = MemoryDescriptorList;
  if ( !MemoryDescriptorList )
  {
LABEL_23:
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&MemoryDescriptorList);
LABEL_24:
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>(&MappingAddress);
    return 0LL;
  }
  MemoryDescriptorList->ByteCount = v1;
  v6->Next = 0LL;
  v7 = v6 + 1;
  v6->ByteOffset = v3 & 0xFFF;
  v6->StartVa = (PVOID)(v3 & 0xFFFFFFFFFFFFF000uLL);
  v6->MdlFlags = 2;
  v6->Size = 8 * (((v1 + (v3 & 0xFFF) + 4095) >> 12) + 6);
  v17 = v0;
  v8 = 8LL * v0;
  if ( !is_mul_ok(v0, 8uLL) )
    v8 = -1LL;
  Pool2 = (PMDL *)ExAllocatePool2(256LL, v8, 1833780302);
  v10 = Pool2;
  if ( !Pool2 )
  {
    v20 = 0LL;
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&v20);
    goto LABEL_23;
  }
  memset(Pool2, 0, v8);
  v20 = (__int64)v10;
  LOBYTE(MappingAddress) = 0;
  if ( v0 )
  {
    v20 = -1LL;
    v21 = (char *)v10 - (char *)v7;
    do
    {
      MemoryDescriptorList = (PMDL)4096;
      NodeIdForProcessor = ndisGetNodeIdForProcessor(v2 != 0 ? v2 - 1 : 0);
      NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, v20, MemoryDescriptorList, 4096LL, 1, NodeIdForProcessor, 5);
      *(struct _MDL **)((char *)&v7->Next + v21) = (struct _MDL *)NodePagesForMdl;
      if ( !NodePagesForMdl )
        goto LABEL_19;
      ++v2;
      v7->Next = *(struct _MDL **)(NodePagesForMdl + 48);
      v7 = (struct _MDL *)((char *)v7 + 8);
    }
    while ( v2 < v0 );
  }
  if ( !MmMapLockedPagesWithReservedMapping((PVOID)v3, 0x6C53444Eu, v6, MmCached) )
  {
LABEL_19:
    LOBYTE(MappingAddress) = 1;
    if ( v3 )
      ndisFreeMappingAddress((void *)v3);
    v3 = 0LL;
  }
  if ( v0 )
  {
    v13 = (char)MappingAddress;
    v14 = v10;
    v15 = v17;
    do
    {
      if ( *v14 )
      {
        if ( v13 )
          MmFreePagesFromMdl(*v14);
        ExFreePoolWithTag(*v14, 0);
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  MappingAddress = 0LL;
  operator delete[](v10);
  ExFreePoolWithTag(v6, 0);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>(&MappingAddress);
  return v3;
}
