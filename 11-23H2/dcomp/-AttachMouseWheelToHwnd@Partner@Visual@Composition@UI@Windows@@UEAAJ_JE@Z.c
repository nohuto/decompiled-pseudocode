/*
 * XREFs of ?AttachMouseWheelToHwnd@Partner@Visual@Composition@UI@Windows@@UEAAJ_JE@Z @ 0x18010AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z @ 0x1800F6BCC (-VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::AttachMouseWheelToHwnd(
        Windows::UI::Composition::Visual::Partner *this,
        HWND a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 200) & 2) != 0 )
  {
    v8 = DirectComposition::CDevice::VisualRedirectMouseToHwnd(
           *(DirectComposition::CDevice **)(*((_QWORD *)this - 26) + 456LL),
           *((_DWORD *)this - 26),
           a2,
           32831,
           a3 != 0 ? 0x803F : 0);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0xB7Du);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
