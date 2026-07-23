/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1407689EC
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x14076872C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140768A8C (CmpTransSearchAddLightWeightTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 result; // rax
  __int64 Count; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1[7];
  if ( !v3 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(struct _EX_RUNDOWN_REF **)(v5 + 32);
  if ( (v3 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v5 + 32), 0LL, &v9);
  }
  else
  {
    Count = v6[519].Count;
    if ( !Count )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], Count, v6, 0, &v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
