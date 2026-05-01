/*
 * XREFs of ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x18013A3B0
 * Callers:
 *     ?Release@CEnumerableObjectCollection@@W7EAAKXZ @ 0x1801EC570 (-Release@CEnumerableObjectCollection@@W7EAAKXZ.c)
 *     ?Release@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1801EC590 (-Release@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Release(CEnumerableObjectCollection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
    (*(void (__fastcall **)(CEnumerableObjectCollection *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  return v1;
}
