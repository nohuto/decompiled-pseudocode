/*
 * XREFs of sub_14063383C @ 0x14063383C
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 */

__int64 __fastcall sub_14063383C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a1;
  v5 = 0;
  if ( v4 )
  {
    sub_1403606C4(v4);
    *a1 = 0LL;
  }
  if ( ((a2 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
    v5 = sub_1407DE8D0(a2, 2LL, a3, 1870099525LL, &v8);
    if ( v5 >= 0 )
      *a1 = v8;
  }
  return (unsigned int)v5;
}
