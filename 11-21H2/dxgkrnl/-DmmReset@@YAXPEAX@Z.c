/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x1C039CF40
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C25BC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9B14 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 349) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v5, v2);
  v3 = (_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL);
  if ( (_QWORD *)*v3 != v3 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v3 - 8LL);
    if ( *v3 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget);
        *(_BYTE *)(*((_QWORD *)NextTarget + 67) + 168LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v2 + 120), NextTarget);
      }
      while ( NextTarget );
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v5 + 40));
}
