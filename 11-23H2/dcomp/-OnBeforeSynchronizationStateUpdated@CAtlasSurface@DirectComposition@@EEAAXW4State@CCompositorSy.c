/*
 * XREFs of ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z @ 0x180035840
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z @ 0x180034354 (-RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z.c)
 *     ?SetToPeak@AllocationStats@CSurfaceManager@DirectComposition@@QEAAXAEBU123@@Z @ 0x180034440 (-SetToPeak@AllocationStats@CSurfaceManager@DirectComposition@@QEAAXAEBU123@@Z.c)
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCAtlasSurface@DirectComposition@@$0DA@$0DA@@@QEAAXPEAVCAtlasSurface@DirectComposition@@@Z @ 0x180035C64 (-Remove@-$CLinkTargetedDoubleLinkedList@VCAtlasSurface@DirectComposition@@$0DA@$0DA@@@QEAAXPEAVC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CAtlasSurface::OnBeforeSynchronizationStateUpdated(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbp
  int v5; // edx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r12
  const struct DirectComposition::CSurfaceManager::AllocationStats *v9; // r15
  unsigned __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rcx
  DirectComposition::CSurfaceManager::AllocationStats *v15; // r8
  __int64 *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // rbx
  char v25; // al
  char v26; // al
  bool v27; // zf
  _QWORD *v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  unsigned __int64 *v32; // rsi
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // [rsp+60h] [rbp+8h]
  int v38; // [rsp+68h] [rbp+10h]

  v2 = (_QWORD *)(a1 - 16);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a1;
  v37 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 144LL);
  v38 = v5;
  if ( a2 == 3 )
    return;
  if ( *(_QWORD **)(v2[8] + 200LL) != v2 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 128) + 24LL) + 96LL);
    if ( a1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
      v5 = v38;
    }
    if ( (*(_BYTE *)(v2[8] + 172LL) & 1) == 0 )
    {
      v8 = v7 + 208;
      v9 = (const struct DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 248);
      goto LABEL_7;
    }
    v8 = v7 + 248;
    v9 = (const struct DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 248);
    if ( v5 == 1 )
    {
      v35 = v7 + 48;
    }
    else
    {
      if ( v5 != 4 )
        goto LABEL_61;
      v35 = v7 + 72;
    }
    CLinkTargetedDoubleLinkedList<DirectComposition::CAtlasSurface,48,48>::Remove(v35, v2);
LABEL_61:
    a1 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      v10 = *(_QWORD *)(v7 + 64);
      v28 = v2 + 6;
      if ( *(_QWORD *)v10 == v7 + 56 )
      {
        *v28 = v7 + 56;
        v2[7] = v10;
        *(_QWORD *)v10 = v28;
        *(_QWORD *)(v7 + 64) = v28;
        ++*(_DWORD *)(v7 + 48);
        goto LABEL_45;
      }
    }
    else
    {
      if ( a2 != 4 )
      {
LABEL_7:
        v10 = (unsigned int)(a2 - 1);
        if ( a2 != 1 )
        {
          if ( a2 == 2 )
          {
            v13 = v2[13];
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 128) + 24LL) + 96LL);
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
            if ( (*(_BYTE *)(v2[8] + 172LL) & 1) != 0 )
            {
              v15 = (DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 336);
              v16 = (__int64 *)(v7 + 272);
            }
            else
            {
              v9 = (const struct DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 208);
              v15 = (DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 296);
              v16 = (__int64 *)(v7 + 232);
            }
            v17 = *v16;
            if ( v13 )
            {
              *v16 = v17 + v13;
              a1 = v2[8];
              if ( !*(_QWORD *)(a1 + 184) )
              {
                a1 = (unsigned int)(*(_DWORD *)(a1 + 152) * *(_DWORD *)(a1 + 156));
                *((_QWORD *)v9 + 2) += a1;
              }
              if ( *((_QWORD *)v15 + 3) < (unsigned __int64)(v17 + v13) )
              {
                *(_QWORD *)v15 = *(_QWORD *)v9;
                *((_QWORD *)v15 + 1) = *((_QWORD *)v9 + 1);
                *((_QWORD *)v15 + 2) = *((_QWORD *)v9 + 2);
                *((_QWORD *)v15 + 3) = *((_QWORD *)v9 + 3);
              }
              v18 = *((_QWORD *)v9 + 2) - *((_QWORD *)v9 + 3);
              v11 = v38;
              if ( *((_QWORD *)v15 + 4) < v18 )
                *((_QWORD *)v15 + 4) = v18;
              goto LABEL_29;
            }
            *v16 = v17;
            v36 = v2[8];
            if ( !*(_QWORD *)(v36 + 184) )
              *((_QWORD *)v9 + 2) -= (unsigned int)(*(_DWORD *)(v36 + 152) * *(_DWORD *)(v36 + 156));
            DirectComposition::CSurfaceManager::AllocationStats::SetToPeak(v15, v9);
LABEL_28:
            v11 = v38;
LABEL_29:
            if ( v11 == 4 )
              *(_QWORD *)(v8 + 8) -= v2[13];
            goto LABEL_31;
          }
          if ( a2 != 4 )
          {
            v11 = v38;
            if ( a2 == 5 )
            {
              if ( v38 == 1 )
              {
LABEL_12:
                if ( *(_DWORD *)(v6 + 8) == 1 )
                  return;
                v12 = *(_QWORD *)(v6 + 88);
                goto LABEL_38;
              }
              DirectComposition::CSurfaceManager::RecordSurfaceUseChange(
                (DirectComposition::CSurfaceManager *)v7,
                (const struct DirectComposition::CAtlasSurface *)v2,
                0LL,
                v2[13]);
            }
            goto LABEL_29;
          }
LABEL_27:
          *(_QWORD *)(v8 + 8) += v2[13];
          goto LABEL_28;
        }
LABEL_45:
        v29 = v2[13];
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 128) + 24LL) + 96LL);
        if ( v30 )
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 24LL))(v30, v10);
        if ( (*(_BYTE *)(v2[8] + 172LL) & 1) != 0 )
        {
          v31 = (_QWORD *)(v7 + 336);
          v32 = (unsigned __int64 *)(v7 + 272);
        }
        else
        {
          v9 = (const struct DirectComposition::CSurfaceManager::AllocationStats *)(v7 + 208);
          v31 = (_QWORD *)(v7 + 296);
          v32 = (unsigned __int64 *)(v7 + 232);
        }
        v33 = *v32 - v29;
        *v32 = v33;
        a1 = v2[8];
        if ( *(_QWORD *)(a1 + 184) == v29 )
        {
          a1 = (unsigned int)(*(_DWORD *)(a1 + 152) * *(_DWORD *)(a1 + 156));
          *((_QWORD *)v9 + 2) -= a1;
        }
        if ( v31[3] < v33 )
        {
          *v31 = *(_QWORD *)v9;
          v31[1] = *((_QWORD *)v9 + 1);
          v31[2] = *((_QWORD *)v9 + 2);
          v31[3] = *((_QWORD *)v9 + 3);
        }
        v34 = *((_QWORD *)v9 + 2) - *((_QWORD *)v9 + 3);
        if ( v31[4] < v34 )
          v31[4] = v34;
        goto LABEL_28;
      }
      v19 = *(_QWORD **)(v7 + 88);
      a1 = v7 + 80;
      v20 = v2 + 6;
      if ( *v19 == v7 + 80 )
      {
        *v20 = a1;
        v2[7] = v19;
        *v19 = v20;
        *(_QWORD *)(v7 + 88) = v20;
        ++*(_DWORD *)(v7 + 72);
        goto LABEL_27;
      }
    }
    __fastfail(3u);
  }
LABEL_31:
  v21 = a2 - 1;
  if ( !v21 )
  {
    v12 = *(_QWORD *)(v6 + 88);
    v37 = v12;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) == 0 )
      goto LABEL_38;
    McTemplateU0x_EventWriteTransfer(v12, &DCOMPEVENT_ATLAS_ENTRY_MARK_AVAILABLE, v2);
LABEL_37:
    v12 = v37;
LABEL_38:
    if ( *(_QWORD **)(v2[8] + 200LL) != v2 )
    {
      v24 = *(_QWORD *)(v6 + 48);
      v25 = *(_BYTE *)(v24 + 172);
      *(_QWORD *)(v24 + 184) += v4 - v12;
      v26 = v25 | 2;
      v27 = *(_QWORD *)(v24 + 184) == 0LL;
      *(_BYTE *)(v24 + 172) = v26;
      if ( v27 && (v26 & 1) != 0 )
        *(_DWORD *)(v24 + 168) = GetTickCount();
    }
    return;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v4 = *(_QWORD *)(v6 + 88);
    goto LABEL_37;
  }
  v23 = v22 - 2;
  if ( v23 )
  {
    if ( v23 != 1 )
      return;
    goto LABEL_12;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0x_EventWriteTransfer(a1, "\x1B", v2);
}
