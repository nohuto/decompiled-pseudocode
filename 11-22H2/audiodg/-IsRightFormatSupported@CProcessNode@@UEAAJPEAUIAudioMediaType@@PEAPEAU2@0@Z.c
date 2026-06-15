/*
 * XREFs of ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14001A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14001A360 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsRightFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  _QWORD *v6; // rsi
  int v7; // ebx
  struct _GUID v9; // [rsp+20h] [rbp-60h] BYREF
  int v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+34h] [rbp-4Ch]
  int v12; // [rsp+38h] [rbp-48h]
  float v13; // [rsp+3Ch] [rbp-44h]
  struct _GUID v14; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  int v17; // [rsp+60h] [rbp-20h]
  float v18; // [rsp+64h] [rbp-1Ch]

  if ( !a2 )
    return 0;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, struct IAudioMediaType **, struct IAudioMediaType *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         &v14,
         a3,
         a4);
  if ( v7 >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a2->lpVtbl->GetUncompressedAudioFormat)(
           a2,
           &v9);
    if ( v7 >= 0 )
    {
      if ( IsEqualGUID(&v9, &v14) && v10 == v15 && v11 == v16 && v12 == v17 && v13 == v18 )
        return (unsigned int)v7;
      v7 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v6, a3);
      if ( v7 >= 0 )
        return 1;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids,
      (unsigned int)v7);
  }
  AudDGTraceLoggingErrorHelper("CProcessNode::IsRightFormatSupported", 0x11Fu, v7);
  return (unsigned int)v7;
}
