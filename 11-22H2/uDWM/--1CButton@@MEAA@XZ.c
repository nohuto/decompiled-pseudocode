/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x18001D7A0
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001D690 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18001490C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001D6EC (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800220C0 (--1CVisual@@MEAA@XZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800AD25C (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CButton::~CButton(struct CAtlasedImage **this)
{
  struct CAtlasedImage *v2; // rdx
  CAtlasedRectsVisual *v3; // rcx
  struct CAtlasedImage *v4; // rcx
  struct CAtlasedImage *v5; // rcx
  _QWORD *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rcx
  struct CAtlasedImage *v16; // rax
  bool v17; // zf
  char v18; // al

  *this = (struct CAtlasedImage *)&CButton::`vftable';
  if ( this[49] )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this);
    v16 = this[49];
    if ( v16 )
    {
      v17 = (*((_DWORD *)v16 + 2))-- == 1;
      v18 = CDesktopManager::s_fTimelineDirty;
      if ( v17 )
        v18 = 1;
      CDesktopManager::s_fTimelineDirty = v18;
      this[49] = 0LL;
    }
  }
  v2 = this[37];
  if ( v2 )
  {
    v3 = (CAtlasedRectsVisual *)*((_QWORD *)v2 + 10);
    if ( v3 )
      CAtlasedRectsVisual::RemoveAtlasImage(v3, v2);
  }
  v4 = this[37];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v4)(v4, 1LL);
    this[37] = 0LL;
  }
  v5 = this[38];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v5)(v5, 1LL);
    this[38] = 0LL;
  }
  v6 = this + 39;
  v7 = *((_DWORD *)this + 84);
  if ( v7 )
  {
    v8 = 0LL;
    v9 = v7;
    do
    {
      v10 = *(_QWORD *)(v8 + *v6);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
        *(_QWORD *)(v8 + *v6) = 0LL;
      }
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 39, 8LL);
  v11 = this + 43;
  v12 = *((_DWORD *)this + 92);
  if ( v12 )
  {
    v13 = 0LL;
    v14 = v12;
    do
    {
      v15 = *(_QWORD *)(v13 + *v11);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
        *(_QWORD *)(v13 + *v11) = 0LL;
      }
      v13 += 8LL;
      --v14;
    }
    while ( v14 );
  }
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 43, 8LL);
  if ( this[43] != this[44] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *v11 = 0LL;
  }
  if ( this[39] != this[40] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *v6 = 0LL;
  }
  *this = (struct CAtlasedImage *)&CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages((CAtlasedRectsVisual *)this);
  (*(void (__fastcall **)(WPF::HeapBase *, struct CAtlasedImage *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this[35]);
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
