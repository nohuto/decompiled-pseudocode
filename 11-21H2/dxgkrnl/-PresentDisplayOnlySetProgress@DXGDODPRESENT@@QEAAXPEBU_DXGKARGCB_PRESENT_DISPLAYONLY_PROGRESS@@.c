/*
 * XREFs of ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C006CEDC
 * Callers:
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C004BB00 (DxgPresentDisplayOnlyProgressCB.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006CCBC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C006CE64 (-PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z.c)
 */

void __fastcall DXGDODPRESENT::PresentDisplayOnlySetProgress(
        DXGDODPRESENT *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v3; // r8

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *(_DWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      BLTQUEUE::PresentDisplayOnlySetProgress((BLTQUEUE *)(v3 + 2920 * VidPnSourceId), a2);
  }
}
