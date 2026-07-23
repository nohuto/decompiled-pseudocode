/*
 * XREFs of sub_140360A84 @ 0x140360A84
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1409870AC @ 0x1409870AC (sub_1409870AC.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140360A84(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
