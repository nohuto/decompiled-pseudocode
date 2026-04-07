/*
 * XREFs of ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x1800E1218
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CSystemBackdropVisual::GetCurrentBaseColor(CSystemBackdropVisual *this)
{
  DWORD result; // eax
  int v2; // [rsp+8h] [rbp+8h]

  result = 0;
  switch ( *((_DWORD *)this + 70) )
  {
    case 1:
      v2 = 538976511;
      if ( !*((_BYTE *)this + 304) )
        return -202116097;
      return v2;
    case 2:
      LOBYTE(v2) = *((_BYTE *)this + 284);
      HIBYTE(v2) = *((_BYTE *)this + 285);
      BYTE2(v2) = *((_BYTE *)this + 286);
      BYTE1(v2) = *((_BYTE *)this + 287);
      return v2;
    case 3:
      return GetSysColor(5);
  }
  return result;
}
