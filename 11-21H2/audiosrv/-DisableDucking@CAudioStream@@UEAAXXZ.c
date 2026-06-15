/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x18003B120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 130, 1);
}
