/*
 * XREFs of sub_140769784 @ 0x140769784
 * Callers:
 *     sub_1406DF254 @ 0x1406DF254 (sub_1406DF254.c)
 *     sub_1406DF440 @ 0x1406DF440 (sub_1406DF440.c)
 *     sub_140769010 @ 0x140769010 (sub_140769010.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     sub_140769668 @ 0x140769668 (sub_140769668.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_1409439F8 @ 0x1409439F8 (sub_1409439F8.c)
 *     sub_140944218 @ 0x140944218 (sub_140944218.c)
 * Callees:
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140769784(__int64 a1, unsigned __int16 a2)
{
  _WORD *v2; // rdi
  int v4; // ebx
  __int64 Pool2; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = sub_1402DE190(a2, 2, (__int16 *)(a1 + 2));
  if ( v4 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, (unsigned __int16)*v2, 1970499664LL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
