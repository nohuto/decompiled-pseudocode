/*
 * XREFs of ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800AD210
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023280 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CButton::SetReverseRTLMirror(CButton *this, char a2)
{
  int v2; // eax

  if ( ((*((_BYTE *)this + 288) & 0x20) != 0) != a2 )
  {
    v2 = *((_DWORD *)this + 22);
    *((_BYTE *)this + 288) = (32 * a2) | *((_BYTE *)this + 288) & 0xDF;
    if ( (v2 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v2 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
}
