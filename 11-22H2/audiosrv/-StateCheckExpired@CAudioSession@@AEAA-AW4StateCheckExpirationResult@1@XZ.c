/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x180024CF8
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180024360 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x1800E3B38 (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::StateCheckExpired(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // esi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
  if ( *(_DWORD *)(a1 + 104) )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 1LL;
  }
  else if ( *(int *)(a1 + 332) > 0 )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 2LL;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 664));
    v3 = (__int64)(*(_QWORD *)(a1 + 712) - *(_QWORD *)(a1 + 704)) >> 3;
    if ( a1 != -664 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 664));
    if ( !v3 )
    {
LABEL_13:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 2LL);
      if ( v1 )
        LeaveCriticalSection(v1);
      return 0LL;
    }
    v4 = GetTickCount64() - *(_DWORD *)(a1 + 320);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        51,
        (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
        *(_QWORD *)(a1 + 656),
        v4);
    }
    if ( *(int *)(a1 + 328) <= 0 )
    {
      if ( v4 < *(_DWORD *)(a1 + 240) - 16 )
      {
        if ( v1 )
          LeaveCriticalSection(v1);
        return 4LL;
      }
      goto LABEL_13;
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 3LL;
  }
}
