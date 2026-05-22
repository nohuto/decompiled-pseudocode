/*
 * XREFs of ?put_ClearColor@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJUColor@56@@Z @ 0x1801809C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::Partner::put_ClearColor(
        __int64 a1,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  float *v6; // rax
  int v7; // edx
  DirectComposition::CDevice *v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::AnimationHelper::WUColorToD2DColor((float *)&v10, a2);
    v7 = *(_DWORD *)(a1 - 8);
    v8 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 112) + 456LL);
    v10 = *(_OWORD *)v6;
    DirectComposition::CDevice::ResourceSetBufferProperty(v8, v7, 6, &v10, 0x10uLL);
    *(_OWORD *)(a1 + 40) = v10;
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
