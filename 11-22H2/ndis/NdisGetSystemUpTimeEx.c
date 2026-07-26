/*
 * XREFs of NdisGetSystemUpTimeEx @ 0x1C0025110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetSystemUpTimeEx(PLARGE_INTEGER pSystemUpTime)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx

  v2 = MEMORY[0xFFFFF78000000320];
  v3 = (__int64)((unsigned __int128)(v2 * (int)KeQueryTimeIncrement() * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  pSystemUpTime->QuadPart = (v3 >> 63) + v3;
}
