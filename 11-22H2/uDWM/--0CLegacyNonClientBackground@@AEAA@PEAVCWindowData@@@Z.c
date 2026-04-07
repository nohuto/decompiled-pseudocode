/*
 * XREFs of ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180052990
 * Callers:
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800528EC (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::CLegacyNonClientBackground(
        CLegacyNonClientBackground *this,
        struct CWindowData *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)(v2 + 288) = v3;
  *(_QWORD *)v2 = &CLegacyNonClientBackground::`vftable';
  *(_QWORD *)(v2 + 296) = 0LL;
  *(_QWORD *)(v2 + 304) = 0LL;
  *(_QWORD *)(v2 + 312) = 0LL;
  *(_QWORD *)(v2 + 320) = 0LL;
  *(_DWORD *)(v2 + 328) = -1082130432;
  *(_DWORD *)(v2 + 332) = -1082130432;
  *(_DWORD *)(v2 + 336) = -1082130432;
  *(_DWORD *)(v2 + 340) = -1082130432;
  *(_DWORD *)(v2 + 344) = -1082130432;
  *(_DWORD *)(v2 + 348) = -1082130432;
  *(_DWORD *)(v2 + 352) = -1082130432;
  *(_DWORD *)(v2 + 356) = -1082130432;
  return (CLegacyNonClientBackground *)v2;
}
