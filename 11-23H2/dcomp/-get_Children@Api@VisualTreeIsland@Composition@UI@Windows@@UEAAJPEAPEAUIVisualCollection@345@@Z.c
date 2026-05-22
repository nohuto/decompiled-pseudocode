/*
 * XREFs of ?get_Children@Api@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z @ 0x180089F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualCollection@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18008A02C (--$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Api::get_Children(
        Windows::UI::Composition::VisualTreeIsland::Api *this,
        struct Windows::UI::Composition::IVisualCollection **a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (char *)this - 488;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 58);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    v9 = 0LL;
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 296LL))(v2);
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualCollection,Windows::UI::Composition::VisualCollection,Windows::UI::Composition::Visual *>(
           &v9,
           &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x96u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      v7 = ((unsigned __int64)v9 + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
      *a2 = (struct Windows::UI::Composition::IVisualCollection *)((v7 + 8) & -(__int64)(v7 != 0));
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
