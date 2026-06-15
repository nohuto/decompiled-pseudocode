/*
 * XREFs of ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180025F84
 * Callers:
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18002D728 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     WPP_SF_ @ 0x18001F1CC (WPP_SF_.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180025E94 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 */

void __fastcall CProcess::CastingStateChanged(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // r8d
  int v5; // eax

  if ( !*(_DWORD *)(a1 + 416) )
  {
    v3 = *(_DWORD *)(a1 + 508);
    v4 = v3 - 1;
    v5 = v3 + 1;
    if ( a2 )
      v5 = v4;
    *(_DWORD *)(a1 + 508) = v5;
    if ( v5 >= 0 )
    {
      CApplication::CastingStateChanged(*(CApplication **)(a1 + 224), a2 != 0 ? -1 : 1);
    }
    else
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
      }
      *(_DWORD *)(a1 + 508) = 0;
    }
  }
}
