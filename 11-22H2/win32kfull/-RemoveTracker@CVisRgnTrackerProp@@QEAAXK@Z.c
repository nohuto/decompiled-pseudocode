/*
 * XREFs of ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C00C95FC
 * Callers:
 *     RemoveVisRgnTracker @ 0x1C00C96FC (RemoveVisRgnTracker.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C00C8428 (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C00C8480 (DwmAsyncUpdateVisRgn.c)
 */

void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  void *v12; // rax

  v3 = *((_DWORD *)this + 10) & ~a2;
  *((_DWORD *)this + 10) = v3;
  if ( (v3 & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v10 = **((_QWORD **)this + 2);
    v12 = (void *)ReferenceDwmApiPort(v11);
    DwmAsyncUpdateVisRgn(v12, v10, 0, 0LL, 0);
  }
  if ( (*((_DWORD *)this + 10) & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v7 = **((_QWORD **)this + 2);
    v9 = (void *)ReferenceDwmApiPort(v8);
    DwmAsyncUpdateVisRgn(v9, v7, 1, 0LL, 0);
  }
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v4 = **((_QWORD **)this + 2);
      v6 = (void *)ReferenceDwmApiPort(v5);
      DwmAsyncUpdateVisRgn(v6, v4, 2, 0LL, 0);
    }
  }
}
