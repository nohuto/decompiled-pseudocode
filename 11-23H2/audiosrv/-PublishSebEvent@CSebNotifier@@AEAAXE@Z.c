/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18003AD64
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18003A6C4 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x18004BCC0 (_lambda_66d2f619b070ae3e79e6511eef39e0b9_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005889C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180119B04 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     PubSebLevelEvent @ 0x18003AE00 (PubSebLevelEvent.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  int v8; // r9d
  char v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  char v11[32]; // [rsp+40h] [rbp-58h] BYREF
  char *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  int *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  if ( *((_BYTE *)this + 88) != a2 )
  {
    v5 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY);
    if ( v5 >= 0 )
      *((_BYTE *)this + 88) = a2;
    v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v4,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v6 > 4u )
    {
      if ( tlgKeywordOn((__int64)v6, 64LL) )
      {
        v17 = 0;
        v14 = 0;
        v15 = &v10;
        v16 = v8;
        v12 = &v9;
        v10 = v5;
        v9 = a2;
        v13 = 1;
        tlgWriteTransfer_EtwEventWriteTransfer(v7, byte_180193CC3, 0LL, 0LL, v8, (__int64)v11);
      }
    }
  }
}
