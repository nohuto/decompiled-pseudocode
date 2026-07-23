/*
 * XREFs of sub_14045B8E6 @ 0x14045B8E6
 * Callers:
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_14056A438 @ 0x14056A438 (sub_14056A438.c)
 */

bool __fastcall sub_14045B8E6(__int64 a1, int a2)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  if ( dword_140C2B998 )
  {
    v5 = 0LL;
    v6 = 0LL;
    sub_14056A438(a2, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v4, (__int64)&v6);
    return v5 + v6 > (unsigned __int64)(unsigned int)dword_140C2B998;
  }
  return v2;
}
