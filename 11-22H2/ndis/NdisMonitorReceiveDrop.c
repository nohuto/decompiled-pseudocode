/*
 * XREFs of NdisMonitorReceiveDrop @ 0x1C009EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3218 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall NdisMonitorReceiveDrop(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)BugCheckParameter4 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, BugCheckParameter4);
  if ( a3 )
    ndisBugCheckEx(0x2DuLL, 3uLL, a3, BugCheckParameter4);
  if ( byte_1C00F5390 )
  {
    result = *(unsigned int *)(BugCheckParameter4 + 5864);
    if ( (result & 2) != 0 )
      return PktMonClientNblDropNdis((int)BugCheckParameter4 + 5808, a2, 0, 1, *(_DWORD *)(a2 + 140), -536866801);
  }
  return result;
}
