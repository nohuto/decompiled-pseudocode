/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x1800ECAF8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800ECA54 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800ECB74 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(
        __int64 a1)
{
  __int64 v3; // rdx
  volatile signed __int32 *v4; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v5[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v4);
  if ( v4
    && (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
              (ApplicationViewManagement::CPersistence *)(v4 + 10),
              **(const unsigned __int16 ***)a1,
              L"VirtualDesktop",
              v5,
              0x18u) >= 0 )
  {
    if ( v5[0] == 16 )
    {
      if ( v5[1] == 1447309360 )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v6;
        return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v4);
      }
      v3 = 62LL;
    }
    else
    {
      v3 = 61LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL);
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v4);
}
