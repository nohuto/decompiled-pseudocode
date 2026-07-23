/*
 * XREFs of sub_1403E0580 @ 0x1403E0580
 * Callers:
 *     _vsnprintf @ 0x1403E0560 (_vsnprintf.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 */

__int64 __fastcall sub_1403E0580(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a3 && (!a2 || a1) )
  {
    File._flag = 66;
    File._base = a1;
    if ( a2 > 0x7FFFFFFF )
      LODWORD(a2) = 0x7FFFFFFF;
    File._ptr = a1;
    File._cnt = a2;
    v6 = sub_1403E478C(&File, a3, a4, a5);
    if ( a1 )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v6;
  }
  else
  {
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
