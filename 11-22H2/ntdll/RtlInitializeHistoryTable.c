/*
 * XREFs of RtlInitializeHistoryTable @ 0x18007BB84
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlpFunctionAddressTableEntry @ 0x18007BC5C (RtlpFunctionAddressTableEntry.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  LdrProtectMrdata(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    v2 = byte_180199435;
    if ( v1 == RtlRaiseException )
      v2 = i;
    byte_180199435 = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 8] = v3;
    v8 = v4 + EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 6] = v4;
    v9 = qword_180199438;
    if ( v7 < qword_180199438 )
      v9 = v7;
    qword_180199438 = v9;
    v10 = qword_180199440;
    if ( v8 > qword_180199440 )
      v10 = v8;
    qword_180199440 = v10;
  }
  RtlpUnwindHistoryTable[0] = i;
  LdrProtectMrdata(1);
}
