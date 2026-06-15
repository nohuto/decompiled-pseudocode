/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180056A20
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180056398 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180103C20 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     PubSebLevelEvent @ 0x18000E064 (PubSebLevelEvent.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  char v9[32]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int8 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( *((_BYTE *)this + 88) != a2 )
  {
    v5 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY, a2);
    if ( v5 >= 0 )
      *((_BYTE *)this + 88) = a2;
    v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v4,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u
      && (*(_BYTE *)(v6 + 16) & 0x40) != 0
      && (*(_QWORD *)(v6 + 24) & 0x40LL) == *(_QWORD *)(v6 + 24) )
    {
      v15 = 0;
      v12 = 0;
      v13 = &v8;
      v14 = 4;
      v10 = &v7;
      v8 = v5;
      v7 = a2;
      v11 = 1;
      tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_18018AF4B, 0LL, 0LL, 4, (__int64)v9);
    }
  }
}
