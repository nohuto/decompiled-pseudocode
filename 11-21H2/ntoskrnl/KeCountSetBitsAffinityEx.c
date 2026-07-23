/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1402FFAC0
 * Callers:
 *     sub_140235F70 @ 0x140235F70 (sub_140235F70.c)
 *     sub_14023A7D0 @ 0x14023A7D0 (sub_14023A7D0.c)
 *     sub_14023A820 @ 0x14023A820 (sub_14023A820.c)
 *     sub_14023B5A0 @ 0x14023B5A0 (sub_14023B5A0.c)
 *     sub_14024AC78 @ 0x14024AC78 (sub_14024AC78.c)
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     sub_140300190 @ 0x140300190 (sub_140300190.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_140578454 @ 0x140578454 (sub_140578454.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_140849A30 @ 0x140849A30 (sub_140849A30.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  __int64 result; // rax
  unsigned __int64 *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8

  result = 0LL;
  if ( *a1 )
  {
    v2 = (unsigned __int64 *)(a1 + 4);
    v3 = (unsigned __int16)*a1;
    do
    {
      v4 = *v2++;
      result = ((unsigned int)((0x101010101010101LL
                              * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
             + (unsigned int)result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
