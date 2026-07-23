/*
 * XREFs of sub_1409C04B8 @ 0x1409C04B8
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140972A10 @ 0x140972A10 (sub_140972A10.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405EF8CC @ 0x1405EF8CC (sub_1405EF8CC.c)
 */

__int64 __fastcall sub_1409C04B8(_DWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int *v7; // rdx
  int v8; // ebx
  __int64 v9; // r14
  int v10; // ebx

  result = sub_1405EF8CC(a1);
  v8 = *v7;
  v9 = (unsigned int)result;
  while ( v8 )
  {
    ++a2;
    v10 = v8 & 0xFFF;
    if ( v10 )
    {
      do
      {
        result = sub_14042A5E0(a4, a2);
        if ( (_BYTE)result )
          return result;
        a2 += v9;
      }
      while ( --v10 );
    }
    v8 = *a2;
  }
  return result;
}
