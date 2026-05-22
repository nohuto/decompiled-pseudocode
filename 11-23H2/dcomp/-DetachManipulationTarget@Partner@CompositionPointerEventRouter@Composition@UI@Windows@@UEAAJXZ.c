/*
 * XREFs of ?DetachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ @ 0x1801535C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::DetachManipulationTarget(
        Windows::UI::Composition::CompositionPointerEventRouter::Partner *this)
{
  char *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int Only; // eax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this - 136;
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (v1[32] & 2) != 0 )
  {
    Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly((Windows::UI::Composition::CompositionPointerEventRouter *)v1);
    v3 = Only;
    if ( Only >= 0 )
    {
      v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v1 + 19);
      if ( v5 )
      {
        *((_QWORD *)v1 + 19) = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
      }
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v1 + 3) + 456LL),
        *((_DWORD *)v1 + 32),
        12,
        0);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
        (const char *)(unsigned int)Only);
      DoStackCaptureDirect(v3, 0x300u);
    }
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
