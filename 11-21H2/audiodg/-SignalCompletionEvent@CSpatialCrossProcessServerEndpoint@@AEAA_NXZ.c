/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140095038
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x140095700 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1400235EC (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x1400894D0 (McTemplateU0pqp_EventWriteTransfer.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x1400934E0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  __int64 v2; // rax
  char v3; // si
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 170);
  v3 = 0;
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 169, v2);
    v5 = (_QWORD *)((char *)this + 1344);
    v10 = (wil::details *)*((_QWORD *)this + 169);
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 168);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v5, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC9,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)(unsigned int)v6);
    v7 = *((_QWORD *)this + 162);
    *((_QWORD *)this + 170) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v7 + 64), 0x20u);
  }
  if ( *((_QWORD *)this + 168) && CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
  {
    SetEvent(*((HANDLE *)this + 169));
    v3 = 1;
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer(
      *((_QWORD *)this + 169),
      a2,
      (__int64)this,
      *((_DWORD *)this + 343),
      *((_QWORD *)this + 169));
  return v3;
}
