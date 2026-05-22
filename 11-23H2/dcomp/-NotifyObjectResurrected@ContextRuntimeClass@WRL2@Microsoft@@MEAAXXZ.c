/*
 * XREFs of ?NotifyObjectResurrected@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ @ 0x180108D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::NotifyObjectResurrected(
        Microsoft::WRL2::ContextRuntimeClass *this)
{
  if ( *((char *)this + 32) >= 0 )
    RaiseFailFastException(0LL, 0LL, 1u);
}
