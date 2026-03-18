/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800BD8BC
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x1800BD330 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800E58A0 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x1800BD3B4 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800BDE28 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, CDataStreamWriter **a2, int a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  int NewEntry; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  struct CHandleTable::HANDLE_ENTRY *v12; // rax
  __int64 v13; // rcx
  struct CHandleTable::HANDLE_ENTRY *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_6;
    }
    v19 = 141;
LABEL_12:
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024890, v19);
    goto LABEL_6;
  }
  v21 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v21);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, NewEntry, 0x57u);
    goto LABEL_6;
  }
  v11 = v21;
  v12 = CHandleTable::GetEntry((CHandleTable *)a1, v21);
  v14 = v12;
  if ( !v12 )
  {
    v19 = 99;
    goto LABEL_12;
  }
  v20[2] = *(_DWORD *)v12;
  v20[0] = 44;
  v20[1] = v11;
  v15 = CChannel::SendCommand(a2, v20, 0xCu);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    *((_DWORD *)v14 + 3) = 0;
    *((_DWORD *)v14 + 1) = 1;
    *a4 = v11;
  }
LABEL_6:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v8;
}
