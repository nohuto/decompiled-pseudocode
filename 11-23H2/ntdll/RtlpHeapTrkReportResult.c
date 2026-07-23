/*
 * XREFs of RtlpHeapTrkReportResult @ 0x18010CA40
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18010C2A4 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x18010C410 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkLeakCallback @ 0x18010C840 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x18010CB34 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  int v10; // r15d
  unsigned __int64 v11; // rax
  char *v12; // rdi
  char result; // al
  _DWORD v14[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+30h] [rbp-228h]
  _BYTE v16[520]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_1801848A4;
  v8 = (unsigned int)Size;
  v10 = a2;
  v11 = (unsigned int)(dword_1801848A4 + Size);
  if ( (unsigned int)v11 < dword_1801848A4 )
    return 0;
  v12 = (char *)TrkContext;
  if ( !TrkContext )
    return 0;
  if ( v11 > *(_QWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
    {
      v6 = 88;
      *((_DWORD *)TrkContext + 15) = 0;
      v12 = (char *)TrkContext;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v14[0] = v8;
  v14[1] = v10;
  v14[2] = a3;
  v15 = a4;
  if ( Sizea <= 0x200 )
    memmove(v16, Src, Sizea);
  memmove(&v12[v6], v14, v8);
  dword_1801848A4 = v8 + v6;
  result = 1;
  ++*((_DWORD *)TrkContext + 15);
  return result;
}
