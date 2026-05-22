/*
 * XREFs of ?Reset@CPathData@@AEAAXXZ @ 0x180040B8C
 * Callers:
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1GeometrySink@@@Z @ 0x180040F3C (-Open@CPathData@@QEAAJPEAPEAUID2D1GeometrySink@@@Z.c)
 *     ?Initialize@CPathData@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801B3198 (-Initialize@CPathData@@QEAAXV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x180040BD8 (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::Reset(CPathData *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v2, _InterlockedExchange64((volatile __int64 *)this + 8, 0LL));
  *((_QWORD *)this + 3) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 72) = 0;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v2);
}
