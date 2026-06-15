/*
 * XREFs of ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400189A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14001A360 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProcessNode::IsLeftFormatSupported(
        CProcessNode *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3,
        struct IAudioMediaType *a4)
{
  char *v4; // rdi
  __int64 v6; // rcx
  int v8; // ebx
  struct _GUID v10; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+38h] [rbp-48h]
  float v14; // [rsp+3Ch] [rbp-44h]
  struct _GUID v15; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  int v18; // [rsp+60h] [rbp-20h]
  float v19; // [rsp+64h] [rbp-1Ch]

  v4 = (char *)this + 8;
  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v6 + 48LL))(
         v6,
         &v15,
         a3,
         a4);
  if ( v8 >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a2->lpVtbl->GetUncompressedAudioFormat)(
           a2,
           &v10);
    if ( v8 >= 0 )
    {
      if ( (unsigned int)IsEqualGUID(&v10, &v15) && v11 == v16 && v12 == v17 && v13 == v18 && v14 == v19 )
        return (unsigned int)v8;
      v8 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v4, a3);
      if ( v8 >= 0 )
        return 1;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CProcessNode::IsLeftFormatSupported", 0xD8u, v8);
  return (unsigned int)v8;
}
