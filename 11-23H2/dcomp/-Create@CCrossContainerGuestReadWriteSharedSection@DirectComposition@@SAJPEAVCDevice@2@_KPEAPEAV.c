/*
 * XREFs of ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8
 * Callers:
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MapSharedMemory@CSharedSection@DirectComposition@@CAPEAEPEAX_K@Z @ 0x18007E980 (-MapSharedMemory@CSharedSection@DirectComposition@@CAPEAEPEAX_K@Z.c)
 *     ?CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSectionBaseProxy@2@PEAPEAX@Z @ 0x18007EA9C (-CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSection.c)
 *     ??$make_unique@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@AEAPEAVCDevice@2@PEAVCCrossContainerGuestReadWriteSharedSectionProxy@2@AEAPEAEAEA_K$0A@@std@@YA?AV?$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U?$default_delete@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@@std@@@0@AEAPEAVCDevice@DirectComposition@@$$QEAPEAVCCrossContainerGuestReadWriteSharedSectionProxy@3@AEAPEAEAEA_K@Z @ 0x1800EC3A0 (--$make_unique@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@AEAPEAVCDevice@2@P.c)
 *     wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___ @ 0x1800EC434 (wil--details--lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___--_lambda_call__lambda_3543.c)
 *     wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C (wil--details--lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___--_lambda_call__lambda_e24b.c)
 *     ??1?$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U?$default_delete@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC4A4 (--1-$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U-$default_delete.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSection::Create(
        struct DirectComposition::CDevice *a1,
        __int64 a2,
        struct DirectComposition::CCrossContainerGuestReadWriteSharedSection **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  struct DirectComposition::CCrossContainerGuestReadWriteSharedSection *v9; // rbx
  HANDLE hObject; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 *v11; // [rsp+38h] [rbp-38h] BYREF
  struct DirectComposition::CSharedSectionBaseProxy *v12; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int8 **v13; // [rsp+48h] [rbp-28h] BYREF
  char v14; // [rsp+50h] [rbp-20h]
  _QWORD v15[2]; // [rsp+58h] [rbp-18h] BYREF
  char v16; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct DirectComposition::CDevice *v18; // [rsp+90h] [rbp+20h] BYREF
  __int64 v19; // [rsp+98h] [rbp+28h] BYREF
  struct DirectComposition::CSharedSectionBaseProxy *v20; // [rsp+A8h] [rbp+38h] BYREF

  v19 = a2;
  v18 = a1;
  v20 = 0LL;
  hObject = 0LL;
  v5 = DirectComposition::CDevice::CreateAndInitializeSharedSectionProxy(a1, a2, 1, &v20, &hObject);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerguestreadwritesharedsection.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v15[0] = &v18;
  v16 = 1;
  v15[1] = &v20;
  v11 = DirectComposition::CSharedSection::MapSharedMemory(hObject, a2);
  if ( !v11 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerguestreadwritesharedsection.cpp",
      (const char *)0x8007000ELL);
LABEL_6:
    wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___((__int64)v15);
    return v6;
  }
  v14 = 1;
  v13 = &v11;
  v12 = v20;
  std::make_unique<DirectComposition::CCrossContainerGuestReadWriteSharedSection,DirectComposition::CDevice * &,DirectComposition::CCrossContainerGuestReadWriteSharedSectionProxy *,unsigned char * &,unsigned __int64 &,0>(
    &hObject,
    &v18,
    (__int64 *)&v12,
    (__int64 *)&v11,
    &v19);
  v9 = (struct DirectComposition::CCrossContainerGuestReadWriteSharedSection *)hObject;
  if ( !hObject )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerguestreadwritesharedsection.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<DirectComposition::CCrossContainerGuestReadWriteSharedSection>::~unique_ptr<DirectComposition::CCrossContainerGuestReadWriteSharedSection>((DirectComposition::CCrossContainerGuestReadWriteSharedSection **)&hObject);
    wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___((__int64)&v13);
    goto LABEL_6;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v8, &DCOMPEVENT_CREATE_SHARED_MEMORY_SECTION, hObject, (unsigned int)a2);
  *a3 = v9;
  return 0LL;
}
