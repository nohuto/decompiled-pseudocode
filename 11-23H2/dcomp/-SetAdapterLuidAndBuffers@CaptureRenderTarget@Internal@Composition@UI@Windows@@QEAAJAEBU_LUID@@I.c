/*
 * XREFs of ?SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x180180320
 * Callers:
 *     ?SetAdapterLuidAndBuffers@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x1801803C0 (-SetAdapterLuidAndBuffers@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJAEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z @ 0x1800F424C (-ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::SetAdapterLuidAndBuffers(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this,
        const struct _LUID *a2,
        unsigned int a3,
        void **a4)
{
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2,
    a2,
    8uLL);
  v8 = DirectComposition::CDevice::ResourceSetHandleArrayProperty(
         *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
         *((_DWORD *)this + 32),
         v7,
         a4,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturerendertarget.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
