/*
 * XREFs of ?SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180060B30
 * Callers:
 *     ?SetRoot@Partner@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180014C70 (-SetRoot@Partner@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?SetRoot@Api@InteropVisualTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180060970 (-SetRoot@Api@InteropVisualTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 *     ?put_Root@SystemOnly@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062690 (-put_Root@SystemOnly@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z @ 0x180111E48 (-Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposit.c)
 *     ?DestroySharedVisualTarget@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18011223C (-DestroySharedVisualTarget@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::VisualTarget::SetRoot(
        Windows::UI::Composition::VisualTarget *this,
        struct Windows::UI::Composition::Visual *a2)
{
  int v4; // ebp
  int v5; // r14d
  DirectComposition::CDevice *v6; // rbx
  _DWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD); // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((struct Windows::UI::Composition::Visual **)this + 22) != a2 )
  {
    v4 = 0;
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    v5 = *((_DWORD *)this + 32);
    if ( v5 )
    {
      v6 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
      DirectComposition::CDevice::BeginKernelCommand(v6, 0x10u, &v10, 0);
      v7 = v10;
      *(_DWORD *)v10 = 13;
      v7[1] = v5;
      v7[2] = 52;
      v7[3] = v4;
      v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v6 + 10);
      if ( v8 )
        (**v8)(v8);
    }
    DirectComposition::CDevice::TryFlushKernelCommands(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      0);
    if ( *((struct Windows::UI::Composition::Visual **)this + 22) != a2 )
    {
      if ( a2 && _InterlockedIncrement((volatile signed __int32 *)a2 + 4) == 1 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::Visual *))(*(_QWORD *)a2 + 80LL))(a2);
      v9 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = a2;
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
  }
}
