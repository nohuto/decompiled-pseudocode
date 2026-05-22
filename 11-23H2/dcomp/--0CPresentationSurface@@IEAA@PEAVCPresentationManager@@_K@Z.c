/*
 * XREFs of ??0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z @ 0x1801AFB6C
 * Callers:
 *     ?Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z @ 0x1801AFE0C (-Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z @ 0x1801AFAE8 (--0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z.c)
 */

CPresentationSurface *__fastcall CPresentationSurface::CPresentationSurface(
        CPresentationSurface *this,
        struct CPresentationManager *a2,
        __int64 a3)
{
  CPresentationSurface *result; // rax

  *((_DWORD *)this + 2) = 0;
  CPresentationResource::CPresentationResource((CPresentationSurface *)((char *)this + 16), a2);
  *((_QWORD *)this + 5) = a3;
  *(_QWORD *)this = &CPresentationSurface::`vftable'{for `CMILCOMBaseT<IPresentationSurface>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 2) = &CPresentationSurface::`vftable'{for `CPresentationResource'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = &CPresentationSurface::`vftable'{for `IPresentationSurfaceInternal'};
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_WORD *)this + 38) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  memset_0((char *)this + 96, 0, 0x4CuLL);
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
