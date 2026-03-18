/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C000DC54
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0002C40 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0034F20 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0035760 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0061010 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0066EB0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // dx
  unsigned __int64 ObjectHandleUnchecked; // rsi
  char *v4; // rbx
  void (__fastcall *v5)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_ObjectSize )
    {
      v4 = (char *)this + this->m_ObjectSize;
      if ( v4 )
      {
        do
        {
          v5 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)v4 + 2);
          if ( v5 )
          {
            v5(ObjectHandleUnchecked);
            *((_QWORD *)v4 + 2) = 0LL;
          }
          v4 = (char *)*((_QWORD *)v4 + 1);
        }
        while ( v4 );
        m_ObjectFlags = this->m_ObjectFlags;
      }
    }
    this->m_ObjectFlags = m_ObjectFlags & 0xFBFF;
  }
}
