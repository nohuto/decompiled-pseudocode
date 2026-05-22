/*
 * XREFs of ??1CCompFrameStats@@MEAA@XZ @ 0x180003DC4
 * Callers:
 *     ??_ECAnimationFrameStats@@MEAAPEAXI@Z @ 0x180004020 (--_ECAnimationFrameStats@@MEAAPEAXI@Z.c)
 *     ??_GCCompFrameStats@@MEAAPEAXI@Z @ 0x1801A3F50 (--_GCCompFrameStats@@MEAAPEAXI@Z.c)
 *     ??1CTouchFrameStats@@MEAA@XZ @ 0x1801A5280 (--1CTouchFrameStats@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CCompFrameStats::~CCompFrameStats(CCompFrameStats *this)
{
  __int64 v2; // rcx
  char *v3; // rcx
  char *v4; // rcx

  *(_QWORD *)this = &CCompFrameStats::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((*((_QWORD *)this + 19) - v2) >> 3));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
}
