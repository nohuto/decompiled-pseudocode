/*
 * XREFs of sub_1403E0460 @ 0x1403E0460
 * Callers:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E3D1C @ 0x1403E3D1C (sub_1403E3D1C.c)
 */

__int64 __fastcall sub_1403E0460(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a3 && (!a2 || a1) )
  {
    File._flag = 66;
    File._base = a1;
    File._ptr = a1;
    if ( a2 <= 0x3FFFFFFF )
      File._cnt = 2 * a2;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = sub_1403E3D1C(&File, a3, a4, a5);
    if ( a1 )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
