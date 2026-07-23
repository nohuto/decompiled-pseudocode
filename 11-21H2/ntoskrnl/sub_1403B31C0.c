/*
 * XREFs of sub_1403B31C0 @ 0x1403B31C0
 * Callers:
 *     sub_1403B30A0 @ 0x1403B30A0 (sub_1403B30A0.c)
 *     sub_1403BCF1C @ 0x1403BCF1C (sub_1403BCF1C.c)
 * Callees:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B31C0(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+88h] [rbp+30h]
  int v10; // [rsp+90h] [rbp+38h] BYREF
  int v11; // [rsp+98h] [rbp+40h]

  v11 = 0;
  v10 = 0;
  v7 = 0;
  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( (int)sub_1403B38C8((int)a1, 0, 2, 16, &v8) < 0 )
    goto LABEL_6;
  sub_14042A5E0(2147483649LL, &v10);
  if ( (v11 & 0x8000000) != 0 )
    *a3 = 1;
  if ( (unsigned __int8)sub_14042A5E0(0LL, 0LL) )
  {
    sub_14042A5E0(0x80000000LL, &v7);
    return 3221225659LL;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    *a2 = 1;
    return 0LL;
  }
}
