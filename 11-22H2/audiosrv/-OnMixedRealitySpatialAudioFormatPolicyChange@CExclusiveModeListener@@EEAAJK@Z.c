/*
 * XREFs of ?OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z @ 0x18013AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18013BAC0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

__int64 __fastcall CExclusiveModeListener::OnMixedRealitySpatialAudioFormatPolicyChange(
        CExclusiveModeListener *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = *((_DWORD *)this + 90);
  if ( a2 == v5 )
  {
    if ( v5 )
    {
      if ( *((_BYTE *)this + 368) )
      {
        v9 = 0;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, int *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          a2,
          &v9);
        if ( *((_DWORD *)this + 91) != v9 )
        {
          *((_DWORD *)this + 91) = v9;
          updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)((char *)this - 8));
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x25B,
              (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
              (const char *)(unsigned int)updated);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
