/*
 * XREFs of ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140023EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAPOProcessNode::IsRightFormatSupported(
        CAPOProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  struct IAudioMediaType *v4; // r11
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx

  v4 = a4;
  if ( !a4 )
    v4 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v5 = **(_QWORD **)(*((_QWORD *)this + 4) + 40LL);
  if ( *((_DWORD *)this + 6) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v5 + 56))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 40LL),
           v4,
           a2,
           a3);
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(v5 + 64))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 40LL),
           v4,
           a2,
           a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids,
        (unsigned int)v6);
    }
    AudDGTraceLoggingErrorHelper("CAPOProcessNode::IsRightFormatSupported", 0x2DCu, v7);
  }
  return v7;
}
