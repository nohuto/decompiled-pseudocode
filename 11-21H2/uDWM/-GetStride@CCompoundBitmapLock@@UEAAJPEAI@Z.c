/*
 * XREFs of ?GetStride@CCompoundBitmapLock@@UEAAJPEAI@Z @ 0x18005F9E0
 * Callers:
 *     ?GetStride@CCompoundBitmapLock@@W7EAAJPEAI@Z @ 0x180063E80 (-GetStride@CCompoundBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetStride(CCompoundBitmapLock *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 40LL))(
           *((_QWORD *)this + 2) + 72LL,
           a2);
}
