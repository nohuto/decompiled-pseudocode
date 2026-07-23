/*
 * XREFs of sub_1403E9E64 @ 0x1403E9E64
 * Callers:
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E9C2C @ 0x1403E9C2C (sub_1403E9C2C.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403E9E64(
        char a1,
        unsigned __int16 **a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        __int64 a7,
        __int64 Src,
        _DWORD *a9)
{
  unsigned __int16 v12; // di
  unsigned __int16 *v14; // rdx
  char v15; // r11
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v17; // r8
  unsigned __int16 i; // ax
  unsigned __int16 *v19; // rcx
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r10
  unsigned __int64 v22; // rdx
  char v23; // al
  int v25[2048]; // [rsp+50h] [rbp-2048h] BYREF

  v12 = 0;
  memset(v25, 0, sizeof(v25));
  v14 = *a2;
  v15 = a1 | 8;
  v16 = *a2 + 1;
  *a2 = v16;
  if ( *v16 != 94 )
  {
    v16 = v14;
    v15 = a1;
  }
  v17 = v16 + 1;
  i = v16[1];
  if ( i != 93 )
    goto LABEL_5;
  HIBYTE(v25[2]) = 32;
  v17 = v16 + 2;
  v12 = 93;
  for ( i = v16[2]; i != 93; i = *v17 )
  {
LABEL_5:
    v19 = v17++;
    if ( i == 45 && v12 && (v20 = *v17, *v17 != 93) )
    {
      v17 = v19 + 2;
      if ( v12 >= v20 )
      {
        v21 = v12;
      }
      else
      {
        v21 = v20;
        v20 = v12;
      }
      do
      {
        v22 = (unsigned __int64)v20 >> 3;
        v23 = v20++;
        *((_BYTE *)v25 + v22) |= 1 << (v23 & 7);
      }
      while ( v20 <= v21 );
      v12 = 0;
    }
    else
    {
      v12 = i;
      *((_BYTE *)v25 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v17;
  return sub_1403E9C2C(v15, (__int64)v25, a3, a4, a5, a6, a7, Src, a9);
}
