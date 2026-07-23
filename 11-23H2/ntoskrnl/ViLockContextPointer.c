/*
 * XREFs of ViLockContextPointer @ 0x140AC40DC
 * Callers:
 *     VfInsertContext @ 0x1405CE9B0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CEB40 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140AC4124 (ViQueryObjectContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 */

char __fastcall ViLockContextPointer(signed __int64 *a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v2 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v2 )
        return v2;
      KeYieldProcessorEx(&v5);
    }
    v3 = *a1;
  }
  while ( v3 != _InterlockedCompareExchange64(a1, v2 - 1, v2) );
  LOBYTE(v2) = 1;
  return v2;
}
