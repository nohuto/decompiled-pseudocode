/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x1800176A4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 i; // rsi
  int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  __int64 v22; // r12
  int v23; // eax
  int updated; // eax
  CWindowData *v25; // rax
  CWindowData *v26; // rax
  __int128 v27; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-A8h]
  unsigned int v29; // [rsp+48h] [rbp-A0h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v31; // [rsp+60h] [rbp-88h]
  __int128 v32; // [rsp+70h] [rbp-78h]
  __int128 v33; // [rsp+80h] [rbp-68h]
  __int64 v34; // [rsp+90h] [rbp-58h]
  char v35; // [rsp+98h] [rbp-50h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v25 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           840LL);
    if ( !v25 || (v26 = CWindowData::CWindowData(v25), (v5 = (__int64)v26) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
      goto LABEL_30;
    }
    *((_QWORD *)v26 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v26);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x824u);
LABEL_30:
      v6 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x16DAu);
      goto LABEL_13;
    }
  }
  v6 = v4;
  if ( v5 )
  {
    v7 = *(_BYTE *)(v5 + 665) ^ (*(_BYTE *)(v5 + 665) ^ (32
                                                       * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2))) & 0x20;
    *(_BYTE *)(v5 + 665) = v7;
    v8 = *(_QWORD *)(v5 + 440);
    v9 = v5;
    if ( v8 )
    {
      v10 = *(_DWORD *)(v8 + 88);
      if ( (v7 & 0x20) != 0 )
      {
        if ( (v10 & 0x2000000) == 0 )
        {
          *(_DWORD *)(v8 + 88) = v10 | 0x2000000;
          for ( i = *(_QWORD *)(v8 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            if ( (*(_BYTE *)(i + 88) & 1) != 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
          }
        }
      }
      else
      {
        *(_DWORD *)(v8 + 88) = v10 & 0xFDFFFFFF;
      }
    }
    v12 = 0;
    if ( *(_DWORD *)(v9 + 520) )
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v27, 8LL, *(unsigned int *)(v9 + 520), *(_QWORD *)(v9 + 496)) >= 0 )
      {
        v20 = 0;
        v21 = v29;
        if ( v29 )
        {
          v22 = v27;
          while ( 1 )
          {
            v23 = CSecondaryWindowRepresentation::OnRepresentationUpdated(
                    *(CSecondaryWindowRepresentation **)(v22 + 8LL * v20),
                    v17,
                    v18,
                    v19);
            v12 = v23;
            v6 = v23;
            if ( v23 < 0 )
              break;
            if ( ++v20 >= v21 )
              goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x2364u);
          DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
          goto LABEL_33;
        }
      }
LABEL_19:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
    }
    v6 = v12;
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(v9 + 136);
      Buffer[1] = 0LL;
      v31 = 0LL;
      v34 = -1LL;
      v35 = 0;
      v32 = 0LL;
      v33 = 0LL;
      Buffer[0] = v13;
      v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v14 )
        v15 = v14[8];
      else
        v15 = 0LL;
      if ( *(_QWORD *)(v9 + 40) == v15 )
      {
        updated = CWindowList::UpdateDesktopWindowReplacement(this, *(_QWORD *)(v9 + 136));
        v6 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x16EBu);
      }
      goto LABEL_13;
    }
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x16E6u);
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
