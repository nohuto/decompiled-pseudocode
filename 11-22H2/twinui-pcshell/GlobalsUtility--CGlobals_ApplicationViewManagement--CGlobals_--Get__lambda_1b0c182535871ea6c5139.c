/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x1800E0218
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800E0158 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800E0B0C (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(
        __int64 a1)
{
  __int64 v3; // rdx
  unsigned int v4; // [rsp+20h] [rbp-48h]
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v5);
  if ( v5
    && (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
              (ApplicationViewManagement::CPersistence *)(v5 + 40),
              **(const unsigned __int16 ***)a1,
              L"VirtualDesktop",
              v6,
              0x18u) >= 0 )
  {
    if ( v6[0] == 16 )
    {
      if ( v6[1] == 1447309360 )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v7;
        return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v5);
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
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL,
      v4);
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v5);
}
