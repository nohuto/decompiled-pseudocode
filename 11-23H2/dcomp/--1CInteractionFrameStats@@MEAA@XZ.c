/*
 * XREFs of ??1CInteractionFrameStats@@MEAA@XZ @ 0x1801A51F0
 * Callers:
 *     ??_ECInteractionFrameStats@@MEAAPEAXI@Z @ 0x1801A53E0 (--_ECInteractionFrameStats@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionFrameStats::~CInteractionFrameStats(CInteractionFrameStats *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CInteractionFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CInteractionFrameStats::`vftable'{for `IDCompositionManipulationStats'};
  *((_QWORD *)this + 44) = &CInteractionFrameStats::`vftable';
  v2 = (void *)*((_QWORD *)this + 45);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 47) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  CTouchFrameStats::~CTouchFrameStats(this);
}
