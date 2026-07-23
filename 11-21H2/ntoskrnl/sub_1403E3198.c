/*
 * XREFs of sub_1403E3198 @ 0x1403E3198
 * Callers:
 *     vsprintf @ 0x1403E3230 (vsprintf.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     _flsbuf @ 0x1403E3D0C (_flsbuf.c)
 *     sub_1403E478C @ 0x1403E478C (sub_1403E478C.c)
 */

__int64 __fastcall sub_1403E3198(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  bool v5; // sf
  unsigned int v6; // ebx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a2 && a1 )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v4 = sub_1403E478C(&File, a2, a3, a4);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v6;
  }
  else
  {
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
