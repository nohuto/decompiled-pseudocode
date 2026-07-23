/*
 * XREFs of sub_14025DAE4 @ 0x14025DAE4
 * Callers:
 *     sub_14025D8EC @ 0x14025D8EC (sub_14025D8EC.c)
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 * Callees:
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 */

__int64 __fastcall sub_14025DAE4(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  char *v7; // rax

  if ( a2 )
  {
    if ( (a1[12] & 0x100040) == 0x100040 )
    {
      v7 = sub_14025CB30(a1 + 308, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
      if ( v7 )
      {
        if ( (*v7 & 1) != 0 )
          *((_QWORD *)v7 + 1) += (unsigned int)(8 * a2);
      }
    }
  }
  result = a1[12] & 0x100080;
  if ( (_DWORD)result == 1048704 )
    *(_QWORD *)((char *)a1 + a1[314] + 1232) += (unsigned int)(8 * a3);
  return result;
}
