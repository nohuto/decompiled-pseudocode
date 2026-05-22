/*
 * XREFs of ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1801EB4B8
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EC850 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::HasMenuButtonReleased(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v2; // al
  bool v4; // zf

  if ( (*((_BYTE *)a2 + 2280) & 2) == 0 || (v2 = 1, *((_BYTE *)this + 10808)) )
    v2 = 0;
  if ( !*((_BYTE *)this + 3664) )
  {
    if ( v2 )
    {
      *((_BYTE *)this + 3569) = 0;
      *((_BYTE *)this + 3664) = 1;
    }
    return 0;
  }
  if ( v2 )
    return 0;
  v4 = *((_BYTE *)this + 3569) == 0;
  *((_BYTE *)this + 3664) = 0;
  return v4;
}
