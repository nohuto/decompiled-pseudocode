/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x180150C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 2);
  switch ( v1 )
  {
    case 0:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 40LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 >= 0 )
        return;
      v3 = 383LL;
      goto LABEL_13;
    case 1:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 48LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 >= 0 )
        return;
      v3 = 387LL;
      goto LABEL_13;
    case 2:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 56LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 >= 0 )
        return;
      v3 = 391LL;
      goto LABEL_13;
    case 3:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, DEVICE_EVENT *))(*(_QWORD *)g_AudioService + 64LL))(
             g_AudioService,
             this);
      if ( v2 < 0 )
      {
        v3 = 395LL;
LABEL_13:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v3,
          (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)(unsigned int)v2);
      }
      break;
  }
}
