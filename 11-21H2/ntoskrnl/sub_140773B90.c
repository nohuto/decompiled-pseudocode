/*
 * XREFs of sub_140773B90 @ 0x140773B90
 * Callers:
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 * Callees:
 *     sub_14076B534 @ 0x14076B534 (sub_14076B534.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 */

__int64 __fastcall sub_140773B90(__int64 a1, char a2, unsigned int *a3)
{
  unsigned __int8 v6; // al
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  sub_14077572C(0LL);
  if ( a2 )
    v6 = *(_BYTE *)(a1 + 466);
  else
    v6 = *(_BYTE *)(a1 + 467);
  if ( v6 )
  {
    v7 = 3;
    if ( v6 > 3u )
    {
      if ( v6 == 4 || v6 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = v6;
    }
  }
  else
  {
    sub_14076B534(a1, &v9);
    if ( v9 )
      v7 = (~*(_BYTE *)(v9 + 560) & 8 | 0x10u) >> 3;
    else
      v7 = 1;
  }
  result = sub_140775698(0LL);
  *a3 = v7;
  return result;
}
