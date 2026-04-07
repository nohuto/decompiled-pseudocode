/*
 * XREFs of ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180012070
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180011F9C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::SetMaximizedClipMargins(CClientArea *this, const struct _MARGINS *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 31);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    if ( v4 )
    {
      v7 = 0LL;
      if ( a2 )
        v7 = (__int128)*a2;
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 376LL))(v4, &v7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xBCu, 0LL);
    }
  }
  return v3;
}
