/*
 * XREFs of ExVerifySuite @ 0x1403CCF10
 * Callers:
 *     sub_14059388C @ 0x14059388C (sub_14059388C.c)
 *     sub_1408455C8 @ 0x1408455C8 (sub_1408455C8.c)
 *     sub_140B1D10C @ 0x140B1D10C (sub_140B1D10C.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
