/*
 * XREFs of sub_1407F1C84 @ 0x1407F1C84
 * Callers:
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407F1C84(volatile signed __int32 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v2 = *((_QWORD *)CurrentThread + 23);
  if ( (*(_DWORD *)(v2 + 2172) & 0x1000) != 0 )
    return 1LL;
  v3 = *(volatile signed __int32 **)(v2 + 1368);
  if ( !v3 )
    return 1LL;
  v4 = *v3;
  while ( v4 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(v3, v4 + 1, v4);
    if ( v5 == v4 )
    {
      _InterlockedIncrement(v3 + 3);
      *a1 = v3;
      return 1LL;
    }
  }
  return 0LL;
}
