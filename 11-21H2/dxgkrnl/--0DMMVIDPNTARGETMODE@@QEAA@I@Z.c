/*
 * XREFs of ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C00111A8
 * Callers:
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1C01A92EC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000CAA0 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(DMMVIDPNTARGETMODE *this, int a2)
{
  DMMVIDPNTARGETMODE *result; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a2);
  *(_QWORD *)((char *)this + 76) = -1LL;
  *(_QWORD *)((char *)this + 84) = -1LL;
  *(_QWORD *)((char *)this + 92) = -1LL;
  *((_QWORD *)this + 14) = 0xFFFFFFFFLL;
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGETMODE::`vftable'{for `ContainedBy<DMMVIDPNTARGETMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETMODE::`vftable'{for `NonReferenceCounted'};
  result = this;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 30) = 8;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173007;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 4;
  *((_DWORD *)this + 40) = 1;
  return result;
}
