/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180092C18
 * Callers:
 *     ??1CChannelContext@@EEAA@XZ @ 0x18009164C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1CResourceTable@@UEAA@XZ @ 0x180091700 (--1CResourceTable@@UEAA@XZ.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800921FC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180092854 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
