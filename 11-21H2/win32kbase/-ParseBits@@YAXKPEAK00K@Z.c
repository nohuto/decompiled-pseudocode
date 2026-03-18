/*
 * XREFs of ?ParseBits@@YAXKPEAK00K@Z @ 0x1C00871A0
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ParseBits(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int i; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // eax

  for ( i = 0; (a1 & 1) == 0; ++i )
    a1 >>= 1;
  v8 = i;
  do
  {
    ++v8;
    a1 >>= 1;
    v9 = v8;
  }
  while ( (a1 & 1) != 0 );
  v10 = v8 - i;
  *a4 = v10;
  if ( v10 > 8 )
  {
    *a2 = v9 - 8;
    v11 = a5;
  }
  else
  {
    *a2 = i;
    v11 = a5 - v10 + 8;
  }
  *a3 = v11;
}
