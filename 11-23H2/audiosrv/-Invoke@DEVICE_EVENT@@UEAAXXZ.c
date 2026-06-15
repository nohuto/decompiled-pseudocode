/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x180004100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 2);
  switch ( v5 )
  {
    case 0:
      v6 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 48LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v6 >= 0 )
        return;
      v7 = 390LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
        (const char *)(unsigned int)v6,
        a5);
      return;
    case 1:
      v6 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 56LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v6 < 0 )
      {
        v7 = 394LL;
        goto LABEL_14;
      }
      break;
    case 2:
      v6 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 64LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v6 < 0 )
      {
        v7 = 398LL;
        goto LABEL_14;
      }
      break;
    case 3:
      v6 = (*(__int64 (__fastcall **)(struct IAudioService *, DEVICE_EVENT *))(*(_QWORD *)g_AudioService + 72LL))(
             g_AudioService,
             this);
      if ( v6 < 0 )
      {
        v7 = 402LL;
        goto LABEL_14;
      }
      break;
  }
}
