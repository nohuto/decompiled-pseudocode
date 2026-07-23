/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140AF52F0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1407676E0 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A16B54 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement(v4 + 208, &v10, 32LL);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *(_DWORD *)(NextElement + 68);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32LL);
  }
  while ( NextElement );
  if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return NextElement;
}
