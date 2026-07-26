/*
 * XREFs of validateMemoryPages @ 0x1C0072CB0
 * Callers:
 *     verifySingleNb @ 0x1C0072D9C (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072550 (datapathVerifierReportProblem.c)
 */

char __fastcall validateMemoryPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  char result; // al
  _BYTE *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 i; // rcx
  _BYTE *v8; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 40);
  result = a2 + a3;
  if ( a2 + a3 > v3 )
    a3 = v3 - a2;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 24) + a2);
  v8 = v5;
  v6 = (((unsigned __int16)v5 & 0xFFF) + 4095LL + (unsigned __int64)a3) >> 12;
  for ( i = 0LL; i < v6; ++i )
  {
    result = *v5;
    v5 = v8 + 4096;
    v8 += 4096;
  }
  return result;
}
