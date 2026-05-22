/*
 * XREFs of ?put_BackfaceVisibility@Api@Visual@Composition@UI@Windows@@UEAAJW4CompositionBackfaceVisibility@345@@Z @ 0x18006D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_BackfaceVisibility(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 136) & 2) != 0 )
  {
    v5 = 0;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v6 = 0LL;
      }
      else
      {
        if ( a2 != 2 )
        {
          v5 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D7,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
            (const char *)0x80070057LL);
          DoStackCaptureDirect(-2147024809, 0xA81u);
          goto LABEL_6;
        }
        v6 = 1LL;
      }
    }
    else
    {
      v6 = -1LL;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 144) + 456LL),
      *(_DWORD *)(a1 - 40),
      0x13u,
      v6);
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (a2 << 6)) & 0x1C0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
