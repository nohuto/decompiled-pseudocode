/*
 * XREFs of SetVacb @ 0x140285740
 * Callers:
 *     CcGetVacbMiss @ 0x1402858A0 (CcGetVacbMiss.c)
 *     CcDereferenceFileOffset @ 0x14053B060 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14053B22C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x14028D58C (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r8

  v5 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = CcSetVacbLargeOffset(a1, a2, a3, a4);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
LABEL_7:
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 540));
    else
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
    return v5;
  }
  if ( a3 != -1LL && a3 != -2LL )
    goto LABEL_7;
  return v5;
}
