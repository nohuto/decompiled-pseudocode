/*
 * XREFs of ?put_AccessMode@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJW4AnimationPropertyAccessMode@345@@Z @ 0x18014DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationPropertyInfo::Api::put_AccessMode(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  const char *v6; // rax
  __int64 v7; // rdx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 104);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 96) & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 56) == 1 )
    {
      if ( (unsigned int)(a2 - 2) <= 1 )
      {
        v6 = "Property access mode is Read Only but attempted to give write permission";
        v7 = 50LL;
LABEL_9:
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)v7,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationpropertyinfo.cpp",
          (const char *)0x80070057LL,
          (int)v6,
          v9);
        v5 = -2147024809;
        DoStackCaptureDirect(-2147024809, 0x9Cu);
        goto LABEL_11;
      }
    }
    else if ( *(_DWORD *)(a1 + 56) == 2 && ((a2 - 1) & 0xFFFFFFFD) == 0 )
    {
      v6 = "Property access mode is Write Only but attempted to give read permission";
      v7 = 57LL;
      goto LABEL_9;
    }
    *(_DWORD *)(a1 + 52) = a2;
    v5 = 0;
    goto LABEL_11;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_11:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
