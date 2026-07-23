/*
 * XREFs of PnpClearDeviceTemporaryProperties @ 0x140795568
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140796D6C (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpClearDeviceTemporaryProperties(int a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = (__int64 *)&off_140007AA8;
  v3 = 3LL;
  do
  {
    result = PnpSetObjectProperty(PiPnpRtlCtx, a1, 1, 0LL, *v1++, 0, 0LL, 0, 0);
    --v3;
  }
  while ( v3 );
  return result;
}
