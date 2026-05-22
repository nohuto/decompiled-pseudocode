/*
 * XREFs of ?GetAvailableFence@Interop@CompositionTexture@Composition@UI@Windows@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z @ 0x1800A3780
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::Interop::GetAvailableFence(
        Windows::UI::Composition::CompositionTexture::Interop *this,
        unsigned __int64 *a2,
        const struct _GUID *a3,
        void **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, const struct _GUID *, void **))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 48LL))(
            *((_QWORD *)this + 2) + 16LL,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontexture.cpp",
        (const char *)(unsigned int)v10);
      DoStackCaptureDirect(v9, 0x10Eu);
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v9;
}
