/*
 * XREFs of sub_1403B30A0 @ 0x1403B30A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B3120 @ 0x1403B3120 (sub_1403B3120.c)
 *     sub_1403B31C0 @ 0x1403B31C0 (sub_1403B31C0.c)
 */

__int64 __fastcall sub_1403B30A0(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al
  char v4; // cl
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = 0;
  if ( (int)sub_1403B31C0(&v7, &v6, &v8) < 0 )
  {
    v4 = 0;
    v3 = 0;
  }
  else
  {
    v3 = v6;
    v4 = v7;
  }
  if ( v4 != byte_140C4A1B8 && !v4 )
  {
    v2 = 0x2000;
    byte_140C4A1B8 = 0;
  }
  if ( v3 != byte_140C4A1B1 && !v3 )
  {
    v2 |= 0x4000u;
    byte_140C4A1B1 = 0;
  }
  return sub_1403B3120(a1, v2, 0LL);
}
