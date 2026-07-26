/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1C014435C
 * Callers:
 *     LookUpTableFlushComplete @ 0x1C01204E4 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C01441D4 (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax

  if ( a2 )
  {
    v2 = (__int64 *)(a1 + 296);
    if ( *(_DWORD *)(a1 + 312) > a2 || (v3 = *v2) == 0 )
    {
      v3 = *v2;
      *(_DWORD *)(a1 + 312) = a2;
    }
    if ( *(_DWORD *)(a1 + 308) < a2 )
      *(_DWORD *)(a1 + 308) = a2;
    *v2 = v3 + 1;
    *(_QWORD *)(a1 + 288) += a2;
  }
}
