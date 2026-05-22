/*
 * XREFs of ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800D7620
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCInputProviderBase::StabilizeTargetRay(
        MPCInputProviderBase *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)a2 + 48) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      a4);
  RayStabilizer::StabilizeInput((MPCInputProviderBase *)((char *)this + 448), a2);
}
