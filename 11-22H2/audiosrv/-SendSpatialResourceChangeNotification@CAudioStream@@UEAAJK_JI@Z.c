/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800ED210
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18004B11C (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(
        CAudioStream *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 *v8; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int *v15; // rax
  unsigned int *v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  unsigned int v22; // eax
  int MediaEvent; // eax
  int v24; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int *v26; // [rsp+40h] [rbp-51h] BYREF
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  char v28[32]; // [rsp+58h] [rbp-39h] BYREF
  void **v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  unsigned int *v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  int *v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 4u )
  {
    if ( tlgKeywordOn(v8[1], 512LL) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
      v25 = a4;
      v24 = v10;
      v26 = (unsigned int *)*((_QWORD *)this + 51);
      v27 = a3;
      v35 = &v24;
      v33 = &v25;
      v31 = &v27;
      v29 = (void **)&v26;
      v36 = 4LL;
      v34 = 4LL;
      v32 = 8LL;
      v30 = 8LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801917FC, 0LL, 0LL, 6, (__int64)v28);
    }
  }
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 656);
    v13 = 2 * *(_DWORD *)(v12 - 16) + 2;
    v14 = 2 * *(_DWORD *)(v12 - 16) + 74;
    v15 = (unsigned int *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v26 = v15;
    v16 = v15;
    if ( !v15 )
    {
      v17 = -2147024882;
      v18 = 1578LL;
      v19 = 2147942414LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v19);
      std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v26);
      return v17;
    }
    *v15 = v14;
    *(GUID *)(v15 + 7) = GUID_00000000_0000_0000_0000_000000000000;
    v15[1] = 0x20000;
    v15[6] = v13;
    *((_QWORD *)v15 + 6) = *((_QWORD *)this + 51);
    *((_QWORD *)v15 + 7) = a3;
    v15[16] = a4;
    v15[17] = a2;
    v20 = StringCbCopyW((char *)v15 + 72, v13, *(char **)(*((_QWORD *)this + 7) + 656LL));
    v17 = v20;
    if ( v20 < 0 )
    {
      v19 = (unsigned int)v20;
      v18 = 1597LL;
      goto LABEL_9;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v16, v22);
    v17 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x642,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)MediaEvent);
      operator delete(v16);
      return v17;
    }
    operator delete(v16);
  }
  return 0LL;
}
