/*
 * XREFs of ?TryReferenceBits@CCompoundBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801096A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::TryReferenceBits(CCompoundBitmapLock *this, struct IUnknown **a2)
{
  return (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 56LL))(
           *((_QWORD *)this + 2) + 72LL,
           a2);
}
