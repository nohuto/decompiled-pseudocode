/*
 * XREFs of sub_140A1BE50 @ 0x140A1BE50
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 *     sub_140A1B468 @ 0x140A1B468 (sub_140A1B468.c)
 * Callees:
 *     sub_1403E0E90 @ 0x1403E0E90 (sub_1403E0E90.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1BE50(unsigned int a1, __int64 a2, __int64 *a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v10; // rax
  __int64 Pool2; // rbx
  char v12; // cl
  __int64 v13; // rax

  if ( !a3 && !a2 )
    return 3221225485LL;
  if ( a4 && a5 && (v10 = (unsigned int)*a5, (unsigned int)(v10 + 11) < 0x400) )
  {
    *a5 = v10 + 11;
    Pool2 = a4 + 2 * v10;
    v12 = 0;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 22LL, 1799447891LL);
    if ( !Pool2 )
      return 3221225495LL;
    v12 = 1;
  }
  *a6 = v12;
  sub_1403E0E90(a1, Pool2, 10LL);
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(Pool2 + 2 * v13) );
  if ( a3 )
  {
    *a3 = Pool2;
    a3[1] = (unsigned int)(2 * v13 + 2);
  }
  else
  {
    *(_WORD *)(a2 + 2) = 22;
    *(_WORD *)a2 = 2 * v13;
    *(_QWORD *)(a2 + 8) = Pool2;
  }
  return 0LL;
}
