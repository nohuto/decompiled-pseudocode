/*
 * XREFs of ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808
 * Callers:
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MapSharedMemory@CSharedSection@DirectComposition@@CAPEAEPEAX_K@Z @ 0x18007E980 (-MapSharedMemory@CSharedSection@DirectComposition@@CAPEAEPEAX_K@Z.c)
 *     ??$make_unique@VCSharedSection@DirectComposition@@AEAPEAVCDevice@2@PEAVCSharedSectionProxy@2@AEAPEAEAEAPEAXAEA_K$0A@@std@@YA?AV?$unique_ptr@VCSharedSection@DirectComposition@@U?$default_delete@VCSharedSection@DirectComposition@@@std@@@0@AEAPEAVCDevice@DirectComposition@@$$QEAPEAVCSharedSectionProxy@3@AEAPEAEAEAPEAXAEA_K@Z @ 0x18007E9D0 (--$make_unique@VCSharedSection@DirectComposition@@AEAPEAVCDevice@2@PEAVCSharedSectionProxy@2@AEA.c)
 *     ?CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSectionBaseProxy@2@PEAPEAX@Z @ 0x18007EA9C (-CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSection.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___ @ 0x1800EC434 (wil--details--lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___--_lambda_call__lambda_3543.c)
 *     wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C (wil--details--lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___--_lambda_call__lambda_e24b.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??1?$unique_ptr@VCSharedSection@DirectComposition@@U?$default_delete@VCSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800FB3E8 (--1-$unique_ptr@VCSharedSection@DirectComposition@@U-$default_delete@VCSharedSection@DirectCompo.c)
 */

__int64 __fastcall DirectComposition::CSharedSection::Create(
        struct DirectComposition::CDevice *a1,
        char a2,
        unsigned __int64 a3,
        struct DirectComposition::CSharedSection **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rbx
  __int64 v10; // rcx
  struct DirectComposition::CSharedSection *v11; // rbx
  HANDLE hObject; // [rsp+30h] [rbp-99h] BYREF
  struct DirectComposition::CSharedSectionBaseProxy *v14; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int8 *v15; // [rsp+40h] [rbp-89h] BYREF
  struct DirectComposition::CDevice *v16; // [rsp+48h] [rbp-81h] BYREF
  struct DirectComposition::CSharedSection *v17; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-71h] BYREF
  struct DirectComposition::CSharedSectionBaseProxy *v19; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int8 **v20; // [rsp+68h] [rbp-61h] BYREF
  char v21; // [rsp+70h] [rbp-59h]
  _QWORD v22[2]; // [rsp+78h] [rbp-51h] BYREF
  char v23; // [rsp+88h] [rbp-41h]
  struct _RTL_HEAP_PARAMETERS Parameters; // [rsp+90h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v14 = 0LL;
  hObject = 0LL;
  v18 = a3;
  v16 = a1;
  v7 = DirectComposition::CDevice::CreateAndInitializeSharedSectionProxy(a1, a3, 0, &v14, &hObject);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\sharedsection.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v22[0] = &v16;
  v23 = 1;
  v22[1] = &v14;
  v15 = DirectComposition::CSharedSection::MapSharedMemory(hObject, a3);
  v9 = v15;
  if ( !v15 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\sharedsection.cpp",
      (const char *)0x8007000ELL);
LABEL_11:
    wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___(v22);
    return v8;
  }
  hObject = 0LL;
  v20 = &v15;
  v21 = 1;
  if ( a2 )
  {
    memset_0(&Parameters, 0, sizeof(Parameters));
    Parameters.Length = 96;
    Parameters.InitialCommit = a3;
    Parameters.InitialReserve = a3;
    hObject = RtlCreateHeap(1u, v9, a3, a3, 0LL, &Parameters);
    if ( !hObject )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\sharedsection.cpp",
        (const char *)0x8007000ELL);
LABEL_15:
      wil::details::lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___::_lambda_call__lambda_354319ae0e0bc0d262212ec8f4a3662d___(&v20);
      goto LABEL_11;
    }
  }
  v19 = v14;
  std::make_unique<DirectComposition::CSharedSection,DirectComposition::CDevice * &,DirectComposition::CSharedSectionProxy *,unsigned char * &,void * &,unsigned __int64 &,0>(
    (unsigned int)&v17,
    (unsigned int)&v16,
    (unsigned int)&v19,
    (unsigned int)&v15,
    (__int64)&hObject,
    (__int64)&v18);
  v11 = v17;
  if ( !v17 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\sharedsection.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<DirectComposition::CSharedSection>::~unique_ptr<DirectComposition::CSharedSection>(&v17);
    goto LABEL_15;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v10, &DCOMPEVENT_CREATE_SHARED_MEMORY_SECTION, v17, (unsigned int)a3);
  *a4 = v11;
  return 0LL;
}
