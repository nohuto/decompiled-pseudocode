/*
 * XREFs of RtlpHeapTrkReportResult @ 0x18010CA70
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18010C2D4 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x18010C440 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkLeakCallback @ 0x18010C870 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010CB64 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  int v9; // r14d
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  char result; // al
  unsigned __int64 v14; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+28h] [rbp-230h]
  __int64 v16; // [rsp+30h] [rbp-228h]
  _DWORD v17[130]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_1801848A4;
  v8 = (unsigned int)Size;
  v9 = a3;
  v10 = (unsigned __int16)a2;
  v11 = (unsigned int)(dword_1801848A4 + Size);
  if ( (unsigned int)v11 < dword_1801848A4 )
    return 0;
  v12 = TrkContext;
  if ( !TrkContext )
    return 0;
  if ( v11 > *(_QWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser(Size, a2, a3, a4, v14, v15, v16, v17[0]) )
    {
      v6 = 88;
      *(_DWORD *)(TrkContext + 60) = 0;
      v12 = TrkContext;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v14 = __PAIR64__(v10, v8);
  LODWORD(v15) = v9;
  v16 = a4;
  if ( Sizea <= 0x200 )
    memmove(v17, Src, Sizea);
  memmove((void *)(v12 + v6), &v14, v8);
  dword_1801848A4 = v8 + v6;
  result = 1;
  ++*(_DWORD *)(TrkContext + 60);
  return result;
}
