/*
 * XREFs of ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180046510
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@@Z @ 0x180024734 (--$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  HRESULT v6; // eax
  __int64 v7; // r8
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD v12[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  char v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  v14 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v6 = WindowsDuplicateString(a2, &newString);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v15 = a1 - 48;
    string = newString;
    newString = 0LL;
    v17 = 0;
    v14 = 1;
    v12[0] = 3;
    v12[1] = 130;
    v12[2] = 0;
    v8 = Windows::Internal::MakeAsyncOperation<Windows::Internal::CHSTRINGResult,HSTRING__ *,Windows::Internal::ComTaskPoolHandler,_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_>(
           (__int64)v12,
           a3,
           v7,
           (__int64)&v15);
    WindowsDeleteString(string);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 566LL;
  }
  else
  {
    v9 = (unsigned int)v6;
    v10 = 478LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v9);
LABEL_7:
  WindowsDeleteString(newString);
  return (unsigned int)v8;
}
