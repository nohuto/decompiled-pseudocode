/*
 * XREFs of ?GetResolvedCompositionObjectProperty@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18014D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationPropertyInfo::Api::GetResolvedCompositionObjectProperty(
        Windows::UI::Composition::AnimationPropertyInfo::Api *this,
        HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  HRESULT v6; // eax

  *a2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v6 = WindowsDuplicateString(*((HSTRING *)this + 2), a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0xCBu);
    else
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
