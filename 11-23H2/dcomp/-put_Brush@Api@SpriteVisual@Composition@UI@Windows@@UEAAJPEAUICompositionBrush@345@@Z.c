/*
 * XREFs of ?put_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180073E30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::SpriteVisual::Api::put_Brush(
        Windows::UI::Composition::SpriteVisual::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  int v5; // eax
  __int64 v6; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v7; // rsi
  unsigned int v8; // r15d
  int v9; // r13d
  int v10; // r12d
  DirectComposition::CDevice *v11; // rdi
  _DWORD *v12; // rax
  void (__fastcall ***v13)(_QWORD); // rcx
  signed __int32 v14; // eax
  volatile signed __int32 *v15; // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+20h] [rbp-48h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v18; // [rsp+80h] [rbp+18h] BYREF
  void *v19; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 280) & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v2,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::s_InterfaceType,
           &v18);
    v7 = v18;
    v8 = v5;
    v17 = v18;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0xA9u);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v17);
    }
    else
    {
      v8 = 0;
      if ( v18 != *((struct Microsoft::WRL2::ContextRuntimeClass **)this + 3) )
      {
        if ( v18 )
          v9 = *((_DWORD *)v18 + 32);
        else
          v9 = 0;
        v10 = *((_DWORD *)this - 46);
        if ( v10 )
        {
          v11 = *(DirectComposition::CDevice **)(*((_QWORD *)this - 36) + 456LL);
          DirectComposition::CDevice::BeginKernelCommand(v11, 0x10u, &v19, 0);
          v12 = v19;
          *(_DWORD *)v19 = 13;
          v12[1] = v10;
          v12[2] = 52;
          v12[3] = v9;
          v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v11 + 10);
          if ( v13 )
            (**v13)(v13);
        }
        if ( *((struct Microsoft::WRL2::ContextRuntimeClass **)this + 3) != v7 )
        {
          if ( v7 )
          {
            v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 1u);
            v7 = v18;
            if ( !v14 )
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v18 + 80LL))(v18);
          }
          v15 = (volatile signed __int32 *)*((_QWORD *)this + 3);
          *((_QWORD *)this + 3) = v7;
          if ( v15 )
          {
            if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v6) = 1;
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 64LL))(v15, v6);
            }
            v7 = v18;
          }
        }
      }
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v6) = 1;
          (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v18 + 64LL))(
            v18,
            v6);
        }
      }
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return v8;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v2);
    return 2147483667LL;
  }
}
