/*
 * XREFs of RecoverWindowsProc @ 0x1801058D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x180040458 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x1801059A0 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A04 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A54 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  HWND v4; // rdx
  void *v5; // r8
  HWND v6; // rdx
  bool v7; // al
  HWND v8; // rdx
  __int64 v9; // rdx
  _OWORD *v10; // r8
  HWND hWnd[2]; // [rsp+20h] [rbp-10h] BYREF

  hWnd[0] = a1;
  if ( !IsWindowVisible(a1) || !(unsigned int)GetWindowBand(hWnd[0], &hWnd[1]) )
    return 1LL;
  if ( (LODWORD(hWnd[1]) == 1 || LODWORD(hWnd[1]) == 8) && LODWORD(hWnd[1]) != 1 )
  {
    v7 = !CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)hWnd[0], (HWND)LODWORD(hWnd[1]))
      && CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v8);
    BYTE4(hWnd[1]) = 0;
LABEL_10:
    if ( !v7 )
      return 1LL;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)CApplicationManagerUtility::IsClassicApplication(hWnd[0]) )
    return 1LL;
  if ( (GetWindowLongPtrW(hWnd[0], -20) & 0x40000) != 0 )
  {
    BYTE4(hWnd[1]) = 0;
  }
  else
  {
    if ( !CApplicationManagerUtility::IsOwnedWindow((CApplicationManagerUtility *)hWnd[0], v4) )
    {
      BYTE4(hWnd[1]) = 0;
      v7 = CApplicationManagerUtility::IsTrayWindowStyleCheck(hWnd[0], v6);
      goto LABEL_10;
    }
    BYTE4(hWnd[1]) = 1;
  }
LABEL_21:
  v9 = a2[1];
  if ( v9 != a2[3]
    || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
              (__int64)a2,
              v9 + 1,
              v5) >= 0 )
  {
    ++a2[1];
    v10 = (_OWORD *)(16LL * a2[1] + *a2 - 16LL);
    if ( v10 )
      *v10 = *(_OWORD *)hWnd;
  }
  return 1LL;
}
