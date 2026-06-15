/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140023510
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1400235EC (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x1400894D0 (McTemplateU0pqp_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(CCrossProcessBaseServerEndpoint *this, int a2)
{
  CCrossProcessBaseServerEndpoint *v2; // rbx
  char v3; // al
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = this;
  if ( (*((_DWORD *)this + 42) & 0x40000) != 0 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 164LL), 0, 0);
    v4 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v5 = *((_QWORD *)this + 53);
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)v2 + 52, v5);
        v9 = *((_QWORD *)v2 + 52);
        wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)v2 + 51);
        v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>((char *)v2 + 408, &v9);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3C4,
            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)(unsigned int)v6,
            v7);
        *((_QWORD *)v2 + 53) = 0LL;
      }
    }
    this = (CCrossProcessBaseServerEndpoint *)*((_QWORD *)v2 + 52);
    if ( this && ((*((_BYTE *)v2 + 168) & 1) == 0 || v4) )
      SetEvent(this);
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer((_DWORD)this, a2, (_DWORD)v2 - 8, *((_DWORD *)v2 + 109), *((_QWORD *)v2 + 52));
}
