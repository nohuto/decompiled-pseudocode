/*
 * XREFs of ViSetIoBuildRequestFlag @ 0x1405D1F30
 * Callers:
 *     ViIovIoBuildDeviceIoControlRequest_Exit @ 0x1405D1EA0 (ViIovIoBuildDeviceIoControlRequest_Exit.c)
 *     ViIovIoBuildSynchronousFsdRequest_Exit @ 0x1405D1EC0 (ViIovIoBuildSynchronousFsdRequest_Exit.c)
 *     ViIovIoBuildAsynchronousFsdRequest_Exit @ 0x140ADC760 (ViIovIoBuildAsynchronousFsdRequest_Exit.c)
 * Callees:
 *     VfPacketFindAndLock @ 0x140ADD11C (VfPacketFindAndLock.c)
 *     VfPacketReleaseLock @ 0x140ADD188 (VfPacketReleaseLock.c)
 */

__int64 __fastcall ViSetIoBuildRequestFlag(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx

  result = VfPacketFindAndLock();
  v3 = result;
  if ( result )
  {
    *(_DWORD *)(result + 56) |= 0x1000u;
    v4 = *(_DWORD *)(a1 + 16);
    if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 && (v4 & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)(*(_BYTE *)(v5 - 72) - 14) <= 1u )
      {
        *(_QWORD *)(v3 + 200) = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v3 + 208) = *(_DWORD *)(v5 - 64);
      }
    }
    return VfPacketReleaseLock(v3);
  }
  return result;
}
