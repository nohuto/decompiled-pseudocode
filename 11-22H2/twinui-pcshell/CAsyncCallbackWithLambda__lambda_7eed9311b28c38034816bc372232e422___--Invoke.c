/*
 * XREFs of CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke @ 0x1801BF600
 * Callers:
 *     <none>
 * Callees:
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1801B1458 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18053CE74 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_7eed9311b28c38034816bc372232e422___::Invoke(__int64 a1)
{
  LSTATUS ValueW; // eax
  bool v4; // zf
  AccessibilityExperienceManager *v5; // rcx
  __int64 v6; // rcx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+60h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+20h] BYREF

  if ( *(int *)(*(_QWORD *)(a1 + 48) + 464LL) <= 0 )
    goto LABEL_2;
  pdwType = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Input\\EC",
             L"Enabled",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  if ( ValueW )
    goto LABEL_2;
  if ( pdwType == 4 )
  {
    if ( pvData > 1 )
      goto LABEL_2;
    v4 = pvData == 1;
  }
  else
  {
    if ( pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
      goto LABEL_2;
    ValueW = 0;
    v4 = (_WORD)pvData == 49;
  }
  LOBYTE(ValueW) = v4;
  if ( !ValueW )
  {
LABEL_2:
    AccessibilityExperienceManager::_DismissView(
      *(AccessibilityExperienceManager **)(a1 + 48),
      (struct AccessibilityViewInfo *)(*(_QWORD *)(a1 + 48) + 368LL));
    return 0LL;
  }
  v5 = *(AccessibilityExperienceManager **)(a1 + 48);
  if ( !*((_BYTE *)v5 + 456) && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync(v5) >= 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 456LL) = 1;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 376LL);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, 0LL);
  }
  return 0LL;
}
