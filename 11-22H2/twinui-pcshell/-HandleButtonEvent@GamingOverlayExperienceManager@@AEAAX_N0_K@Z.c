/*
 * XREFs of ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x1804000FC
 * Callers:
 *     ?OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDevice@@0W4GameInputSystemButtons@@3@Z @ 0x1801DAF90 (-OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDe.c)
 *     ?OnRawSystemButtonEvent@GamingOverlayExperienceManager@@AEAAJPEAUIGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@345@@Z @ 0x1804031D0 (-OnRawSystemButtonEvent@GamingOverlayExperienceManager@@AEAAJPEAUIGipControllerWatcher@Gaming@In.c)
 * Callees:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180400338 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleButtonEvent(
        GamingOverlayExperienceManager *this,
        char a2,
        char a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-28h]

  v8 = (RTL_SRWLOCK *)((char *)this + 216);
  AcquireSRWLockExclusive((PSRWLOCK)this + 27);
  v11 = *((_DWORD *)this + 73);
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      LOBYTE(v10) = a2;
    }
    else
    {
      if ( v11 != 1 )
        goto LABEL_12;
      LOBYTE(v10) = a3;
    }
    LOBYTE(v9) = (_BYTE)v8;
    GamingOverlayExperienceManager::HandleTrackedButtonChange(this, v9, v10, a4);
  }
  else
  {
    if ( a2 )
    {
      *((_DWORD *)this + 73) = 2;
    }
    else
    {
      if ( !a3 )
        goto LABEL_12;
      *((_DWORD *)this + 73) = 1;
    }
    *(_QWORD *)&v12 = a4;
    BYTE8(v12) = 1;
    *(_OWORD *)((char *)this + 296) = v12;
  }
LABEL_12:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
}
