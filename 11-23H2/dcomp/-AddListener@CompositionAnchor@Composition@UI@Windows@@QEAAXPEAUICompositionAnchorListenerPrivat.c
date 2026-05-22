/*
 * XREFs of ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40
 * Callers:
 *     ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848 (-RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?AddListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@E@Z @ 0x180147840 (-AddListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListen.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUItem@CompositionAnchor@Composition@UI@Windows@@@?$vector@UItem@CompositionAnchor@Composition@UI@Windows@@V?$allocator@UItem@CompositionAnchor@Composition@UI@Windows@@@std@@@std@@QEAAPEAUItem@CompositionAnchor@Composition@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180068548 (--$_Emplace_reallocate@AEBUItem@CompositionAnchor@Composition@UI@Windows@@@-$vector@UItem@Compos.c)
 *     ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z @ 0x18006D31C (-NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V?$function@$$A6AXXZ@std@@@Z @ 0x180108CD0 (-Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V-$function@$$A6AXX.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::AddListener(
        Windows::UI::Composition::Visual **this,
        struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *a2,
        unsigned __int8 a3,
        const char *a4)
{
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int128 *v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v6 = (char *)(this + 24);
  v7 = *((_QWORD *)v6 + 1);
  v8 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 == v7 )
  {
    v15 = 0LL;
    v13 = (unsigned __int64)a2;
    HIDWORD(v15) = 1;
    v16 = a3;
    v14 = 0LL;
    if ( v7 == *((_QWORD *)v6 + 2) )
    {
      std::vector<Windows::UI::Composition::CompositionAnchor::Item>::_Emplace_reallocate<Windows::UI::Composition::CompositionAnchor::Item const &>(
        v6,
        (_BYTE *)v7,
        (__int64)&v13);
    }
    else
    {
      *(_OWORD *)v7 = v13;
      v9 = v15;
      *(_OWORD *)(v7 + 16) = 0LL;
      v10 = v16;
      *(_OWORD *)(v7 + 32) = v9;
      *(_QWORD *)(v7 + 48) = v10;
      *((_QWORD *)v6 + 1) += 56LL;
    }
    Windows::UI::Composition::Visual::NotifyAnchorListening(
      this[18],
      (struct Windows::UI::Composition::CompositionAnchor *)this,
      1);
  }
  else
  {
    while ( *(struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate **)v8 != a2 )
    {
      v8 += 56LL;
      if ( v8 == v7 )
      {
        v15 = 0LL;
        v13 = (unsigned __int64)a2;
        HIDWORD(v15) = 1;
        v16 = a3;
        v14 = 0LL;
        if ( v7 == *((_QWORD *)v6 + 2) )
        {
          std::vector<Windows::UI::Composition::CompositionAnchor::Item>::_Emplace_reallocate<Windows::UI::Composition::CompositionAnchor::Item const &>(
            v6,
            (_BYTE *)v7,
            (__int64)&v13);
        }
        else
        {
          *(_OWORD *)v7 = v13;
          v11 = v15;
          *(_OWORD *)(v7 + 16) = 0LL;
          v12 = v16;
          *(_OWORD *)(v7 + 32) = v11;
          *(_QWORD *)(v7 + 48) = v12;
          *((_QWORD *)v6 + 1) += 56LL;
        }
        *((_QWORD *)&v13 + 1) = this;
        *(_QWORD *)&v13 = off_1801D63D8;
        v17 = &v13;
        Microsoft::WRL2::ContextLatchedInvoke::Invoke(this + 27, this, &v13);
        return;
      }
    }
    if ( *(_BYTE *)(v8 + 48) != a3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA5,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionanchor.cpp",
        a4);
    ++*(_DWORD *)(v8 + 44);
  }
}
