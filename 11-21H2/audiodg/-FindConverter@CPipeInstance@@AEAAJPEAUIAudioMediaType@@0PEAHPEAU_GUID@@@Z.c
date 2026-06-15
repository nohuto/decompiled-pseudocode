/*
 * XREFs of ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140029D0C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::FindConverter(
        CPipeInstance *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        int *a4,
        struct _GUID *a5)
{
  int v8; // ebx
  int v9; // ecx
  int v11; // eax
  _BYTE v12[16]; // [rsp+20h] [rbp-88h] BYREF
  int v13; // [rsp+30h] [rbp-78h]
  float v14; // [rsp+3Ch] [rbp-6Ch]
  _BYTE v15[16]; // [rsp+48h] [rbp-60h] BYREF
  int v16; // [rsp+58h] [rbp-50h]
  float v17; // [rsp+64h] [rbp-44h]

  *a4 = 1;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a3->lpVtbl->GetUncompressedAudioFormat)(a3, v15);
  if ( v8 < 0 )
    goto LABEL_18;
  v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))a2->lpVtbl->GetUncompressedAudioFormat)(a2, v12);
  if ( v8 < 0 )
    goto LABEL_18;
  if ( v17 == v14 )
  {
    v9 = *((_DWORD *)this + 34);
    if ( (v9 & 8) == 0 )
    {
      if ( v16 != v13 )
      {
        if ( (v9 & 4) != 0 )
        {
          *a5 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
          *((_DWORD *)this + 34) &= ~4u;
        }
        else
        {
          v8 = -2005139408;
        }
        if ( v8 >= 0 )
          return (unsigned int)v8;
        goto LABEL_18;
      }
      if ( (v9 & 1) != 0 )
      {
        *a5 = GUID_3fd7f233_a716_472e_8f2f_c25954f34e96;
        return (unsigned int)v8;
      }
      goto LABEL_14;
    }
  }
  if ( (*((_BYTE *)this + 136) & 2) == 0 )
  {
LABEL_14:
    v8 = -2005139408;
LABEL_18:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::FindConverter", 0x8E2u, v8);
    return (unsigned int)v8;
  }
  *a5 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
  v11 = *((_DWORD *)this + 34);
  if ( (v11 & 8) != 0 )
  {
    *a4 = 0;
    v11 = *((_DWORD *)this + 34);
  }
  *((_DWORD *)this + 34) = v11 & 0xFFFFFFF5;
  return (unsigned int)v8;
}
