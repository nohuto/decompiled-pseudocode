/*
 * XREFs of ?AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I@Z @ 0x180093FC0
 * Callers:
 *     ?SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z @ 0x18000F51C (-SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z.c)
 *     ?put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z @ 0x1800747A0 (-put_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionClip@345@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@?$vector@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAVProxyObject@Composition@UI@Windows@@I@1@QEAU21@$$QEAU21@@Z @ 0x180094060 (--$_Emplace_reallocate@U-$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@-$vector@U-$pair@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::AddDeferredPropertyChangeNotification(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::ProxyObject *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rbx
  __int64 i; // rax
  _OWORD *v6; // rdx
  int v7; // eax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 122);
  v3 = (_QWORD *)((char *)this + 968);
  for ( i = *((_QWORD *)this + 121);
        i != v2 && (*(struct Windows::UI::Composition::ProxyObject **)i != a2 || *(_DWORD *)(i + 8) != 6);
        i += 16LL )
  {
    ;
  }
  if ( i == v2 )
  {
    *(_QWORD *)v8 = a2;
    v6 = (_OWORD *)*((_QWORD *)this + 122);
    v8[2] = 6;
    if ( v6 == *((_OWORD **)this + 123) )
    {
      std::vector<std::pair<Windows::UI::Composition::ProxyObject *,unsigned int>>::_Emplace_reallocate<std::pair<Windows::UI::Composition::ProxyObject *,unsigned int>>(
        (char *)this + 968,
        v6,
        v8);
    }
    else
    {
      *v6 = *(_OWORD *)v8;
      *((_QWORD *)this + 122) += 16LL;
    }
    if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
    {
      LOBYTE(v6) = 1;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 55) + 48LL))(*((_QWORD *)this + 55), v6);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x392,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v7,
          v8[0]);
    }
  }
}
