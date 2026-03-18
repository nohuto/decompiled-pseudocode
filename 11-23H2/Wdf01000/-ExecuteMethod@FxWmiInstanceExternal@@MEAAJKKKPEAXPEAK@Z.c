/*
 * XREFs of ?ExecuteMethod@FxWmiInstanceExternal@@MEAAJKKKPEAXPEAK@Z @ 0x1C0028C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceExternal::ExecuteMethod(
        FxWmiInstanceExternal *this,
        unsigned int MethodId,
        unsigned int InBufferSize,
        unsigned int OutBufferSize)
{
  unsigned __int64 ObjectHandleUnchecked; // r11
  __int64 v5; // r10
  __int64 (__fastcall *v6)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v6 = *(__int64 (__fastcall **)(unsigned __int64))(v5 + 168);
  if ( v6 )
    return v6(ObjectHandleUnchecked);
  else
    return 3221226133LL;
}
