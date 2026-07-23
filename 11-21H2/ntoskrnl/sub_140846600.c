/*
 * XREFs of sub_140846600 @ 0x140846600
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_1403CD2B8 @ 0x1403CD2B8 (sub_1403CD2B8.c)
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14084667C @ 0x14084667C (sub_14084667C.c)
 */

__int64 __fastcall sub_140846600(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v3 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  v4 = sub_1403CD2D0(v3, &v7);
  if ( v4 >= 0 )
  {
    v4 = sub_14084667C(v7, &v8, 0LL);
    if ( v4 >= 0 )
    {
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 296) )
          *(_BYTE *)(a1 + 8) = sub_14042A5E0(v7, v5);
        else
          v4 = -1073741595;
      }
      else
      {
        v4 = -1073741810;
      }
    }
  }
  if ( v7 )
    sub_1403CD2B8(v7);
  return (unsigned int)v4;
}
