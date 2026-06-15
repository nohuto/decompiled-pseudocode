/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180010D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x1800135B8 (WPP_SF_SSd.c)
 *     WPP_SF_i @ 0x180013780 (WPP_SF_i.c)
 *     WPP_SF_id @ 0x1800137C8 (WPP_SF_id.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v4; // cl
  int MediaEvent; // esi
  __int64 v7; // rax
  const wchar_t *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  bool v14; // di
  __int64 v15; // rdx
  int v16; // eax
  _UNKNOWN **v17; // rcx
  USHORT v18; // dx

  v4 = *(_BYTE *)(a1 + 25);
  MediaEvent = 0;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( v4 )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, a3, *a2, *(_DWORD *)(a2[6] + 16LL));
        v9 = WPP_GLOBAL_Control;
      }
      v15 = a2[6];
      v16 = *(_DWORD *)(v15 + 16);
      if ( v16 )
      {
        *(_DWORD *)(v15 + 16) = v16 - 1;
        goto LABEL_46;
      }
      goto LABEL_13;
    }
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, a3, *a2);
      v9 = WPP_GLOBAL_Control;
    }
    if ( a2[4] )
      goto LABEL_13;
LABEL_46:
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, a3, *a2);
    }
    MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
    if ( MediaEvent )
    {
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_60:
        if ( MediaEvent < 0 )
        {
          if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x8000000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
            WPP_SF_d((TRACEHANDLE)v17[2], 0x16u, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, MediaEvent);
          AudPolicyLogError("CGenerateDuckingNotification::Invoke", 600, MediaEvent);
        }
        goto LABEL_19;
      }
      v18 = 19;
    }
    else
    {
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_19;
      }
      v18 = 20;
    }
    WPP_SF_d((TRACEHANDLE)v17[2], v18, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, *((_DWORD *)a2 + 2));
    v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_60;
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    v14 = !v7 && !a2[4];
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, a3, *a2, a2[4] == 0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( !v14 )
      goto LABEL_13;
    goto LABEL_46;
  }
  if ( v7 )
  {
    v8 = (const wchar_t *)(a2 + 2);
    if ( a2[5] >= 8uLL )
      v8 = *(const wchar_t **)v8;
    if ( !_wcsicoll(v8, *(const wchar_t **)(a1 + 16)) )
    {
      if ( a2[4] )
      {
        ++*(_DWORD *)(a2[6] + 16LL);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, a3, *a2, *(_DWORD *)(a2[6] + 16LL));
        }
      }
      goto LABEL_46;
    }
  }
  v9 = WPP_GLOBAL_Control;
LABEL_13:
  if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x8000000) != 0 && *((_BYTE *)v9 + 25) >= 4u )
  {
    v10 = a2 + 2;
    if ( a2[5] >= 8uLL )
      v10 = (_QWORD *)*v10;
    WPP_SF_SSd(
      v9[2],
      21,
      (unsigned int)&WPP_e74777e2ae65337d95908bedb110e863_Traceguids,
      *(_QWORD *)(a1 + 16),
      (__int64)v10,
      *((_DWORD *)a2 + 2));
  }
LABEL_19:
  v11 = (volatile signed __int32 *)a2[6];
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v11);
  v12 = a2[5];
  if ( v12 >= 8 )
    std::_Deallocate<16,0>((char *)a2[2], 2 * v12 + 2);
  result = (unsigned int)MediaEvent;
  a2[4] = 0LL;
  a2[5] = 7LL;
  *((_WORD *)a2 + 8) = 0;
  return result;
}
