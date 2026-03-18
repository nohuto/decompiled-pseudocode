/*
 * XREFs of EtwpTiFillZeroVad @ 0x1402EDF48
 * Callers:
 *     EtwpTiFillVadEventWrite @ 0x1402519E4 (EtwpTiFillVadEventWrite.c)
 *     EtwTiLogReadWriteVm @ 0x14079EC58 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogProtectExecVm @ 0x1408833DA (EtwTiLogProtectExecVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillZeroVad(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = &qword_140015728;
  result = 7LL;
  a1[2] = &qword_140015728;
  a1[4] = &qword_140015728;
  a1[6] = &qword_140015728;
  a1[8] = &qword_140015728;
  a1[10] = &qword_140015728;
  a1[12] = &qword_140015728;
  a1[3] = 8LL;
  a1[5] = 4LL;
  a1[7] = 4LL;
  a1[9] = 8LL;
  a1[11] = 8LL;
  a1[13] = 2LL;
  return result;
}
