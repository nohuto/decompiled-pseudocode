/*
 * XREFs of TpAllocPool @ 0x180074630
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  __int64 v2; // r8

  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return TpAllocPoolInternal(PoolReturn, 0LL);
    }
  }
  TppRaiseInvalidParameter(PoolReturn, Reserved, v2);
  return -1073741811;
}
