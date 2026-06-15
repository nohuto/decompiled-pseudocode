/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140095A00
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140097280 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcess.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140015A0C (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001A794 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001A7DC (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x14001CEFC (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___::_lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___ @ 0x1400950E8 (wil--details--lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___--_lambda_call__lambda_a129.c)
 *     wil::details::lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___::_lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___ @ 0x140095124 (wil--details--lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___--_lambda_call__lambda_f907.c)
 *     wil::details::lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___::_lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___ @ 0x140095154 (wil--details--lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___--_lambda_call__lambda_ab3a.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140095194 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140095D3C (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        CCrossProcessBaseClientEndpoint *this,
        struct ICrossProcessMemory *a2,
        __int64 a3,
        struct ICrossProcessEvent *a4,
        struct ICrossProcessEvent *a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  struct ControlData *v14; // r15
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rdx
  const struct tWAVEFORMATEX *v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  void *v26; // r8
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  struct ControlData *v31; // rdx
  __int64 v32; // [rsp+20h] [rbp-40h] BYREF
  struct ControlData *v33; // [rsp+28h] [rbp-38h] BYREF
  char *v34; // [rsp+30h] [rbp-30h] BYREF
  char v35; // [rsp+38h] [rbp-28h]
  char *v36; // [rsp+40h] [rbp-20h] BYREF
  char v37; // [rsp+48h] [rbp-18h]
  char *v38; // [rsp+50h] [rbp-10h] BYREF
  char v39; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v41; // [rsp+80h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 392));
  v36 = (char *)this - 408;
  v37 = 1;
  if ( *((_DWORD *)this - 88) )
  {
    v9 = -2005139440;
    v10 = 1034LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v9);
LABEL_24:
    wil::details::lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___::_lambda_call__lambda_f9076b9eeb0e01e6f9fb43c9bd823371___(&v36);
    return v9;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v10 = 1035LL;
    goto LABEL_5;
  }
  v32 = 0LL;
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=(&v32, (__int64)a2);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)a4);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a5);
  v33 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, char *, struct ControlData **))(*(_QWORD *)v32 + 32LL))(v32, &v41, &v33);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 1047LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v12);
LABEL_23:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v32);
    goto LABEL_24;
  }
  v14 = v33;
  v15 = (void *)AERTGetDLLRTHeap();
  v17 = (void *)AE_ALLOCATE_SAFEMULT(
                  v16,
                  *((unsigned int *)v14 + 50),
                  v15,
                  (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
  *((_QWORD *)this - 41) = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
    v12 = 2147942414LL;
    v13 = 1054LL;
    goto LABEL_8;
  }
  memcpy_0(v17, (char *)v14 + 200, *((unsigned int *)v14 + 50));
  v34 = (char *)this - 408;
  v35 = 1;
  if ( !CCrossProcessBaseEndpoint::IsValidControlData((CCrossProcessBaseClientEndpoint *)((char *)this - 408), v14) )
  {
    v9 = -2005139387;
    v18 = 1063LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v9);
LABEL_22:
    wil::details::lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___::_lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___(&v34);
    goto LABEL_23;
  }
  *((_QWORD *)this - 28) = 0LL;
  *((_QWORD *)this - 30) = 0LL;
  v19 = (const struct tWAVEFORMATEX *)*((_QWORD *)this - 41);
  *((_DWORD *)this - 80) = v19[10].nBlockAlign;
  *((float *)this - 63) = (float)(int)v19[10].nSamplesPerSec;
  *((_DWORD *)this - 76) = GetBitsPerSample(v19 + 10);
  v22 = *(_DWORD *)(v21 + 164) - *(_DWORD *)(v21 + 160);
  *((_DWORD *)this - 64) = v22;
  v23 = v22 / v20;
  v24 = a6;
  if ( a6 > v23 )
  {
    v9 = -2147024809;
    v18 = 1087LL;
    goto LABEL_13;
  }
  if ( !a6 )
    v24 = v23;
  *((_DWORD *)this - 78) = v24;
  v26 = (void *)AERTCreateZoneHeap(v20 * v24);
  *((_QWORD *)this - 33) = v26;
  if ( !v26 )
  {
    v9 = -2147024882;
    v18 = 1093LL;
    goto LABEL_13;
  }
  v27 = AE_ALLOCATE_SAFEMULT(
          v25,
          (unsigned int)(*((_DWORD *)this - 80) * *((_DWORD *)this - 78)),
          v26,
          AERTZoneAllocate);
  *((_QWORD *)this - 37) = v27;
  v38 = (char *)this - 408;
  v39 = 1;
  if ( !v27 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44E,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
    wil::details::lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___::_lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___(
      &v38,
      v28,
      v29);
    goto LABEL_22;
  }
  v31 = v33;
  *((_QWORD *)this - 42) = v33;
  *((_QWORD *)this - 36) = (char *)v31 + *(unsigned int *)(*((_QWORD *)this - 41) + 156LL);
  if ( *((_DWORD *)v31 + 45) != -1 )
    *((_QWORD *)this - 35) = (char *)v33 + *(unsigned int *)(*((_QWORD *)this - 42) + 180LL);
  _InterlockedExchange((volatile __int32 *)this - 88, 1);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this - 43, v32);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v32);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v36 + 16));
  return 0LL;
}
