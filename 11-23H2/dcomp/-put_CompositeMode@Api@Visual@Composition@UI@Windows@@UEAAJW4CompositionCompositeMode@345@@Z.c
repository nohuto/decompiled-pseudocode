/*
 * XREFs of ?put_CompositeMode@Api@Visual@Composition@UI@Windows@@UEAAJW4CompositionCompositeMode@345@@Z @ 0x18000E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_CompositeMode(__int64 a1, int a2)
{
  Microsoft::WRL2::ContextSession *v2; // rbx
  __int64 v5; // r9
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::WRL2::ContextSession **)(a1 - 144);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  v5 = 2LL;
  if ( (*(_BYTE *)(a1 - 136) & 2) != 0 )
  {
    v6 = 0;
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1:
          v5 = 0LL;
          break;
        case 2:
          v5 = 1LL;
          break;
        case 3:
          break;
        default:
          v6 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x298,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
            (const char *)0x80070057LL);
          DoStackCaptureDirect(-2147024809, 0xA84u);
          goto LABEL_7;
      }
    }
    else
    {
      v5 = -1LL;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 144) + 456LL),
      *(_DWORD *)(a1 - 40),
      9u,
      v5);
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (8 * a2)) & 0x38;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
