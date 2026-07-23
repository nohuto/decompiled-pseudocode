/*
 * XREFs of sub_1403E847C @ 0x1403E847C
 * Callers:
 *     vswprintf_s @ 0x1403E5D50 (vswprintf_s.c)
 *     _vsnwprintf_s @ 0x1403E6670 (_vsnwprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E85A8 @ 0x1403E85A8 (sub_1403E85A8.c)
 */

__int64 __fastcall sub_1403E847C(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  char *ptr; // rax
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
    if ( a2 <= 0x3FFFFFFF )
    {
      File._cnt = 2 * a2;
LABEL_6:
      File._base = a1;
      File._ptr = a1;
      File._flag = 66;
      v6 = sub_1403E85A8(&File, a3, a4);
      *(_WORD *)&a1[2 * a2 - 2] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
            *(_WORD *)a1 = 0;
          return v7;
        }
        return 4294967294LL;
      }
      if ( --File._cnt < 0 )
      {
        if ( flsbuf(0, &File) == -1 )
          return 4294967294LL;
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt >= 0 )
      {
        *ptr = 0;
        return v7;
      }
      if ( flsbuf(0, &File) != -1 )
        return v7;
      return 4294967294LL;
    }
  }
  _misaligned_access();
  return 0xFFFFFFFFLL;
}
