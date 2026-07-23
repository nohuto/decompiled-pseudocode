/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x140A240FC
 * Callers:
 *     CmpKeyEnumStackInitialize @ 0x140A24384 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackReset @ 0x140A2448C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackStart @ 0x140A244EC (CmpKeyEnumStackStart.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(_QWORD *a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x80uLL);
  HvpGetCellContextReinitialize(a1 + 2);
  v2 = a1 + 9;
  v3 = 2LL;
  v4 = a1 + 12;
  do
  {
    HvpGetCellContextReinitialize(v4 - 5);
    result = HvpGetCellContextReinitialize(v4);
    *v2 = -1;
    ++v4;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
