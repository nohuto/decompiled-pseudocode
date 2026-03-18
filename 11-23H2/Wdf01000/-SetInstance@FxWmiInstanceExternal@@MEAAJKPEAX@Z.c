/*
 * XREFs of ?SetInstance@FxWmiInstanceExternal@@MEAAJKPEAX@Z @ 0x1C0029190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceExternal::SetInstance(
        FxWmiInstanceExternal *this,
        unsigned int InBufferSize,
        void *InBuffer)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v4; // r9
  __int64 (__fastcall *v5)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v5 = *(__int64 (__fastcall **)(unsigned __int64))(v4 + 152);
  if ( v5 )
    return v5(ObjectHandleUnchecked);
  else
    return 3221226182LL;
}
