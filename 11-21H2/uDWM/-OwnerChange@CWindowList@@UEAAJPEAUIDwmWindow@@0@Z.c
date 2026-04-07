/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001F330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001DDE4 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001E120 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001F97C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180063470 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  int v6; // ebx
  CWindowList *v7; // rcx
  struct CWindowData *v8; // rsi
  unsigned int v9; // edi
  __int64 v11; // rbp
  int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // edx
  CWindowData *v17; // r8
  unsigned int v18; // edx
  CWindowData *v19; // rsi
  _QWORD *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  CWindowData *v23; // rbx
  __int64 v24; // rax
  bool v25; // al
  int v26; // eax
  CWindowData *v27; // rax
  CWindowData *v28; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rbp
  CWindowData *v30; // rbx
  __int64 v31; // rax
  char ShouldBeAutoParented; // al
  CWindowList *v33; // rcx
  __int64 v34; // r9
  CWindowData *v35; // rax
  CWindowData *v36; // rax
  unsigned int v37; // eax
  int v38; // r9d
  unsigned int v39; // eax
  int v40; // r9d
  unsigned int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // [rsp+20h] [rbp-48h]
  unsigned int v45; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CWindowData *v47; // [rsp+78h] [rbp+10h] BYREF
  CWindowData **v48; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+88h] [rbp+20h]

  v49 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (a3 || (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2)) )
  {
    v35 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           840LL);
    v47 = v35;
    if ( v35 && (v36 = CWindowData::CWindowData(v35), (v8 = v36) != 0LL) )
    {
      *((_QWORD *)v36 + 3) = a2;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v36);
      *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
      v6 = CWindowList::SyncWindowData(this, a2, v8);
      if ( v6 >= 0 )
        goto LABEL_4;
      v37 = 2084;
    }
    else
    {
      v6 = -2147024882;
      v37 = 2080;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v37);
    v9 = v6;
    v44 = 4306;
    goto LABEL_72;
  }
LABEL_4:
  v9 = v6;
  if ( v8 )
  {
    v11 = 0LL;
    if ( a3 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
      if ( !v11 )
      {
        v27 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               840LL);
        v47 = v27;
        if ( !v27 || (v28 = CWindowData::CWindowData(v27), (v11 = (__int64)v28) == 0) )
        {
          v6 = -2147024882;
          v9 = -2147024882;
          v39 = 2080;
          goto LABEL_71;
        }
        *((_QWORD *)v28 + 3) = a3;
        (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v28);
        *(_QWORD *)(v11 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
        v6 = CWindowList::SyncWindowData(this, a3, (struct CWindowData *)v11);
        v9 = v6;
        if ( v6 < 0 )
        {
          v39 = 2084;
LABEL_71:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v39);
          v44 = 4314;
LABEL_72:
          v38 = v6;
LABEL_85:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, v44);
          goto LABEL_6;
        }
      }
    }
    v47 = v8;
    v12 = 0;
    v13 = *((_QWORD *)v8 + 75);
    if ( v13 == v11 )
      goto LABEL_9;
    if ( v13 )
    {
      CWindowData::UpdateOwnerLists(v8, 0);
      *((_QWORD *)v47 + 75) = 0LL;
      v14 = 0LL;
      v15 = *(_QWORD *)(v13 + 608);
      v16 = *(_DWORD *)(v13 + 632);
      v17 = v47;
      if ( v16 )
      {
        do
        {
          if ( v47 == *(CWindowData **)(v15 + 8 * v14) )
            break;
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < v16 );
      }
      if ( (unsigned int)v14 < v16 )
      {
        for ( ; (unsigned int)v14 < v16 - 1; v16 = *(_DWORD *)(v13 + 632) )
        {
          *(_QWORD *)(v15 + 8 * v14) = *(_QWORD *)(v15 + 8LL * (unsigned int)(v14 + 1));
          v14 = (unsigned int)(v14 + 1);
        }
        *(_DWORD *)(v13 + 632) = v16 - 1;
        v17 = v47;
      }
      v18 = 0;
      v7 = (CWindowList *)*(unsigned int *)(v13 + 520);
      if ( !(_DWORD)v7 )
      {
LABEL_18:
        *((_QWORD *)v17 + 75) = v11;
        if ( !v11 )
        {
LABEL_30:
          v19 = v47;
          goto LABEL_31;
        }
        v19 = v47;
        if ( (CWindowData *)v11 == v47 )
        {
LABEL_31:
          if ( *(CWindowData **)v19 != v19 )
          {
            WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v19 + 17));
            v30 = v19;
            while ( 1 )
            {
              if ( (*((_BYTE *)v30 + 664) & 1) != 0 )
              {
                v31 = *((_QWORD *)v30 + 55);
                if ( v31 )
                {
                  if ( *(_QWORD *)(v31 + 24) )
                  {
                    ShouldBeAutoParented = CWindowData::ShouldBeAutoParented(v30, WindowListForDesktopCanFail);
                    v33 = (CWindowList *)*((unsigned __int8 *)v30 + 670);
                    LOBYTE(v33) = ((unsigned __int8)v33 & 8) != 0;
                    if ( ShouldBeAutoParented == (_BYTE)v33 )
                      goto LABEL_9;
                    v42 = CWindowList::ToggleAutoParenting(v33, v30);
                    v9 = v42;
                    if ( v42 < 0 )
                      break;
                  }
                }
              }
              v30 = *(CWindowData **)v30;
              if ( !v30 || v30 == (CWindowData *)WindowListForDesktopCanFail || v30 == v19 )
                goto LABEL_9;
            }
            v43 = 8756LL;
            goto LABEL_83;
          }
          if ( (*((_BYTE *)v19 + 670) & 8) != 0 )
          {
            v42 = CWindowList::ToggleAutoParenting(v7, v19);
            v9 = v42;
            if ( v42 < 0 )
            {
              v43 = 8740LL;
LABEL_83:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v43,
                (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                (const char *)(unsigned int)v42);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1116,
                (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                (const char *)v9);
LABEL_84:
              v44 = 4318;
              v38 = v9;
              goto LABEL_85;
            }
          }
LABEL_9:
          v9 = v12;
          if ( v12 >= 0 )
            goto LABEL_6;
          goto LABEL_84;
        }
        v20 = (_QWORD *)(v11 + 608);
        v21 = *(_DWORD *)(v11 + 632);
        v22 = v21 + 1;
        if ( v21 + 1 < v21 )
        {
          v12 = -2147024362;
          v41 = 181;
        }
        else
        {
          if ( v22 <= *(_DWORD *)(v11 + 628) )
          {
            *(_QWORD *)(*v20 + 8LL * *(unsigned int *)(v11 + 632)) = v47;
            *(_DWORD *)(v11 + 632) = v22;
LABEL_24:
            v23 = v47;
            v24 = *((_QWORD *)v47 + 75);
            v25 = v24 && *(char *)(v24 + 665) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v47);
            if ( (*((_BYTE *)v23 + 666) & 1) != v25 )
              CWindowData::UpdateOwnerLists(v23, !(*((_BYTE *)v23 + 666) & 1));
            v26 = CWindowData::NotifyRepresentationChanged((CWindowData *)v11);
            v12 = v26;
            if ( v26 >= 0 )
              goto LABEL_30;
            v45 = 4371;
            goto LABEL_76;
          }
          v48 = &v47;
          v12 = DynArrayImpl<0>::Grow((int)v11 + 608, 8, 1, 0, (__int64)&v48);
          if ( v12 >= 0 )
          {
            *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v11 + 632))++) + *v20) = *v48;
            goto LABEL_24;
          }
          v41 = 192;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v41);
        v45 = 4366;
        v40 = v12;
        goto LABEL_79;
      }
      v34 = *(_QWORD *)(v13 + 496);
      while ( *(CWindowData **)(*(_QWORD *)v34 + 64LL) != v17 )
      {
        ++v18;
        v34 += 8LL;
        if ( v18 >= (unsigned int)v7 )
          goto LABEL_18;
      }
      v26 = CWindowData::NotifyRepresentationChanged((CWindowData *)v13);
      v12 = v26;
      if ( v26 < 0 )
      {
        v45 = 4353;
LABEL_76:
        v40 = v26;
LABEL_79:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, v45);
        goto LABEL_9;
      }
    }
    else
    {
      *((_QWORD *)v8 + 75) = 0LL;
    }
    v17 = v47;
    goto LABEL_18;
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
