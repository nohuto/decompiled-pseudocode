/*
 * XREFs of ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0114288
 * Callers:
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00311B4 (ndisAllocatePerProcessorPageDescriptor.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ndisFreeMappingAddress@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0031244 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ndisFreeMappingAddress@@YAX0@ZU-$integra.c)
 *     ??$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z @ 0x1C00346C4 (--$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ndisGetNodeIdForProcessor @ 0x1C01144E4 (ndisGetNodeIdForProcessor.c)
 *     ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C011457C (--$MakeSizedPoolPtr@U_MDL@@@@YA-AV-$unique_ptr@U_MDL@@U-$KFreePool@U_MDL@@@@@wistd@@K_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0116050 (--_V@YAXPEAX@Z.c)
 */

unsigned __int64 ndisAllocateNumaStripedPages(void)
{
  __int64 v0; // r14
  SIZE_T v1; // rbx
  unsigned __int64 v2; // rsi
  SIZE_T v3; // rax
  __int64 v4; // rdx
  PMDL v5; // rdi
  struct _MDL *v6; // r12
  size_t v7; // rbx
  struct _MDL **Pool2; // rax
  struct _MDL **v9; // r15
  unsigned int v10; // r13d
  int NodeIdForProcessor; // eax
  __int64 NodePagesForMdl; // rcx
  char v13; // di
  struct _MDL **v14; // rbx
  struct _MDL *v15; // rcx
  signed __int64 v17; // [rsp+40h] [rbp-18h]
  unsigned __int64 MappingAddress; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+58h]
  PMDL MemoryDescriptorList; // [rsp+B8h] [rbp+60h] BYREF

  LODWORD(v0) = KeQueryMaximumProcessorCountEx(0xFFFFu) + 1;
  v1 = (unsigned int)((_DWORD)v0 << 12);
  MappingAddress = (unsigned __int64)MmAllocateMappingAddress(v1, 0x6C53444Eu);
  v2 = MappingAddress;
  if ( !MappingAddress
    || (v3 = MmSizeOfMdl(0LL, (unsigned int)v1),
        MakeSizedPoolPtr<_MDL>(&MemoryDescriptorList, v4, v3),
        (v5 = MemoryDescriptorList) == 0LL) )
  {
    v2 = 0LL;
    goto LABEL_21;
  }
  MemoryDescriptorList->Next = 0LL;
  v6 = v5 + 1;
  v5->ByteCount = v1;
  v5->StartVa = (PVOID)(v2 & 0xFFFFFFFFFFFFF000uLL);
  v5->ByteOffset = v2 & 0xFFF;
  v5->MdlFlags = 2;
  v5->Size = 8 * (((v1 + (v2 & 0xFFF) + 4095) >> 12) + 6);
  v7 = 8LL * (unsigned int)v0;
  if ( !is_mul_ok((unsigned int)v0, 8uLL) )
    v7 = -1LL;
  Pool2 = (struct _MDL **)ExAllocatePool2(256LL, v7, 1833780302);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v7);
    v10 = 0;
    LOBYTE(MappingAddress) = 0;
    if ( (_DWORD)v0 )
    {
      v20 = -1LL;
      v17 = (char *)v9 - (char *)v6;
      while ( 1 )
      {
        v19 = 4096LL;
        NodeIdForProcessor = ndisGetNodeIdForProcessor(v10 != 0 ? v10 - 1 : 0);
        NodePagesForMdl = MmAllocateNodePagesForMdlEx(0LL, v20, v19, 4096LL, 1, NodeIdForProcessor, 5);
        *(struct _MDL **)((char *)&v6->Next + v17) = (struct _MDL *)NodePagesForMdl;
        if ( !NodePagesForMdl )
          break;
        ++v10;
        v6->Next = *(struct _MDL **)(NodePagesForMdl + 48);
        v6 = (struct _MDL *)((char *)v6 + 8);
        if ( v10 >= (unsigned int)v0 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( MmMapLockedPagesWithReservedMapping((PVOID)v2, 0x6C53444Eu, v5, MmCached) )
      {
LABEL_11:
        if ( (_DWORD)v0 )
        {
          v13 = MappingAddress;
          v14 = v9;
          v0 = (unsigned int)v0;
          do
          {
            v15 = *v14;
            if ( *v14 )
            {
              if ( v13 )
              {
                MmFreePagesFromMdl(v15);
                v15 = *v14;
              }
              ExFreePoolWithTag(v15, 0);
            }
            ++v14;
            --v0;
          }
          while ( v0 );
          v5 = MemoryDescriptorList;
        }
        MappingAddress = 0LL;
        operator delete[](v9);
        goto LABEL_20;
      }
    }
    MappingAddress = v2;
    v19 = (__int64)ndisFreeMappingAddress;
    wistd::invoke<long (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v19, &MappingAddress);
    v2 = 0LL;
    LOBYTE(MappingAddress) = 1;
    goto LABEL_11;
  }
  v2 = 0LL;
LABEL_20:
  ExFreePoolWithTag(v5, 0);
LABEL_21:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>((void **)&MappingAddress);
  return v2;
}
