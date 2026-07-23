/*
 * XREFs of KiCanLocalReadyThreadBeScheduledToRescheduleContext @ 0x140243810
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiDoesThreadDominateRescheduleContextEntry @ 0x1402438E0 (KiDoesThreadDominateRescheduleContextEntry.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243980 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 */

__int64 __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rbp
  unsigned __int8 *v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int8 *v16; // rbp

  v6 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v6 > *((_DWORD *)a1 + 2) )
    return 0LL;
  v9 = *((_DWORD *)a1 + 1);
  if ( v6 < v9 )
    v6 = v9;
  LOBYTE(v10) = *a1;
  if ( !v6 )
  {
    v11 = 0LL;
    if ( (_BYTE)v10 )
    {
      while ( 1 )
      {
        v12 = &a1[40 * v11];
        if ( (unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v12 + 16, a2, a3, a4) )
        {
          if ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v12 + 16, a2, 0LL, 0LL) )
            break;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *a1 )
          return 0LL;
      }
      return *((_QWORD *)v12 + 2);
    }
    return 0LL;
  }
  v14 = 0LL;
  if ( (_BYTE)v10 )
  {
    while ( (unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(
                               &a1[32 * v14 + 16 + 8 * (unsigned int)v14],
                               a2,
                               0LL,
                               0LL) )
    {
      v10 = *a1;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v10 )
        goto LABEL_17;
    }
    return 0LL;
  }
LABEL_17:
  v15 = 0LL;
  if ( !(_BYTE)v10 )
    return 0LL;
  while ( 1 )
  {
    v16 = &a1[40 * v15];
    if ( (unsigned __int8)KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(v16 + 16, a2, a3, a4) )
      break;
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= *a1 )
      return 0LL;
  }
  return *((_QWORD *)v16 + 2);
}
