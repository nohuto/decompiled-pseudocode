/*
 * XREFs of ?RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ @ 0x1800561E0
 * Callers:
 *     ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800488A0 (-CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@.c)
 *     ?CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z @ 0x180055CA0 (-CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::RegisterConversationWithDCompK(
        Windows::UI::Composition::ProxyObject *this)
{
  int v2; // edi
  int v3; // esi
  DirectComposition::CDevice *v4; // rbx
  _DWORD *v5; // rax
  void (__fastcall ***v6)(_QWORD); // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(Windows::UI::Composition::ProxyObject *))(*(_QWORD *)this + 104LL))(this) )
  {
    v2 = *((_DWORD *)this + 32);
    v3 = *((_DWORD *)this + 30);
    if ( v2 )
    {
      v4 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v4, 0xCu, &v7, 0);
      v5 = v7;
      *(_DWORD *)v7 = 7;
      v5[1] = v2;
      v5[2] = v3;
      v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v4 + 10);
      if ( v6 )
        (**v6)(v6);
    }
  }
}
