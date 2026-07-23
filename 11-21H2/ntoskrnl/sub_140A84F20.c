/*
 * XREFs of sub_140A84F20 @ 0x140A84F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A87944 @ 0x140A87944 (sub_140A87944.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A84F20(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // rdi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx

  sub_140A88738(a1);
  v9 = sub_140A88430(a1);
  if ( v9 )
  {
    sub_140A83CA4(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 164));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 168));
    sub_140A83C18(a4);
    v11 = sub_140A87944(a4, a5, a6);
    if ( v11 )
    {
      v12 = v11;
      sub_140A88948(
        byte_140C0D8F4,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v11,
        0LL,
        0LL);
      sub_1405FFA20(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140C0D8F4);
    }
  }
  v13 = sub_14042A5E0(a1, a2);
  v14 = v13;
  if ( v9 )
  {
    if ( v13 < 0 )
      sub_140A839B8(v9);
  }
  return v14;
}
