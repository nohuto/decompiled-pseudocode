/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180005B64
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000670C (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z @ 0x180005D20 (--R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        char *a3,
        unsigned __int64 a4)
{
  char *v5; // r14
  PCSTR file; // rdx
  char *v9; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-49h] BYREF
  char *v12; // [rsp+58h] [rbp-21h] BYREF
  char *v13; // [rsp+60h] [rbp-19h] BYREF
  char v14; // [rsp+68h] [rbp-11h] BYREF

  v10 = a4;
  v12 = a3;
  v9 = a3;
  *a2 = 36LL;
  v5 = &v14;
  v13 = &a3[a4];
  if ( a4 >= 0x24 )
    v5 = a3;
  if ( a4 >= 0x24 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    *(_DWORD *)v5 = a1->hr;
    *((_WORD *)v5 + 2) = a1->lineNumber;
    *((_DWORD *)v5 + 3) = a1->callerReturnAddressOffset;
    *((_WORD *)v5 + 9) = a1->originLineNumber;
    *((_DWORD *)v5 + 6) = a1->originCallerReturnAddressOffset;
    v9 += 36;
  }
  file = a1->file;
  v11[0] = &v12;
  v11[1] = a2;
  v11[2] = &v10;
  v11[3] = &v9;
  v11[4] = &v13;
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, file, v5 + 6, 0LL);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->process, v5 + 32, 0LL);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->module, v5 + 8, *((unsigned __int16 *)v5 + 16));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->callerModule, v5 + 10, *((unsigned __int16 *)v5 + 4));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->message, v5 + 16, 0LL);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->originFile, v5 + 20, *((unsigned __int16 *)v5 + 3));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->callerModule, v5 + 10, *((unsigned __int16 *)v5 + 4));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->originModule, v5 + 22, *((unsigned __int16 *)v5 + 4));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    v11,
    a1->originCallerModule,
    v5 + 28,
    *((unsigned __int16 *)v5 + 11));
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v11, a1->originName, v5 + 30, 0LL);
  return *a2 <= v10;
}
