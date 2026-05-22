/*
 * XREFs of ?StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z @ 0x18000C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invalidate@CCompFrameStats@@MEAAXXZ @ 0x1801A4060 (-Invalidate@CCompFrameStats@@MEAAXXZ.c)
 */

void __fastcall CAnimationFrameStats::StartTimedCollection(CAnimationFrameStats *this, int a2, int a3)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  if ( *((_BYTE *)this - 148) && !*((_BYTE *)this - 147) && !*((_QWORD *)this - 6) )
  {
    if ( (unsigned int)(a2 + a3) > 0x7530 )
    {
      CCompFrameStats::Invalidate((CAnimationFrameStats *)((char *)this - 160));
    }
    else
    {
      *((_DWORD *)this - 30) = a2 + a3;
      *((_DWORD *)this + 659) = a2;
      *((_DWORD *)this + 660) = a3;
      *((_BYTE *)this + 2645) = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  CCompFrameStats::StartCollection((CAnimationFrameStats *)((char *)this - 160), 0LL);
}
