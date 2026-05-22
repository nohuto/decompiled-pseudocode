/*
 * XREFs of ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x1801C64BC
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801182AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180119310 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1801C5E88 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     <none>
 */

struct IInputTarget *__fastcall DWMInputRouter::GetInputHostTargetForProcessId(DWMInputRouter *this, int a2)
{
  __int64 **v2; // rcx
  __int64 *i; // rax

  v2 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      return (struct IInputTarget *)i[7];
  }
  return 0LL;
}
