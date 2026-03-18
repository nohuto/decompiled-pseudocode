/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0046154
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0009060 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C002DDC0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0038590 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C003E060 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C00529F0 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rsi
  char *i; // rbx
  void (__fastcall *v4)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_ObjectSize )
    {
      for ( i = (char *)this + this->m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
      {
        v4 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
        if ( v4 )
        {
          v4(ObjectHandleUnchecked);
          *((_QWORD *)i + 2) = 0LL;
        }
      }
    }
    this->m_ObjectFlags &= ~0x400u;
  }
}
