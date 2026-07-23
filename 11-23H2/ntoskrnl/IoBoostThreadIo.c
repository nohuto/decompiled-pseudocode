/*
 * XREFs of IoBoostThreadIo @ 0x140373D80
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x14031B5B0 (IoBoostThreadIoPriority.c)
 */

__int64 __fastcall IoBoostThreadIo(volatile signed __int64 *a1, int a2, char a3, int a4)
{
  if ( a4 )
    return 3221225485LL;
  if ( a3 == 1 )
  {
    PsBoostThreadIoEx((__int64)a1, 1, 1, 0LL);
  }
  else
  {
    PsBoostThreadIoEx((__int64)a1, 0, 1, 0LL);
    IoBoostThreadIoPriority(a1, a2, 0x80000000);
  }
  return 0LL;
}
