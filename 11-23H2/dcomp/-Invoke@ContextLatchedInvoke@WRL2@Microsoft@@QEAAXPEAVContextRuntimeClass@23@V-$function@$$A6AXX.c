/*
 * XREFs of ?Invoke@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@V?$function@$$A6AXXZ@std@@@Z @ 0x180108CD0
 * Callers:
 *     ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40 (-AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivat.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180108898 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextLatchedInvoke::Invoke(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass *a2,
        __int64 a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rax
  _QWORD *v7; // rax

  v4 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 64);
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( v4 == a2 )
      return std::_Func_class<void,>::_Tidy(a3, (__int64)a2);
LABEL_5:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  if ( v4 )
    goto LABEL_5;
  *(_BYTE *)(a1 + 72) = 1;
  std::function<void (void)>::operator=(a1, a3);
  *(_QWORD *)(a1 + 64) = a2;
  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  v7 = DefaultHeap::Alloc(8uLL);
  *(_QWORD *)(a1 + 80) = v7;
  *v7 = a1;
  (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall *)(void *), _QWORD))(**((_QWORD **)a2 + 3) + 104LL))(
    *((_QWORD **)a2 + 3),
    Microsoft::WRL2::ContextLatchedInvoke::Static_DeferredNotify_NoLock,
    *(_QWORD *)(a1 + 80));
  return std::_Func_class<void,>::_Tidy(a3, (__int64)a2);
}
