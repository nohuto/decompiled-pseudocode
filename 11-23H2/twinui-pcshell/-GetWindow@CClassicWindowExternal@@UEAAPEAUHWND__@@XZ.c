/*
 * XREFs of ?GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ @ 0x18014C070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowExternal::GetWindow(CClassicWindowExternal *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7));
}
