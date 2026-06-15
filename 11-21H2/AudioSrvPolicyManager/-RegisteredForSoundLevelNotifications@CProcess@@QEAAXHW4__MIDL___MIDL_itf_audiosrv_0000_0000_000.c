/*
 * XREFs of ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A47C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022130 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800293E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::RegisteredForSoundLevelNotifications(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( a3 != -1 && a3 )
    goto LABEL_12;
  if ( a2 )
  {
    if ( ++*(_DWORD *)(a1 + 504) != 1 )
      goto LABEL_12;
    v7 = *(_DWORD *)(a1 + 448) | (1 << a3);
  }
  else
  {
    if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 504) = 0;
      *(_DWORD *)(a1 + 448) &= ~1u;
      goto LABEL_12;
    }
    v8 = *(_DWORD *)(a1 + 504);
    if ( !v8 )
      goto LABEL_12;
    v9 = v8 - 1;
    *(_DWORD *)(a1 + 504) = v9;
    if ( v9 )
      goto LABEL_12;
    v7 = *(_DWORD *)(a1 + 448) & ~(1 << a3);
  }
  *(_DWORD *)(a1 + 448) = v7;
LABEL_12:
  if ( v6 )
    LeaveCriticalSection(v6);
}
