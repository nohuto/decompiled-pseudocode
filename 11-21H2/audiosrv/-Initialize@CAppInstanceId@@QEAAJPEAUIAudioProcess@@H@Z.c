/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x1800E6B58
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800E6F6C (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, struct IAudioProcess *a2, int a3)
{
  int v5; // eax

  *((_DWORD *)this + 2) = a3;
  if ( a3 )
  {
    *(_DWORD *)this = 0;
    v5 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  }
  else
  {
    *(_DWORD *)this = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    v5 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  }
  *((_DWORD *)this + 1) = v5;
  return 0LL;
}
