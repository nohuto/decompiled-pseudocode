/*
 * XREFs of sub_180070DA0 @ 0x180070DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017DEC @ 0x180017DEC (sub_180017DEC.c)
 */

bool __fastcall sub_180070DA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  v3 = ((__int64 (*)(void))_RTtypeid)();
  v4 = _RTtypeid(a2);
  return !sub_180017DEC(v3, v4);
}
