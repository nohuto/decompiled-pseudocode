/*
 * XREFs of ?First@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x180052F20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::First(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r15
  HANDLE ProcessHeap; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // ecx
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  volatile signed __int32 *v15; // r14
  Microsoft::WRL2::NestableRuntimeClass *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _OWORD *v19; // [rsp+50h] [rbp+8h] BYREF
  _OWORD *v20; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 104);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(a1 - 96) & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 256LL))(*(_QWORD *)(a1 + 24));
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcollection.cpp",
        (const char *)(unsigned int)v5);
      DoStackCaptureDirect(v6, 0x110u);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 24);
      v19 = 0LL;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 0x48uLL);
      v20 = v9;
      v10 = v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[2] = 0LL;
        v9[3] = 0LL;
        *((_QWORD *)v9 + 8) = 0LL;
        v11 = Microsoft::WRL::Details::ModuleBase::module_;
        *(_QWORD *)v9 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
        *((_DWORD *)v9 + 4) = 1;
        *((_QWORD *)v9 + 1) = 0LL;
        if ( v11 )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
        *(_QWORD *)v10 = &Windows::UI::Composition::VisualIterator::`vftable';
        *((_QWORD *)v10 + 5) = &Windows::UI::Composition::VisualIterator::Api::`vftable';
        *((_QWORD *)v10 + 7) = 0LL;
        *((_QWORD *)v10 + 8) = 0LL;
        v19 = v10;
        *((_QWORD *)v10 + 1) = &Windows::UI::Composition::VisualIterator::s_InterfaceType;
        v12 = *(_QWORD *)(v7 + 24);
        *((_QWORD *)v10 + 3) = v12;
        if ( (_OWORD *)v12 != v10 && _InterlockedIncrement((volatile signed __int32 *)(v12 + 16)) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
        v13 = v10[2] & 0xFFFFFF00 | 0x1F;
        *((_DWORD *)v10 + 8) = v13;
        *((_DWORD *)v10 + 8) = v13 ^ (*(_DWORD *)(v12 + 32) ^ v13) & 0x100;
        if ( *((_QWORD *)v10 + 7) != v7 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 16)) == 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
          v14 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v10 + 7);
          *((_QWORD *)v10 + 7) = v7;
          if ( v14 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
        }
        v15 = *(volatile signed __int32 **)(v7 + 144);
        if ( *((volatile signed __int32 **)v10 + 8) != v15 )
        {
          if ( v15 && _InterlockedIncrement(v15 + 4) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 80LL))(v15);
          v16 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v10 + 8);
          *((_QWORD *)v10 + 8) = v15;
          if ( v16 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
        }
        v6 = 0;
        *a2 = (char *)v19 + 40;
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v20);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
        v6 = -2147024882;
        DoStackCaptureDirect(-2147024882, 0x115u);
      }
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v6;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 2147483667LL;
  }
}
