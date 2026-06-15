/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14001C340
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14001C444 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+38h] [rbp-48h]
  float v14; // [rsp+3Ch] [rbp-44h]
  _QWORD v15[2]; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  int v18; // [rsp+60h] [rbp-20h]
  float v19; // [rsp+64h] [rbp-1Ch]

  if ( !a2 )
    return 0;
  v6 = (char *)this + 16;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, struct IAudioMediaType **, struct IAudioMediaType *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         v15,
         a3,
         a4);
  if ( v7 < 0
    || (v7 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD *))a2->lpVtbl->GetUncompressedAudioFormat)(
               a2,
               v10),
        v7 < 0) )
  {
LABEL_16:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_459a70a20f2b395031111be1427f992c_Traceguids,
        (unsigned int)v7);
    }
    AudDGTraceLoggingErrorHelper("CProcessNode::IsRightFormatSupported", 0x110u, v7);
    return (unsigned int)v7;
  }
  v8 = v10[0] - v15[0];
  if ( v10[0] == v15[0] )
    v8 = v10[1] - v15[1];
  if ( v8 || v11 != v16 || v12 != v17 || v13 != v18 || v14 != v19 )
  {
    v7 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v6, a3);
    if ( v7 >= 0 )
      return 1;
    goto LABEL_16;
  }
  return (unsigned int)v7;
}
