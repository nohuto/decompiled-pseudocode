/*
 * XREFs of sub_1409BFCA0 @ 0x1409BFCA0
 * Callers:
 *     sub_1409ADDA4 @ 0x1409ADDA4 (sub_1409ADDA4.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409BFCA0(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // di
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *Pool2; // rax

  v2 = (_QWORD *)*a1;
  v3 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = sub_1408826B4(a2, (__int64)v2);
      if ( v6 <= 0 )
      {
        if ( v6 >= 0 )
          return 3221225496LL;
        v7 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v2[1];
        if ( !v7 )
        {
          v3 = 1;
          break;
        }
      }
      v2 = v7;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(257LL, 32LL, 1313359172LL);
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[3] = a2;
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v2, v3, Pool2);
  return 0LL;
}
