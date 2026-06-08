/*
 * XREFs of AmdPctGetPlatformCtr @ 0x1C0020840
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1C0002E70 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdPctGetPlatformCtr(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10
  _QWORD *v5; // r11

  if ( a2 >= 3 )
    return 3221225485LL;
  v3 = AmdPctPlatformCounterState(a1, a2);
  result = 0LL;
  if ( !*(_BYTE *)v3 )
    return 3221225659LL;
  *v4 = *(_QWORD *)(v3 + 8);
  *v5 = *(_QWORD *)(v3 + 32);
  return result;
}
