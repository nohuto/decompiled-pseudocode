/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180056D58
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005888C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x1801199C4 (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x18011A6EC (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  __int64 **v2; // rax
  unsigned int v3; // r8d
  __int64 *j; // rax
  unsigned int v5; // r10d
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  char v11; // dl
  __int64 v12; // rcx
  __int64 **v13; // rcx
  __int64 *i; // rcx
  __int64 *v15; // rdx
  int v16; // [rsp+30h] [rbp-1058h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-1050h] BYREF
  int *v18; // [rsp+58h] [rbp-1030h]
  __int64 v19; // [rsp+60h] [rbp-1028h]
  int v20; // [rsp+70h] [rbp-1018h] BYREF
  _DWORD v21[1023]; // [rsp+74h] [rbp-1014h] BYREF

  memset_0(v21, 0, sizeof(v21));
  v2 = (__int64 **)*((_QWORD *)this + 10);
  v20 = 2;
  v3 = 0;
  j = *v2;
  v5 = 8;
  while ( !*((_BYTE *)j + 25) )
  {
    if ( *((_DWORD *)j + 8) )
    {
      if ( v3 >= 0x331 )
        break;
      v10 = *((_DWORD *)j + 9);
      v11 = v10 != 0;
      if ( *((_DWORD *)j + 10) )
        v11 = (v10 != 0) + 2;
      v12 = v5;
      v5 += 5;
      ++v3;
      *(_DWORD *)((char *)&v21[-1] + v12) = *((_DWORD *)j + 7);
      *((_BYTE *)v21 + v12) = v11;
    }
    v13 = (__int64 **)j[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v15 = *v13;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
        j = v15;
    }
  }
  v21[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, &v20, 4096LL, 0LL);
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v7,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    if ( tlgKeywordOn((__int64)v8, 64LL) )
    {
      v16 = v6;
      v18 = &v16;
      v19 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer(v9, byte_180193C4B, 0LL, 0LL, 3, (__int64)v17);
    }
  }
}
