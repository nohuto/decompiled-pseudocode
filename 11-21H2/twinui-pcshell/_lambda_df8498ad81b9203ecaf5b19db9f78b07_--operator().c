/*
 * XREFs of _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x18006B1B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___::Run @ 0x18006B0B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  NTSTATUS v6; // eax
  signed int v7; // eax
  __int64 v8; // r8
  bool v9; // sf
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  unsigned int i; // ebx
  __int64 v14; // rsi
  int (__fastcall *v15)(__int64, _QWORD, GUID *, __int64 *); // rdi
  void *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  int v18; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID pv; // [rsp+40h] [rbp-59h] BYREF
  int v21; // [rsp+48h] [rbp-51h] BYREF
  int v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  _BYTE v24[16]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-29h] BYREF
  const wchar_t *v26; // [rsp+80h] [rbp-19h]
  int v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+8Ch] [rbp-Dh]
  int *v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  int *v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+A8h] [rbp+Fh]
  __int64 *v33; // [rsp+B0h] [rbp+17h]
  __int64 v34; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v1 = a1;
  v23 = a1;
  pv = 0LL;
  v2 = *(_QWORD **)a1;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    &pv);
  v3 = 0LL;
  if ( v2[2] )
  {
    v4 = 0LL;
    do
    {
      v5 = v2[1];
      v18 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v6 = RtlQueryWnfStateData(v24, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v18);
        v7 = RtlNtStatusToDosError(v6);
        v9 = v7 < 0;
        if ( v7 > 0 )
        {
          v7 = (unsigned __int16)v7 | 0x80070000;
          v9 = v7 < 0;
        }
        if ( v9 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\TabletModeHelpers.h",
            (const char *)(unsigned int)v7,
            0);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        {
          LODWORD(v17) = v18;
          v22 = *(unsigned __int8 *)(v1 + 8);
          v21 = *(_DWORD *)(v5 + v4);
          v10 = (const wchar_t *)pv;
          if ( pv )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( *((_WORD *)pv + v11) );
            v12 = 2 * v11 + 2;
          }
          else
          {
            v12 = 10;
            v10 = L"NULL";
          }
          v26 = v10;
          v27 = v12;
          v28 = 0;
          v29 = &v21;
          v30 = 4LL;
          v31 = &v22;
          v32 = 4LL;
          v33 = &v17;
          v34 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &MICROSOFT_TWINUI_PUBLISHER_Context,
            &ImmersiveShell_AppManager_ApplicationStateChanged,
            v8,
            5LL,
            v25);
        }
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v2[4] + 24LL))(v2[4], &v19) >= 0 )
      {
        for ( i = 0; i < v19; ++i )
        {
          v17 = 0LL;
          v14 = v2[4];
          v15 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 32LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
          if ( v15(v14, i, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v17) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(
              v17,
              v2[3],
              *(unsigned int *)(v5 + v4),
              *(_QWORD *)(v5 + v4 + 8));
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        }
        v1 = v23;
      }
      ++v3;
      v4 += 16LL;
    }
    while ( v3 < v2[2] );
  }
  v16 = pv;
  pv = 0LL;
  CoTaskMemFree(v16);
}
