/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800E5380
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(CAudioStream *this, int a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  char *v14; // rax
  void *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int MediaEvent; // eax
  int v25; // [rsp+38h] [rbp-59h] BYREF
  int v26; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v27; // [rsp+40h] [rbp-51h] BYREF
  __int64 v28; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v29[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v30; // [rsp+78h] [rbp-19h]
  __int64 v31; // [rsp+80h] [rbp-11h]
  __int64 *v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  int *v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+A0h] [rbp+Fh]
  int *v36; // [rsp+A8h] [rbp+17h]
  __int64 v37; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    v26 = a4;
    v25 = v9;
    v28 = *((_QWORD *)this + 48);
    v27 = a3;
    v36 = &v25;
    v34 = &v26;
    v32 = &v27;
    v30 = &v28;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 8LL;
    v31 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v8, byte_180188D05, 0LL, 0LL, 6, (__int64)v29);
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (char *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( !v14 )
    {
      v16 = -2147024882;
      v17 = 1433LL;
      v18 = 2147942414LL;
      goto LABEL_10;
    }
    *(_DWORD *)v14 = v13;
    *(GUID *)(v14 + 28) = GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v14 + 1) = 0x20000;
    *((_DWORD *)v14 + 6) = v12;
    *((_QWORD *)v14 + 6) = *((_QWORD *)this + 48);
    *((_QWORD *)v14 + 7) = a3;
    *((_DWORD *)v14 + 16) = a4;
    *((_DWORD *)v14 + 17) = a2;
    v19 = StringCbCopyW(v14 + 72, v12, *(char **)(*((_QWORD *)this + 7) + 656LL));
    v16 = v19;
    if ( v19 < 0 )
    {
      v18 = (unsigned int)v19;
      v17 = 1452LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v18);
      if ( !v15 )
        return v16;
LABEL_14:
      operator delete(v15);
      return v16;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v15, v20, v21, v22);
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)MediaEvent);
      goto LABEL_14;
    }
    operator delete(v15);
  }
  return 0LL;
}
