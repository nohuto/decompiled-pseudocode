/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C016D964
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  DC::AcquireDcVisRgnExclusive(this, (__int64)&v4);
  REGION::vDeleteREGION(*((PSLIST_ENTRY *)this + 142));
  v3 = v5 == 0;
  *((_QWORD *)this + 142) = prgnDefault;
  if ( !v3 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v4 + 1112));
}
