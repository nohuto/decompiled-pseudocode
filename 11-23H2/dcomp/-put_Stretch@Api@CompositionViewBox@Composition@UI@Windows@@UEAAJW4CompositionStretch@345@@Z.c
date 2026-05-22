/*
 * XREFs of ?put_Stretch@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJW4CompositionStretch@345@@Z @ 0x180179E40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionViewBox::Api::put_Stretch(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
  {
    if ( (unsigned int)v4 <= 3 )
    {
      if ( (_DWORD)v4 != *(_DWORD *)(a1 + 32) )
      {
        v6 = *(_QWORD *)(a1 - 112);
        v7 = *(_DWORD *)(a1 - 8);
        *(_DWORD *)(a1 + 32) = v4;
        DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v6 + 456), v7, 2, v4);
      }
      v5 = 0;
    }
    else
    {
      Windows::UI::Composition::OriginateInvalidArgument(19, (__int64)L"Stretch");
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionviewbox.cpp",
        (const char *)0x80070057LL);
      DoStackCaptureDirect(-2147024809, 0x133u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
