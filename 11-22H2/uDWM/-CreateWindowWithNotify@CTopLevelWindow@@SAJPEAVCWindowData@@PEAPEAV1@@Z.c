/*
 * XREFs of ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036BA4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036C34 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18003713C (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateWindowWithNotify(HWND *a1, struct CTopLevelWindow **a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // edi
  HWND v7; // rsi
  bool v8; // r9
  HWND v9; // rdx
  HWND v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::Create((struct CWindowData *)a1, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Fu, 0LL);
  }
  else
  {
    v7 = a1[17];
    if ( !(unsigned int)GetDesktopID(4LL, &v11, v5) || v11 != v7 )
    {
      v9 = a1[5];
      if ( v9 && (*((_BYTE *)a1 + 676) & 0x20) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(*a2, v9, (struct CWindowData *)a1, v8);
    }
  }
  return v6;
}
