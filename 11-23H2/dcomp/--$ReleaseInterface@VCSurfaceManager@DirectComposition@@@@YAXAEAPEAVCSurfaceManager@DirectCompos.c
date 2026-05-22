/*
 * XREFs of ??$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectComposition@@@Z @ 0x18001B998
 * Callers:
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC (-Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CSurfaceManager>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
