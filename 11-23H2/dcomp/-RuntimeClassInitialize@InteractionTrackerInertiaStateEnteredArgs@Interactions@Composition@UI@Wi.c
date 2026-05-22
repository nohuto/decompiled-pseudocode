/*
 * XREFs of ?RuntimeClassInitialize@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@M0MPEBU6785@PEAM_NH3@Z @ 0x1801914CC
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEBU6785@AEAMPEBU6785@PEAMAEA_NAEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAM12$$QEAPEBU89Foundation@7@$$QEAPEAMAEA_NAEAH5@Z @ 0x180134F9C (--$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::RuntimeClassInitialize(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        const struct Windows::Foundation::Numerics::Vector3 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::Vector3 *a4,
        float a5,
        const struct Windows::Foundation::Numerics::Vector3 *a6,
        float *a7,
        bool a8,
        int a9,
        bool a10)
{
  int v10; // eax

  *((_QWORD *)this + 12) = *(_QWORD *)a2;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 2);
  *((float *)this + 27) = a3;
  *((_QWORD *)this + 14) = *(_QWORD *)a4;
  *((_DWORD *)this + 30) = *((_DWORD *)a4 + 2);
  *((_BYTE *)this + 156) = a8;
  *((_BYTE *)this + 157) = a10;
  *((_DWORD *)this + 38) = a9;
  *((float *)this + 31) = a5;
  if ( a6 )
  {
    v10 = *((_DWORD *)a6 + 2);
    *((_QWORD *)this + 16) = *(_QWORD *)a6;
    *((_DWORD *)this + 34) = v10;
    *((_BYTE *)this + 140) = 1;
  }
  if ( a7 )
  {
    *((float *)this + 36) = *a7;
    *((_BYTE *)this + 148) = 1;
  }
  return 0LL;
}
