/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400A0928
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14003BD50 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001ED0C (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x140039EC2 (McTemplateU0pqp_EventWriteTransfer.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA4E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  char v4; // di
  volatile __int64 *v5; // rsi
  int v7; // eax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 170);
  v3 = (_QWORD *)((char *)this + 1344);
  v4 = 0;
  v5 = (volatile __int64 *)((char *)this + 1352);
  if ( v2 )
  {
    _InterlockedExchange64(v5, v2);
    v11 = (wil::details *)*v5;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 168);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v3, &v11);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC9,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)(unsigned int)v7);
    v8 = *((_QWORD *)this + 162);
    *((_QWORD *)this + 170) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v8 + 64), 0x20u);
  }
  if ( *v3 && CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
  {
    SetEvent(*(HANDLE *)v5);
    v4 = 1;
  }
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer(*v5, a2, (__int64)this, *((_DWORD *)this + 343), *v5);
  return v4;
}
