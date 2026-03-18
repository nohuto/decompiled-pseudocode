/*
 * XREFs of ??0?$com_ptr_t@VCCpuClipAntialiasDrawListEntry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x1800E50F4
 * Callers:
 *     ??0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@MW4Enum@BlendMode@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@_N4@Z @ 0x1800E5084 (--0SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@PEAVCCpuClipAntialiasDrawListEntry@@M.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  return a1;
}
