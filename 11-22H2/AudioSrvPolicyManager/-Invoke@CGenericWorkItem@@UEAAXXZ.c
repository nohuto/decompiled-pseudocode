/*
 * XREFs of ?Invoke@CGenericWorkItem@@UEAAXXZ @ 0x1800134A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericWorkItem::Invoke(CGenericWorkItem *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 56LL);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
