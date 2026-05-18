/*
 * XREFs of sub_1800A50B0 @ 0x1800A50B0
 * Callers:
 *     sub_1800A4898 @ 0x1800A4898 (sub_1800A4898.c)
 * Callees:
 *     sub_1800A5190 @ 0x1800A5190 (sub_1800A5190.c)
 */

__int64 __fastcall sub_1800A50B0(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_1800A5190(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_1800A5190(Src);
}
