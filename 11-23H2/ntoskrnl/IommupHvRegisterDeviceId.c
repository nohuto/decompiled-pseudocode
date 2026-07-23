/*
 * XREFs of IommupHvRegisterDeviceId @ 0x140525920
 * Callers:
 *     HalpIommuCreateDevice @ 0x140829348 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvRegisterDeviceId(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = _InterlockedIncrement(&HalpHvLogicalId);
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225626LL;
  result = ((__int64 (__fastcall *)(__int64, unsigned __int64))qword_140C62618)(a1, v3);
  if ( (int)result >= 0 )
    *a2 = v3;
  return result;
}
