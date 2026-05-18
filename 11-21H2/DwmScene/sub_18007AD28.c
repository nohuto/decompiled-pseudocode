/*
 * XREFs of sub_18007AD28 @ 0x18007AD28
 * Callers:
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007AEB8 @ 0x18007AEB8 (sub_18007AEB8.c)
 *     sub_18007AF24 @ 0x18007AF24 (sub_18007AF24.c)
 *     sub_18007AF8C @ 0x18007AF8C (sub_18007AF8C.c)
 *     sub_18007B0EC @ 0x18007B0EC (sub_18007B0EC.c)
 *     sub_18007B13C @ 0x18007B13C (sub_18007B13C.c)
 *     sub_18007B150 @ 0x18007B150 (sub_18007B150.c)
 *     sub_18007B198 @ 0x18007B198 (sub_18007B198.c)
 *     sub_18007B62C @ 0x18007B62C (sub_18007B62C.c)
 * Callees:
 *     sub_1800A7C40 @ 0x1800A7C40 (sub_1800A7C40.c)
 */

__int64 __fastcall sub_18007AD28(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_1800A7C40(v3);
      v3 += 128LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
