/*
 * XREFs of SepRmValidateProcUniqueLuidWrkr @ 0x1409D06C0
 * Callers:
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 * Callees:
 *     SepIsValidProcUniqueLuid @ 0x1409D1324 (SepIsValidProcUniqueLuid.c)
 */

__int64 __fastcall SepRmValidateProcUniqueLuidWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepIsValidProcUniqueLuid(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
