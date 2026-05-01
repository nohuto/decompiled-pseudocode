/*
 * XREFs of ?DeInit@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x18033EEEC
 * Callers:
 *     ?SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z @ 0x18034077C (-SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GamingAudio::SessionInfoItem::DeInit(GamingAudio::SessionInfoItem *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 94);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, GamingAudio::SessionInfoItem *))(*(_QWORD *)v2 + 88LL))(v2, this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v3);
  }
  *((_QWORD *)this + 96) = 0LL;
}
