/*
 * XREFs of ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1801B5050
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x1800F0430 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161CF8 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SortEx@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJAEBVCCompareRecoveredWindows@@@Z @ 0x1803A5FC4 (--$SortEx@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RecoverApplicationWindows(struct IImmersiveShellHookNotification *a1, __int64 a2, void *a3)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  HWND v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  LPARAM v12; // r14
  bool IsForcedAppWindow; // al
  __int64 v14; // rdx
  LPARAM lParam; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+38h] [rbp-8h]
  char v19; // [rsp+68h] [rbp+28h] BYREF

  lParam = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
         (__int64)&lParam,
         0x32uLL,
         a3);
  if ( v4 < 0 )
    goto LABEL_6;
  EnumWindows((WNDENUMPROC)RecoverWindowsProc, (LPARAM)&lParam);
  v5 = v16;
  if ( !v16 )
    goto LABEL_3;
  v4 = CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::SortEx<CCompareRecoveredWindows>(
         &lParam,
         &v19);
  if ( v4 < 0 )
  {
LABEL_6:
    v4 = -2147023617;
  }
  else
  {
    v8 = 0LL;
    if ( !v5 )
      goto LABEL_13;
    v9 = 0LL;
    do
    {
      if ( *(_DWORD *)(v9 + lParam + 8) == 1 )
        break;
      (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
        a1,
        17LL,
        *(_QWORD *)(v9 + lParam));
      ++v8;
      v9 += 16LL;
    }
    while ( v8 < v5 );
    if ( v5 != v8 )
    {
LABEL_13:
      v10 = 16 * v5;
      v11 = v5 - v8;
      do
      {
        v10 -= 16LL;
        v12 = lParam;
        if ( !*(_BYTE *)(v10 + lParam + 12)
          || (IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(
                                    *(CApplicationManagerUtility **)(v10 + lParam),
                                    v7),
              v14 = 21LL,
              IsForcedAppWindow) )
        {
          v14 = 17LL;
        }
        (*(void (__fastcall **)(struct IImmersiveShellHookNotification *, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
          a1,
          v14,
          *(_QWORD *)(v10 + v12));
        --v11;
      }
      while ( v11 );
    }
  }
LABEL_3:
  if ( lParam )
    CoTaskMemFree((LPVOID)lParam);
  return (unsigned int)v4;
}
