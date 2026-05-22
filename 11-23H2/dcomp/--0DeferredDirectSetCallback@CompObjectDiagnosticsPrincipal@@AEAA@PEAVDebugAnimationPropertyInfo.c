/*
 * XREFs of ??0DeferredDirectSetCallback@CompObjectDiagnosticsPrincipal@@AEAA@PEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@PEAUIDebugAnimationCallback@3456@@Z @ 0x18019C748
 * Callers:
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *__fastcall CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::DeferredDirectSetCallback(
        CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback *this,
        struct Windows::UI::Composition::Private::DebugAnimationPropertyInfo *a2,
        struct Windows::UI::Composition::Private::IDebugAnimationCallback *a3)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CompObjectDiagnosticsPrincipal::DeferredDirectSetCallback::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::Private::IDebugAnimationCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
