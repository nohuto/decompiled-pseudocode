/*
 * XREFs of ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z @ 0x18006AFA8
 * Callers:
 *     ?NotifyFromAnchor_Updated_Callback@Private@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorPrivate@1345@@Z @ 0x18006AF60 (-NotifyFromAnchor_Updated_Callback@Private@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUICo.c)
 * Callees:
 *     ??9Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x180011FB4 (--9Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC (-NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e___ @ 0x180111384 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e_.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::NotifyFromAnchor_Updated_Callback(
        __int64 *a1,
        float a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  float v6; // xmm1_4
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_BYTE *)a1 + 188);
  if ( *((_DWORD *)a1 + 46) )
  {
    v6 = fmaxf(0.0099999998, a2);
    if ( !v4 || *((float *)a1 + 79) != v6 || Windows::Foundation::Numerics::operator!=((float *)a1 + 76, (float *)a3) )
    {
      v7 = *(_DWORD *)(a3 + 8);
      a1[38] = *(_QWORD *)a3;
      *((_DWORD *)a1 + 78) = v7;
      *((float *)a1 + 79) = v6;
      *((_BYTE *)a1 + 188) = 1;
      Windows::UI::Composition::CompositionIsland::NotifyTransformChanged_Callback((Windows::UI::Composition::CompositionIsland *)a1);
      if ( (a1[4] & 2) != 0 && !v4 )
      {
        if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)a1 + 24)
          || (Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e___((Microsoft::WRL2::ContextSession *)a1[3]),
              (a1[4] & 2) != 0) )
        {
          if ( *((_BYTE *)a1 + 384) != 1 )
          {
            v9 = *a1;
            *((_BYTE *)a1 + 384) = 1;
            LOBYTE(v8) = 1;
            (*(void (__fastcall **)(__int64 *, __int64))(v9 + 320))(a1, v8);
          }
        }
      }
    }
  }
  else if ( v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x485,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      a4);
  }
}
