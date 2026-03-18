/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x1406787F8
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x14067811C (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IpmiLibpHandleErrorInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ecx

  if ( (dword_140C2CC40 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140C2CC50 )
    return 3221225485LL;
  v5 = qword_140C2CC50(qword_140C2CC58, &WheaIpmiContext, a2, a3, a4, 0);
  v6 = -1073741811;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v6;
}
