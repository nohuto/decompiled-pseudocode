/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C001F808 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0055B6C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rbx
  __int64 v4; // rsi
  GdiHandleEntryTable *v5; // rcx
  unsigned int v6; // edi
  char v7; // si
  unsigned int v8; // eax
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rax
  char v11; // r8
  unsigned int v13; // eax
  unsigned int v14; // edi
  GdiHandleEntryTable *v15; // rbp
  GdiHandleEntryTable *v16; // rcx
  __int64 v17; // rdx
  void *v18; // rax
  GdiHandleManager *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = this;
  v2 = gpHandleManager;
  if ( *((_DWORD *)gpHandleManager + 1) < *((_DWORD *)gpHandleManager + 2) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v2 + 2);
      if ( *(_BYTE *)v4 )
        return 0;
      v5 = *(GdiHandleEntryTable **)(v4 + 8);
      LODWORD(v19) = 0;
      if ( GdiHandleEntryTable::AcquireEntryIndex(v5, (unsigned int *)&v19) )
      {
        v6 = (unsigned int)v19;
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 8) + 16LL) != *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) )
          return 0;
        LOWORD(v13) = *(_WORD *)(v4 + 2);
        v14 = 1;
        if ( (unsigned __int16)v13 <= 1u )
        {
LABEL_19:
          if ( (_WORD)v13 == 256 )
          {
            *(_BYTE *)v4 = 1;
            return 0;
          }
          *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
          v16 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
          if ( !v16 )
            return 0;
          GdiHandleEntryTable::AcquireEntryIndex(v16, (unsigned int *)&v19);
          v14 = *(unsigned __int16 *)(v4 + 2);
          *(_WORD *)(v4 + 2) = v14 + 1;
        }
        else
        {
          while ( 1 )
          {
            v15 = *(GdiHandleEntryTable **)(v4 + 8LL * v14 + 8);
            if ( GdiHandleEntryTable::AcquireEntryIndex(v15, (unsigned int *)&v19) )
              break;
            if ( *((_DWORD *)v15 + 4) != *((_DWORD *)v15 + 2) )
              return 0;
            v13 = *(unsigned __int16 *)(v4 + 2);
            if ( ++v14 >= v13 )
              goto LABEL_19;
          }
        }
        v6 = (_DWORD)v19 + *(_DWORD *)(v4 + 2056) + ((v14 + 0xFFFF) << 16);
      }
      ++*((_DWORD *)v2 + 1);
      v7 = 0;
      v8 = *((_DWORD *)v2 + 1);
      if ( v8 > *(_DWORD *)v2 )
      {
        *(_DWORD *)v2 = v8;
        v7 = 1;
        gcMaxHmgr = v8;
      }
      v9 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)v6);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v9, 1);
      if ( v6 < 0x10000 )
      {
        if ( v7 || *(_DWORD *)v2 > 0x10000u )
          *((_BYTE *)Entry + 13) = 0;
        else
          v6 += (unsigned __int8)++*((_BYTE *)Entry + 13) << 16;
LABEL_11:
        *a2 = v6;
        return v11;
      }
      if ( *((unsigned __int8 *)Entry + 13) != HIWORD(v6) )
        goto LABEL_11;
      v17 = *((_QWORD *)v2 + 3);
      if ( v17 )
        goto LABEL_27;
      v18 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              0x104uLL,
              0x40000uLL,
              0x636D6847u);
      *((_QWORD *)v2 + 3) = v18;
      if ( v18 )
        break;
LABEL_28:
      if ( *((_DWORD *)v2 + 1) >= *((_DWORD *)v2 + 2) )
        return 0;
    }
    memset(v18, 0, 0x40000uLL);
    v17 = *((_QWORD *)v2 + 3);
LABEL_27:
    *(_DWORD *)(v17 + 4LL * (unsigned __int16)v6) = v6;
    goto LABEL_28;
  }
  return 0;
}
