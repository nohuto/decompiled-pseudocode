/*
 * XREFs of ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x18020444C
 * Callers:
 *     ??1?$unique_ptr@VCComputeScribbleSynchronizer@@U?$default_delete@VCComputeScribbleSynchronizer@@@std@@@std@@QEAA@XZ @ 0x180204398 (--1-$unique_ptr@VCComputeScribbleSynchronizer@@U-$default_delete@VCComputeScribbleSynchronizer@@.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x1802043C8 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180204AE4 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB50 (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F7520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(
        CComputeScribbleSynchronizer *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 5);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 1);
}
