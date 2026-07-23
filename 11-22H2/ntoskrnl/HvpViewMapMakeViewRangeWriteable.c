/*
 * XREFs of HvpViewMapMakeViewRangeWriteable @ 0x14067F49C
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x140885494 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140296B88 (CmSiProtectViewOfSection.c)
 */

int __fastcall HvpViewMapMakeViewRangeWriteable(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  LODWORD(v7) = CmSiProtectViewOfSection(
                  a1,
                  *(void ***)(a1 + 24),
                  (void *)(a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24)),
                  a4 - a3,
                  8u,
                  &v9);
  while ( a3 < a4 )
  {
    v7 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(v7 + a2 + 72) |= 8u;
    a3 += 4096LL;
  }
  return v7;
}
