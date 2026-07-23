/*
 * XREFs of sub_14097F250 @ 0x14097F250
 * Callers:
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 * Callees:
 *     sub_140961390 @ 0x140961390 (sub_140961390.c)
 *     sub_14097F2B0 @ 0x14097F2B0 (sub_14097F2B0.c)
 */

void __fastcall sub_14097F250(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  sub_14097F2B0(a1, a3, a4);
  if ( *((_BYTE *)CurrentThread + 586) != 1
    && (*((_DWORD *)CurrentThread + 29) & 0x400) == 0
    && (*(_DWORD *)(a1 + 1124) & 0x100) != 0 )
  {
    sub_140961390((__int64)CurrentThread, 1);
  }
}
