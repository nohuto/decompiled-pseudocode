/*
 * XREFs of ?DisableDucking@CAudioStream@@UEAAXXZ @ 0x18004E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::DisableDucking(CAudioStream *this)
{
  _InterlockedExchange((volatile __int32 *)this + 136, 1);
}
