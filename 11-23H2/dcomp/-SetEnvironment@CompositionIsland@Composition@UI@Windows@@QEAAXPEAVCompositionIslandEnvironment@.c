/*
 * XREFs of ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C024 (-RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?put_Environment@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUICompositionIslandEnvironment@345@@Z @ 0x18006C1B0 (-put_Environment@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUICompositionIslandEnviro.c)
 * Callees:
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     ??4?$RefPtr@VCompositionIslandEnvironment@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006B490 (--4-$RefPtr@VCompositionIslandEnvironment@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@P.c)
 *     ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610 (-UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::SetEnvironment(RTL_SRWLOCK *this, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *Ptr; // rax
  RTL_SRWLOCK *v6; // rbp
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK **v8; // r8
  _DWORD *v9; // rcx
  RTL_SRWLOCK **v10; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  _DWORD *v12; // rax
  _QWORD *p_Ptr; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  char *v16; // rcx
  int v17; // xmm0_4
  int v18; // eax
  int v19; // xmm0_4

  v2 = this + 32;
  Ptr = (RTL_SRWLOCK *)this[32].Ptr;
  if ( Ptr == a2 )
    return;
  if ( Ptr )
  {
    v6 = Ptr + 6;
    AcquireSRWLockExclusive(Ptr + 6);
    LODWORD(v6[1].Ptr) = GetCurrentThreadId();
    v7 = this + 59;
    v8 = (RTL_SRWLOCK **)this[59].Ptr;
    v9 = v2->Ptr;
    if ( v8[1] != &this[59] )
      goto LABEL_13;
    v10 = (RTL_SRWLOCK **)this[60].Ptr;
    if ( *v10 != v7 )
      goto LABEL_13;
    *v10 = (RTL_SRWLOCK *)v8;
    v8[1] = (RTL_SRWLOCK *)v10;
    *(_OWORD *)&v7->Ptr = 0LL;
    --v9[24];
    LODWORD(v6[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v6);
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)v2->Ptr;
    if ( v2->Ptr )
    {
      v2->Ptr = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
  }
  if ( !a2 )
    return;
  AcquireSRWLockExclusive(a2 + 6);
  LODWORD(a2[7].Ptr) = GetCurrentThreadId();
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionIslandEnvironment>::operator=(v2, a2);
  v12 = v2->Ptr;
  p_Ptr = &this[59].Ptr;
  v14 = (__int64)v2->Ptr + 104;
  v15 = (_QWORD *)*((_QWORD *)v2->Ptr + 14);
  if ( *v15 != v14 )
LABEL_13:
    __fastfail(3u);
  *p_Ptr = v14;
  this[60].Ptr = v15;
  *v15 = p_Ptr;
  *(_QWORD *)(v14 + 8) = p_Ptr;
  ++v12[24];
  v16 = (char *)v2->Ptr;
  v17 = *((_DWORD *)v2->Ptr + 20);
  LODWORD(this[41].Ptr) = v17;
  LODWORD(this[37].Ptr) = v17;
  this[42].Ptr = *(PVOID *)(v16 + 64);
  v18 = *((_DWORD *)v16 + 18);
  LODWORD(this[43].Ptr) = v18;
  this[38].Ptr = this[42].Ptr;
  LODWORD(this[39].Ptr) = v18;
  v19 = *((_DWORD *)v16 + 19);
  HIDWORD(this[43].Ptr) = v19;
  HIDWORD(this[39].Ptr) = v19;
  if ( Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize(this + 33) )
  {
    LOBYTE(this[54].Ptr) |= 1u;
    Windows::UI::Composition::CompositionIsland::UpdateDeferredNotifications_Callback(
      (Windows::UI::Composition::CompositionIsland *)this,
      1);
  }
  LODWORD(a2[7].Ptr) = 0;
  ReleaseSRWLockExclusive(a2 + 6);
}
