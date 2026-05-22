/*
 * XREFs of ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70
 * Callers:
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C (wil--details--lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___--_lambda_call__lambda_e24b.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??1?$unique_ptr@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@U?$default_delete@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC8F0 (--1-$unique_ptr@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@U-$default_delete@V.c)
 *     ?CreateCrossContainerHostReadOnlySharedSectionProxy@CDevice@DirectComposition@@QEAAJ_KAEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedSectionProxy@2@@Z @ 0x1800EEEBC (-CreateCrossContainerHostReadOnlySharedSectionProxy@CDevice@DirectComposition@@QEAAJ_KAEBU_GUID@.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSection::Create(
        struct DirectComposition::CDevice *a1,
        unsigned __int64 a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        struct DirectComposition::CCrossContainerHostReadOnlySharedSection **a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  char *v10; // rax
  struct DirectComposition::CCrossContainerHostReadOnlySharedSection *v11; // rbx
  struct DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy *v12; // rdx
  __int64 v13; // rcx
  struct _GUID v14; // xmm1
  struct DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy *v16; // [rsp+30h] [rbp-30h] BYREF
  DirectComposition::CCrossContainerHostReadOnlySharedSection *v17; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct DirectComposition::CDevice *v21; // [rsp+80h] [rbp+20h] BYREF

  v21 = a1;
  v16 = 0LL;
  v8 = DirectComposition::CDevice::CreateCrossContainerHostReadOnlySharedSectionProxy(a1, a2, a3, a4, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerhostreadonlysharedsection.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  v19 = 1;
  v18[0] = &v21;
  v18[1] = &v16;
  v10 = (char *)DefaultHeap::AllocClear(0x60uLL);
  v11 = (struct DirectComposition::CCrossContainerHostReadOnlySharedSection *)v10;
  if ( !v10 )
  {
    v17 = 0LL;
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerhostreadonlysharedsection.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<DirectComposition::CCrossContainerHostReadOnlySharedSection>::~unique_ptr<DirectComposition::CCrossContainerHostReadOnlySharedSection>(&v17);
    wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___((__int64)v18);
    return v9;
  }
  v12 = v16;
  v13 = (__int64)v21;
  *((_QWORD *)v10 + 3) = v21;
  *((_QWORD *)v10 + 4) = v12;
  *(_QWORD *)v10 = &DirectComposition::CCrossContainerHostReadOnlySharedSection::`vftable';
  *(struct _GUID *)(v10 + 56) = *a3;
  v14 = *a4;
  *((_QWORD *)v10 + 11) = a2;
  *(struct _GUID *)(v10 + 72) = v14;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v13, &DCOMPEVENT_CREATE_SHARED_MEMORY_SECTION, (__int64)v10, a2);
  *a5 = v11;
  return 0LL;
}
