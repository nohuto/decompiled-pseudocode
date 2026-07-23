/*
 * XREFs of sub_1403E8394 @ 0x1403E8394
 * Callers:
 *     _vsnprintf_s @ 0x1403E6560 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x1403E7050 (vsprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E7A78 @ 0x1403E7A78 (sub_1403E7A78.c)
 */

__int64 __fastcall sub_1403E8394(char *a1, unsigned __int64 a2, char *a3, int *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      File._cnt = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x7FFFFFFF )
    {
      File._cnt = a2;
LABEL_6:
      File._base = a1;
      File._ptr = a1;
      File._flag = 66;
      v6 = sub_1403E7A78(&File, a3, a4);
      a1[a2 - 1] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v7;
        }
        return 4294967294LL;
      }
      if ( --File._cnt < 0 )
      {
        if ( flsbuf(0, &File) == -1 )
          return 4294967294LL;
      }
      else
      {
        *File._ptr = 0;
      }
      return v7;
    }
  }
  _misaligned_access();
  return 0xFFFFFFFFLL;
}
