/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x1800E9D34
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x1800E9C98 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800ECB74 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___(
        __int64 a1)
{
  __int64 v2; // rdx
  const unsigned __int16 **v3; // rax
  __int64 v5; // rdx
  _DWORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
  if ( v9 )
  {
    v3 = *(const unsigned __int16 ***)a1;
    v7 = 0;
    if ( (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
                (ApplicationViewManagement::CPersistence *)(v9 + 40),
                *v3,
                L"ShowInSwitchers",
                v6,
                0xCu) >= 0 )
    {
      if ( v6[0] == 4 )
      {
        if ( v6[1] == 1397960752 )
        {
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 216LL) = v7 != 0;
          return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9, v2);
        }
        v5 = 62LL;
      }
      else
      {
        v5 = 61LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL);
    }
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9, v2);
}
