/*
 * XREFs of ?Close@ContextRuntimeClass@WRL2@Microsoft@@IEAAJ_N@Z @ 0x1800877D0
 * Callers:
 *     ?RealClose@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180087780 (-RealClose@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RealClose@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ @ 0x1800877A0 (-RealClose@Api@InteropVisual@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Close@ContextRuntimeClass@WRL2@Microsoft@@MEAAJXZ @ 0x1800877C0 (-Close@ContextRuntimeClass@WRL2@Microsoft@@MEAAJXZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextRuntimeClass::Close(Microsoft::WRL2::ContextRuntimeClass *this, char a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  unsigned int v3; // edi
  int v6; // ecx
  unsigned int v7; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 3);
  v3 = 0;
  v9 = v2;
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v2);
  v6 = *((_DWORD *)this + 8);
  if ( __CFSHR__(v6, 9) && (v6 & 1) == 0 )
    goto LABEL_19;
  if ( !a2 && ((v6 & 0x40) != 0 || (v6 & 0x80u) != 0) )
  {
    v7 = -2147024891;
    RoOriginateErrorW(2147942405LL, 0LL, L"The caller is not allowed to perform this operation on this object.");
    DoStackCaptureDirect(-2147024891, 0x3FEu);
  }
  else
  {
    if ( __CFSHR__(*((_DWORD *)this + 8), 9) && !Microsoft::WRL2::ContextSession::IsSessionThread(v2) )
    {
      RoOriginateErrorW(2147549454LL, 0LL, L"The caller must call Close / Dispose from the owning thread.");
      v3 = -2147417842;
LABEL_19:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      return v3;
    }
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
    {
      Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
      Microsoft::WRL2::ContextRuntimeClass::Dispose(this);
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
    }
    v7 = 0;
  }
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  return v7;
}
