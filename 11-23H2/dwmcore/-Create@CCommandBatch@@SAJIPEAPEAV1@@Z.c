/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18002E320
 * Callers:
 *     ?EnsureSize@CChannel@@AEAAJI@Z @ 0x18002D7EC (-EnsureSize@CChannel@@AEAAJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?RoundUpToAlignDWORD@@YAJPEAI@Z @ 0x18002E3D0 (-RoundUpToAlignDWORD@@YAJPEAI@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18002E3F4 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801B534C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(unsigned int a1, struct CCommandBatch **a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  CDataStreamWriter *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  int v8; // edi
  int NewBlock; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = a1;
  v3 = DefaultHeap::AllocClear(0x50uLL);
  v5 = (CDataStreamWriter *)v3;
  if ( !v3 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x25u, 0LL);
    return v11;
  }
  v3[4] = 0LL;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 11) = 0;
  v3[6] = 0LL;
  *((_DWORD *)v3 + 14) = 0;
  v3[1] = v3;
  *v3 = v3;
  v6 = v3 + 2;
  v15 = 512;
  v6[1] = v6;
  *v6 = v6;
  v8 = RoundUpToAlignDWORD(&v15);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v8, 0x164u, 0LL);
    goto LABEL_8;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock(v5, v15);
  v8 = NewBlock;
  if ( NewBlock < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, NewBlock, 0x165u, 0LL);
LABEL_8:
    v11 = v8;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v8, 0x27u, 0LL);
    CCommandBatch::`scalar deleting destructor'((struct _LIST_ENTRY *)v5, v14);
    return v11;
  }
  v11 = NewBlock;
  *a2 = v5;
  return v11;
}
