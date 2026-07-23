/*
 * XREFs of sub_14097AB60 @ 0x14097AB60
 * Callers:
 *     sub_14097BB30 @ 0x14097BB30 (sub_14097BB30.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 *     sub_1409B45F0 @ 0x1409B45F0 (sub_1409B45F0.c)
 *     sub_140A6A9A0 @ 0x140A6A9A0 (sub_140A6A9A0.c)
 */

__int64 __fastcall sub_14097AB60(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // ebx

  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 8) == 0 )
      sub_140A6A9A0(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(volatile signed __int64 **)(a2 + 72);
    if ( _InterlockedIncrement64(v8 + 2) <= 1 )
      __fastfail(0xEu);
    sub_140281C44((__int64)CurrentThread, a2);
    v9 = sub_1409B45F0(v8, a3);
    sub_140882604((PVOID)v8);
    sub_14030B7F0((__int64)CurrentThread, a2);
    return v9;
  }
}
