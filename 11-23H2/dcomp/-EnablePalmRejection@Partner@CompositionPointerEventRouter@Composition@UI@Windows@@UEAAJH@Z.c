/*
 * XREFs of ?EnablePalmRejection@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x180153940
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::EnablePalmRejection(
        Windows::UI::Composition::CompositionPointerEventRouter::Partner *this,
        int a2)
{
  int *v2; // rsi
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int Only; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (int *)((char *)this - 136);
  v3 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[8] & 2) != 0 )
  {
    Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly((Windows::UI::Composition::CompositionPointerEventRouter *)v2);
    v5 = Only;
    if ( Only >= 0 )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v2 + 3) + 456LL),
        v2[32],
        5,
        v3);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
        (const char *)(unsigned int)Only);
      DoStackCaptureDirect(v5, 0x315u);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
