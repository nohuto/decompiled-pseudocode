/*
 * XREFs of sub_1800A505C @ 0x1800A505C
 * Callers:
 *     sub_1800A47AC @ 0x1800A47AC (sub_1800A47AC.c)
 * Callees:
 *     sub_1800A5104 @ 0x1800A5104 (sub_1800A5104.c)
 */

__int64 __fastcall sub_1800A505C(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_1800A5104(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_1800A5104(Src);
}
