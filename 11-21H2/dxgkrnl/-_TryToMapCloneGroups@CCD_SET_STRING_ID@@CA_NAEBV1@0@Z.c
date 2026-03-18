/*
 * XREFs of ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x1C03AA77C
 * Callers:
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C03AA640 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C01AD89C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C03AA578 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::_TryToMapCloneGroups(
        const struct CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2)
{
  int v2; // esi
  unsigned int v5; // edi
  int v6; // r14d
  __int64 v7; // rdx
  int PathByMonitorId; // eax
  __int64 v9; // rcx
  struct _STRING v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = -1;
  v5 = 0;
  v6 = -1;
  if ( !*((_WORD *)this + 16) )
    return 1;
  v7 = *((_QWORD *)this + 3);
  while ( !*(_WORD *)(v7 + 8LL * v5 + 4) )
  {
    v11 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, v5, &v11);
    v12 = 0;
    PathByMonitorId = CCD_SET_STRING_ID::FindPathByMonitorId(a2, &v11, &v12);
    if ( PathByMonitorId < 0 )
    {
      if ( PathByMonitorId != -1073741275 )
        WdLogSingleEntry0(1LL);
      return 0;
    }
    v7 = *((_QWORD *)this + 3);
    v9 = *((_QWORD *)a2 + 3);
    if ( v2 == *(unsigned __int16 *)(v7 + 8LL * v5 + 2) )
    {
      if ( v6 != *(unsigned __int16 *)(v9 + 8LL * v12 + 2) )
        return 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(v7 + 8LL * v5 + 2);
      v6 = *(unsigned __int16 *)(v9 + 8LL * v12 + 2);
    }
    if ( ++v5 >= *((unsigned __int16 *)this + 16) )
      return 1;
  }
  return 0;
}
