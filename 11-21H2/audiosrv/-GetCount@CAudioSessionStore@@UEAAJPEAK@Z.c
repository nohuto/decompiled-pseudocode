/*
 * XREFs of ?GetCount@CAudioSessionStore@@UEAAJPEAK@Z @ 0x1800E9800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::GetCount(CAudioSessionStore *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), a2);
}
