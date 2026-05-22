/*
 * XREFs of ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14
 * Callers:
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Allocate@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@QEAAPEAX_K@Z @ 0x1800EC58C (-Allocate@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 *     ??0CSharedAllocation@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB190 (--0CSharedAllocation@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::AllocateCrossContainerGuestReadWriteSharedMemory(
        DirectComposition::CDevice *this,
        unsigned __int64 a2,
        struct DirectComposition::CSharedAllocation **a3)
{
  _QWORD *v3; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // esi
  DirectComposition::CCrossContainerGuestReadWriteSharedSection *v13; // rsi
  DirectComposition::CSharedAllocation *v14; // rcx
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DirectComposition::CCrossContainerGuestReadWriteSharedSection *v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !*((_BYTE *)this + 832) )
  {
    v7 = -2147483634;
    v8 = 909LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)v7);
    return v7;
  }
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  if ( a2 + 56 < a2 )
  {
    v7 = -2147024362;
    v8 = 919LL;
    goto LABEL_12;
  }
  v19 = 0LL;
  v9 = (a2 + 16439) & 0xFFFFFFFFFFFFC000uLL;
  v10 = DirectComposition::CCrossContainerGuestReadWriteSharedSection::Create(this, v9, &v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v19;
    v14 = (DirectComposition::CSharedAllocation *)DirectComposition::CCrossContainerGuestReadWriteSharedSection::Allocate(
                                                    v19,
                                                    v9);
    if ( v13 )
      v3 = (_QWORD *)((char *)v13 + 8);
    v15 = (char *)this + 552;
    v16 = *(_QWORD *)v15;
    if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
      __fastfail(3u);
    *v3 = v16;
    v3[1] = v15;
    *(_QWORD *)(v16 + 8) = v3;
    *(_QWORD *)v15 = v3;
    v17 = DirectComposition::CSharedAllocation::CSharedAllocation(v14, v13);
    *a3 = (struct DirectComposition::CSharedAllocation *)v17;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v17 + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
