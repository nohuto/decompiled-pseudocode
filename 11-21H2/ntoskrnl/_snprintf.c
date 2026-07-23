/*
 * XREFs of _snprintf @ 0x1403E0F90
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 */

int snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int v4; // edi
  FILE File; // [rsp+38h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va, Format);
  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    if ( Count > 0x7FFFFFFF )
      LODWORD(Count) = 0x7FFFFFFF;
    File._cnt = Count;
    v4 = sub_1403E478C(&File, Format, 0LL, (__int64 *)va);
    if ( Dest )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v4;
  }
  else
  {
    _misaligned_access();
    return -1;
  }
}
