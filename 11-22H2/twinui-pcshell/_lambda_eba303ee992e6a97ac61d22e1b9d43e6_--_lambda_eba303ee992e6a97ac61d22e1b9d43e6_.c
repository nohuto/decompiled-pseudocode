/*
 * XREFs of _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::_lambda_eba303ee992e6a97ac61d22e1b9d43e6_ @ 0x1801E1144
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18002BEC0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18019EC30 (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_eba303ee992e6a97ac61d22e1b9d43e6_::_lambda_eba303ee992e6a97ac61d22e1b9d43e6_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  _DWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 result; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(a1);
  *(_DWORD *)(v6 + 16) = *v5;
  *(_QWORD *)(v6 + 8) = v7;
  result = v6;
  *(_DWORD *)(v6 + 20) = *a5;
  return result;
}
