/*
 * XREFs of ?Thunk_UpdateId_0@?$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180055C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationTargetClientProxy_Receive<BamoImpl::BamoAnimationTargetClientProxyImpl>::Thunk_UpdateId_0(
        BamoImpl::BamoAnimationTargetClientProxyImpl *a1,
        __int64 **a2)
{
  __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateId(a1, (__int64)a2, *v2);
}
