/*
 * XREFs of sprintf @ 0x1403E26A0
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 */

int sprintf(char *Dest, const char *Format, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  FILE File; // [rsp+38h] [rbp-40h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, Format);
  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && Dest )
  {
    File._base = Dest;
    File._ptr = Dest;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v2 = sub_1403E478C(&File, Format, 0LL, (__int64 *)va);
    v3 = --File._cnt < 0;
    v4 = v2;
    if ( v3 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v4;
  }
  else
  {
    _misaligned_access();
    return -1;
  }
}
