/*
 * XREFs of ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A53C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022214 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800293E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::RegisteredForTrackStateNotifications(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  unsigned int v8; // eax

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( a3 == -1 || a3 == 12 )
  {
    v7 = *(_DWORD *)(a1 + 448);
    if ( a2 )
    {
      v8 = v7 | (1 << a3);
    }
    else if ( a3 == -1 )
    {
      v8 = v7 & 0xFFFFEFFF;
    }
    else
    {
      v8 = v7 & ~(1 << a3);
    }
    *(_DWORD *)(a1 + 448) = v8;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
