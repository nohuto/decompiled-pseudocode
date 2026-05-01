/*
 * XREFs of ??1ModernResourceManagerProxy@@UEAA@XZ @ 0x18001B42C
 * Callers:
 *     ??_GModernResourceManagerProxy@@UEAAPEAXI@Z @ 0x18001B490 (--_GModernResourceManagerProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceManagerProxy::~ModernResourceManagerProxy(ModernResourceManagerProxy *this)
{
  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  if ( *((_QWORD *)this + 7) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)this + 8) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
}
