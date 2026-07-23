/*
 * XREFs of sub_140A86160 @ 0x140A86160
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A87944 @ 0x140A87944 (sub_140A87944.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A86160(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx

  sub_140A88738(a1);
  v9 = sub_140A88430(a1);
  if ( v9 )
  {
    sub_140A83D24();
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 164));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 168));
    sub_140A83C18(a4);
    v10 = sub_140A87944(a4, a5, a6);
    if ( v10 )
    {
      v11 = v10;
      sub_140A88948(
        byte_140C0D8F0,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      sub_1405FFA20(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140C0D8F0);
    }
  }
  v12 = sub_14042A5E0(a1, a2);
  v13 = v12;
  if ( v9 && v12 < 0 )
    sub_140A839B8(v9);
  return v13;
}
