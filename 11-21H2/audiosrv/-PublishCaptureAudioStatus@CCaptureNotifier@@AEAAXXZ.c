/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800567E0
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180056398 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x180103B78 (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x18010482C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  __int64 **v2; // rax
  unsigned int v3; // r8d
  __int64 *j; // rax
  unsigned int v5; // r10d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  char v10; // dl
  __int64 v11; // rcx
  __int64 **v12; // rcx
  __int64 *i; // rcx
  __int64 *v14; // rdx
  int v15; // [rsp+30h] [rbp-1058h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-1050h] BYREF
  int *v17; // [rsp+58h] [rbp-1030h]
  __int64 v18; // [rsp+60h] [rbp-1028h]
  int v19; // [rsp+70h] [rbp-1018h] BYREF
  _DWORD v20[1023]; // [rsp+74h] [rbp-1014h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v2 = (__int64 **)*((_QWORD *)this + 10);
  v19 = 2;
  v3 = 0;
  j = *v2;
  v5 = 8;
  while ( !*((_BYTE *)j + 25) )
  {
    if ( *((_DWORD *)j + 8) )
    {
      if ( v3 >= 0x331 )
        break;
      v9 = *((_DWORD *)j + 9);
      v10 = v9 != 0;
      if ( *((_DWORD *)j + 10) )
        v10 = (v9 != 0) + 2;
      v11 = v5;
      v5 += 5;
      ++v3;
      *(_DWORD *)((char *)&v20[-1] + v11) = *((_DWORD *)j + 7);
      *((_BYTE *)v20 + v11) = v10;
    }
    v12 = (__int64 **)j[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v14 = *v12;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
        j = v14;
    }
  }
  v20[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, &v19, 4096LL, 0LL);
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v7,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u
    && (*(_BYTE *)(v8 + 16) & 0x40) != 0
    && (*(_QWORD *)(v8 + 24) & 0x40LL) == *(_QWORD *)(v8 + 24) )
  {
    v15 = v6;
    v17 = &v15;
    v18 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v8, byte_18018AED3, 0LL, 0LL, 3, (__int64)v16);
  }
}
