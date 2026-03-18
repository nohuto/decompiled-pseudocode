/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076D18
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x1C0076CF0 (--1MULTIDEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this)
{
  __int64 v2; // rsi
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    v2 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayD+i)", *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2));
        v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 1) + 8 * v2);
        if ( v3 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v3);
          PsLeavePriorityRegion(v4);
        }
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *((_DWORD *)this + 1) >> 1 );
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion(v5);
    }
    v6 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayP+i)", *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6));
        v7 = *(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8 * v6);
        if ( v7 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v7);
          PsLeavePriorityRegion(v8);
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
