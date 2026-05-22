/*
 * XREFs of ?SetDefaultInteraction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x18006D840
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::SetDefaultInteraction(
        Windows::UI::Composition::CompositionPointerEventRouter::Partner *this,
        int a2)
{
  unsigned int *v2; // rsi
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int Only; // eax
  unsigned int v6; // edi
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (unsigned int *)((char *)this - 136);
  v3 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[8] & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly((Windows::UI::Composition::CompositionPointerEventRouter *)v2);
  v6 = Only;
  if ( Only < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
LABEL_9:
    DoStackCaptureDirect(v6, 0x3C2u);
    goto LABEL_5;
  }
  if ( !(_DWORD)v3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x17E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)0x80070057LL,
      (int)"Setting an interaction to non-default explicitly is currently not supported",
      v8);
    goto LABEL_9;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)v2 + 3) + 456LL),
    v2[32],
    0x12u,
    v3);
  *((_BYTE *)v2 + 176) |= 1u;
  v6 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
