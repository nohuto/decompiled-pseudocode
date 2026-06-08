/*
 * XREFs of PctGetPlatformCtr @ 0x1C002DF20
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

__int64 __fastcall PctGetPlatformCtr(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10
  _QWORD *v5; // r11

  if ( a2 >= 5 )
    return 3221225485LL;
  v3 = PctPlatformCounterState(a1, a2);
  result = 0LL;
  if ( !*(_BYTE *)v3 )
    return 3221225659LL;
  *v4 = *(_QWORD *)(v3 + 8);
  *v5 = *(_QWORD *)(v3 + 32);
  return result;
}
