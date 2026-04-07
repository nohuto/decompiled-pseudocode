/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003DBEC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D0E8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18003DB28 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18003DE40 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003DF1C (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180054994 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800CD00C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  volatile signed __int32 *v3; // rax
  struct CDWMDXGIEnumeration **v4; // r14
  CDWMDisplaySet *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  CDWMDisplaySet *v9; // rdi
  struct CDWMDXGIEnumeration *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ebp
  unsigned int v21; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h]

  *a2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 18);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v3 )
    _InterlockedIncrement(v3);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 136);
  do
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(struct CDWMDXGIEnumeration *))(*(_QWORD *)*v4 + 8LL))(*v4);
      *v4 = 0LL;
    }
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( v5 )
    {
      CDWMDisplaySet::Release(v5);
      *((_QWORD *)this + 18) = 0LL;
    }
    v6 = CDWMDXGIEnumeration::Create(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x471u, 0LL);
      goto LABEL_35;
    }
    v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           112LL);
    v9 = (CDWMDisplaySet *)v8;
    v24 = v8;
    if ( !v8 )
    {
      *((_QWORD *)this + 18) = 0LL;
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x474u, 0LL);
      goto LABEL_35;
    }
    *(_DWORD *)v8 = 1;
    *(_QWORD *)(v8 + 40) = v8 + 72;
    *(_QWORD *)(v8 + 48) = v8 + 72;
    *(_DWORD *)(v8 + 56) = 4;
    *(_QWORD *)(v8 + 60) = 4LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    *((_QWORD *)this + 18) = v8;
    v10 = *v4;
    *(_QWORD *)(v8 + 8) = *v4;
    if ( v10 )
      (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v10)(v10);
    v11 = CDWMDisplaySet::EnumerateOutputs(v9);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F820, 1u, v11, 0x76u, 0LL);
    }
    else
    {
      v12 = CDWMDisplaySet::ArrangeCloneDisplays(v9);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F820, 1u, v12, 0x78u, 0LL);
      else
        CDWMDisplaySet::ComputeDisplayBounds(v9);
    }
    v13 = *((_QWORD *)*v4 + 2);
  }
  while ( !v13 || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) );
  if ( (v7 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x485u, 0LL);
    goto LABEL_35;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 104, 8LL);
  v14 = *((_QWORD *)this + 18);
  v15 = 0;
  if ( *(_DWORD *)(v14 + 64) )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * v15) + 88LL) + 16LL);
      v17 = *((unsigned int *)this + 32);
      v23 = v16;
      v18 = v17 + 1;
      if ( (int)v17 + 1 < (unsigned int)v17 )
        break;
      v19 = 0;
      if ( v18 <= *((_DWORD *)this + 31) )
      {
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v17) = v16;
        *((_DWORD *)this + 32) = v18;
      }
      else
      {
        v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8, 1, &v23);
        v7 = v19;
        if ( v19 < 0 )
        {
          v21 = 192;
          goto LABEL_32;
        }
      }
      v7 = v19;
      v14 = *((_QWORD *)this + 18);
      if ( ++v15 >= *(_DWORD *)(v14 + 64) )
        return v7;
    }
    v7 = -2147024362;
    v21 = 181;
    v19 = -2147024362;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v21, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x48Bu, 0LL);
LABEL_35:
    ModuleFailFastForHRESULT(v7, retaddr);
  }
  return v7;
}
