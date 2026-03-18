/*
 * XREFs of ExpInitLicensing @ 0x140863E64
 * Callers:
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpInitLicensing(__int64 a1)
{
  __int64 *result; // rax

  if ( (_UNKNOWN *)a1 == &PspHostSiloGlobals )
  {
    qword_140D837C0 = 81920LL;
    qword_140D423C0 = (__int64)ExpHostBootLicensingData;
    result = &qword_140D423C0;
    *(_QWORD *)(a1 + 904) = &qword_140D423C0;
  }
  else
  {
    result = *(__int64 **)(a1 + 904);
  }
  *((_DWORD *)result + 11758) = -1;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 11747) = 0;
  result[5855] = 0LL;
  result[5878] = 0LL;
  return result;
}
