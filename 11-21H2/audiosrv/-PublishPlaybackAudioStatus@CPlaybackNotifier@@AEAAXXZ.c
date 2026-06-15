/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005695C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180056398 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x180103BCC (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 **v2; // rax
  unsigned int v3; // r8d
  __int64 *j; // rax
  unsigned int v5; // r9d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 **v11; // rcx
  __int64 *i; // rcx
  __int64 *v13; // rdx
  int v14; // [rsp+30h] [rbp-1058h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-1050h] BYREF
  int *v16; // [rsp+58h] [rbp-1030h]
  int v17; // [rsp+60h] [rbp-1028h]
  int v18; // [rsp+64h] [rbp-1024h]
  int v19; // [rsp+70h] [rbp-1018h] BYREF
  _DWORD v20[1023]; // [rsp+74h] [rbp-1014h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v2 = (__int64 **)*((_QWORD *)this + 10);
  v3 = 0;
  v19 = 1;
  j = *v2;
  v5 = 8;
  while ( !*((_BYTE *)j + 25) )
  {
    v9 = j + 4;
    if ( *((_DWORD *)j + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)j[7] >= 8 )
        v9 = (__int64 *)*v9;
      v10 = v5;
      v5 += 112;
      ++v3;
      *(_OWORD *)((char *)&v20[-1] + v10) = *(_OWORD *)v9;
      *(_OWORD *)((char *)&v20[3] + v10) = *((_OWORD *)v9 + 1);
      *(_OWORD *)((char *)&v20[7] + v10) = *((_OWORD *)v9 + 2);
      *(_OWORD *)((char *)&v20[11] + v10) = *((_OWORD *)v9 + 3);
      *(_OWORD *)((char *)&v20[15] + v10) = *((_OWORD *)v9 + 4);
      *(_OWORD *)((char *)&v20[19] + v10) = *((_OWORD *)v9 + 5);
      *(_OWORD *)((char *)&v20[23] + v10) = *((_OWORD *)v9 + 6);
    }
    v11 = (__int64 **)j[2];
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v13 = *v11;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v13 + 25); v13 = (__int64 *)*v13 )
        j = v13;
    }
  }
  v20[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v19, 4096LL, 0LL);
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v7,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u
    && (*(_BYTE *)(v8 + 16) & 0x40) != 0
    && (*(_QWORD *)(v8 + 24) & 0x40LL) == *(_QWORD *)(v8 + 24) )
  {
    v18 = 0;
    v16 = &v14;
    v14 = v6;
    v17 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer(v8, byte_18018AF06, 0LL, 0LL, 3, (__int64)v15);
  }
}
