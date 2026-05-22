/*
 * XREFs of ?put_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180046160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@123@@Z @ 0x1800462A4 (-ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_FillBrush(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct Windows::UI::Composition::CompositionBrush **v5; // r9
  struct Windows::UI::Composition::ICompositionBrush *v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  _DWORD *v10; // rbx
  int v11; // r14d
  int v12; // r15d
  DirectComposition::CDevice *v13; // rsi
  _DWORD *v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  signed __int32 v16; // eax
  Microsoft::WRL2::NestableRuntimeClass *v17; // rcx
  void *v19; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 160) & 2) != 0 )
  {
    v6 = (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this - 21);
    v20 = 0LL;
    v7 = Windows::UI::Composition::ValidateShapeBrush(a2, v6, (struct Microsoft::WRL2::ContextSession *)&v20, v5);
    v9 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x243u);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v20);
    }
    else
    {
      v10 = v20;
      v11 = 0;
      if ( v20 )
        v11 = v20[32];
      v12 = *((_DWORD *)this - 16);
      if ( v12 )
      {
        v13 = *(DirectComposition::CDevice **)(*((_QWORD *)this - 21) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v13, 0x10u, &v19, 0);
        v14 = v19;
        *(_DWORD *)v19 = 13;
        v14[1] = v12;
        v14[2] = 1;
        v14[3] = v11;
        v15 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v13 + 10);
        if ( v15 )
          (**v15)(v15);
      }
      if ( *((_DWORD **)this + 2) != v10 )
      {
        if ( v10 )
        {
          v16 = _InterlockedExchangeAdd(v10 + 4, 1u);
          v10 = v20;
          if ( !v16 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 80LL))(v20);
        }
        v17 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = v10;
        if ( v17 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v17);
      }
      v9 = 0;
      if ( v10 && _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v8) = 1;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v20 + 64LL))(v20, v8);
      }
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v9;
}
