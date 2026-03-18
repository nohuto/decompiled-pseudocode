/*
 * XREFs of TransformVectorWithInputTargetPrecedence @ 0x1C010F7F8
 * Callers:
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C010F780 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C014C470 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     EditionMouseCaptureHitTest @ 0x1C0206CE0 (EditionMouseCaptureHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     GetMonitorTransform @ 0x1C009B038 (GetMonitorTransform.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     TransformVector @ 0x1C02073DC (TransformVector.c)
 */

__int64 __fastcall TransformVectorWithInputTargetPrecedence(const struct tagWND *a1, int a2, int a3)
{
  _BYTE *v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v13[64]; // [rsp+30h] [rbp-88h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = 0LL;
  v7 = 0;
  result = GetTopLevelWindow(gspwndInternalCapture);
  v9 = result;
  if ( result )
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( result == GetTopLevelWindow((__int64)a1) )
    {
      v11 = *(_QWORD *)(v10 + 672);
      if ( v11 && *(_QWORD *)(v11 + 16) == v9 )
      {
        if ( (unsigned int)GetMonitorTransform(*(_QWORD *)(v11 + 208), a1, (__int64)v13) )
          v6 = v13;
        goto LABEL_11;
      }
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 432);
      if ( !v12
        || v12 != *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 432LL)
        || *(_QWORD *)(v12 + 104) != gspwndInternalCapture )
      {
        return v7;
      }
    }
    v6 = *(_BYTE **)(v9 + 216);
LABEL_11:
    v7 = 1;
    if ( v6 )
      TransformVector((_DWORD)v6, a2, a2 + 4, a3, 1);
    return v7;
  }
  return result;
}
