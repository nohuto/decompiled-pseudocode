/*
 * XREFs of ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006E442
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006C12C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B1AB4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchDragVisual::UpdateShowContact(__int64 a1, int a2)
{
  float v2; // xmm0_4

  *(_DWORD *)(a1 + 464) = a2;
  if ( (a2 & 4) != 0 )
    v2 = *(float *)(a1 + 320);
  else
    v2 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v2);
}
