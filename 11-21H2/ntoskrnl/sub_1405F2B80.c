/*
 * XREFs of sub_1405F2B80 @ 0x1405F2B80
 * Callers:
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F2C80 @ 0x1405F2C80 (sub_1405F2C80.c)
 *     sub_1405F2CDC @ 0x1405F2CDC (sub_1405F2CDC.c)
 */

__int64 __fastcall sub_1405F2B80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax

  if ( a3 )
  {
    v6 = 0LL;
    do
    {
      v7 = a3 - v6;
      if ( a3 - (unsigned int)v6 > 0x100000 )
        v7 = 0x100000;
      sub_1405F2C80();
      memmove((void *)(v6 + a1), (const void *)(v6 + a2), v7);
      result = sub_1405F2CDC();
      v6 = (unsigned int)(v6 + 0x100000);
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}
