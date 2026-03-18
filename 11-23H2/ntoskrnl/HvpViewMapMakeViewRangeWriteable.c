/*
 * XREFs of HvpViewMapMakeViewRangeWriteable @ 0x14067F49C
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140884FC4 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140296CA8 (CmSiProtectViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeWriteable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  result = CmSiProtectViewOfSection(
             a1,
             *(__int64 **)(a1 + 24),
             a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24),
             a4 - a3,
             8u,
             (__int64)&v8);
  while ( a3 < a4 )
  {
    result = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(result + a2 + 72) |= 8u;
    a3 += 4096LL;
  }
  return result;
}
