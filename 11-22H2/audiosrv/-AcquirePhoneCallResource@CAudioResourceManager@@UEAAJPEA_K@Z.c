/*
 * XREFs of ?AcquirePhoneCallResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x1800D8CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::AcquirePhoneCallResource(CAudioResourceManager *this, unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           a2);
}
