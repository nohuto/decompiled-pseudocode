/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1800111EC
 * Callers:
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1800111BC (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803D280C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18048BE74 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18048BFC4 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180493E94 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     ?SHProcessMessagesUpdateTimeout@@YAHKKPEAK@Z @ 0x18001138C (-SHProcessMessagesUpdateTimeout@@YAHKKPEAK@Z.c)
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        unsigned int a4,
        DWORD a5,
        APTTYPE pAptType)
{
  _BOOL8 v9; // r14
  DWORD TickCount; // r15d
  DWORD v11; // ecx
  __int64 result; // rax
  int updated; // eax
  DWORD v14; // ecx
  DWORD v15; // eax
  HRESULT v16; // eax
  HCURSOR CursorW; // rax
  DWORD v18; // eax
  tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  HWND pAptQualifier; // [rsp+90h] [rbp+30h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  pAptQualifier = a1;
  v9 = CoGetApartmentType(&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier) >= 0
    && (_DWORD)pAptQualifier == 6
    && pAptType == APTTYPE_STA;
  TickCount = GetTickCount();
  v11 = a4;
  result = 0xFFFFFFFFLL;
  a5 = a4;
  if ( a2 || a4 != -1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v16 = CoWaitForMultipleHandles(0x18u, v11, a3, a2, &dwindex);
        if ( v16 == -2147417835 )
        {
          dwindex = 258;
        }
        else if ( v16 < 0 )
        {
          dwindex = -1;
        }
      }
      else
      {
        dwindex = MsgWaitForMultipleObjectsEx(a3, a2, v11, 0x1CFFu, 0);
      }
      updated = SHProcessMessagesUpdateTimeout(TickCount, a4, &a5);
      v14 = dwindex;
      if ( !updated )
        v14 = 258;
      dwindex = v14;
      if ( v14 != a3 )
        goto LABEL_21;
      while ( 1 )
      {
        if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
        {
          v14 = dwindex;
          goto LABEL_19;
        }
        if ( Msg.message == 18 )
          break;
        TranslateMessage(&Msg);
        if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
        {
          DispatchMessageW(&Msg);
        }
        else
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
          SetCursor(CursorW);
        }
        if ( a3 )
        {
          v15 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
          v14 = v15;
          if ( v15 != 258 )
          {
            dwindex = v15;
            goto LABEL_19;
          }
        }
        if ( !(unsigned int)SHProcessMessagesUpdateTimeout(TickCount, a4, &a5) )
          goto LABEL_37;
      }
      PostQuitMessage(Msg.wParam);
LABEL_37:
      v14 = 258;
      dwindex = 258;
LABEL_19:
      if ( v14 != a3 )
      {
LABEL_21:
        if ( v14 != 192 )
          break;
      }
      v11 = a5;
    }
    if ( v14 == 258 && a3 )
    {
      v18 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
      v14 = dwindex;
      if ( v18 != 258 )
        return v18;
    }
    return v14;
  }
  return result;
}
