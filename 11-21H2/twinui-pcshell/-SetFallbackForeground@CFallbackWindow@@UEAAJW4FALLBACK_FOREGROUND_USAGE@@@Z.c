/*
 * XREFs of ?SetFallbackForeground@CFallbackWindow@@UEAAJW4FALLBACK_FOREGROUND_USAGE@@@Z @ 0x180180D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qLd @ 0x1802EE398 (WPP_SF_qLd.c)
 */

__int64 __fastcall CFallbackWindow::SetFallbackForeground(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rbp
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8

  v2 = 0;
  if ( *(_DWORD *)(a1 + 44) != a2 )
  {
    v6 = 0LL;
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v2 = -2147024809;
LABEL_10:
        *(_DWORD *)(a1 + 44) = a2;
        return v2;
      }
      v6 = *(_QWORD *)(a1 - 32);
      v2 = 1;
    }
    v8 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                           + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
           v6,
           v2);
    v2 = v8;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_qLd(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v6, a2, v8);
    goto LABEL_10;
  }
  return v2;
}
