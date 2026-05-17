/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x1800DB750
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800AD32E (LdrpEventAddUnicodeString.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DCA08 (LdrpMakeUnicodeStringFromPathElement.c)
 */

void __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v6; // rbx
  int UnicodeStringFromPathElement; // eax
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned int v14; // edi
  _WORD *v15; // rbx
  unsigned int v16; // edi
  _WORD *v17; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v19; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v20; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+50h] BYREF
  int v23; // [rsp+B8h] [rbp+58h]

  v19 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 584LL);
  v6 = Heap;
  if ( Heap )
  {
    *(_WORD *)(Heap + 6) = 5332;
    *(_DWORD *)(Heap + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(Heap + 36) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *(_DWORD *)(Heap + 40) = a1;
    *(_DWORD *)(Heap + 44) = *(_DWORD *)(a2 + 36);
    LdrpEventAddUnicodeString(a2, (_WORD *)(Heap + 48), 0x214u, (int *)&v22);
    RtlGetCurrentServiceSessionId();
    NtTraceEvent();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( (a1 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v19);
      v8 = *(_QWORD *)(a2 + 16);
      v23 = UnicodeStringFromPathElement;
      v9 = LdrpMakeUnicodeStringFromPathElement(v8, 0LL, &v21);
      v10 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 5LL, &v20);
      v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 3232LL);
      v12 = v11;
      if ( v11 )
      {
        v22 = 0;
        v13 = v11 + 36;
        *(_DWORD *)(v11 + 32) = a1;
        *(_WORD *)(v11 + 6) = 5333;
        LdrpEventAddUnicodeString((__int64)&UnicodeString, (_WORD *)(v11 + 36), 0xC78u, (int *)&v22);
        v14 = 3192 - v22;
        v15 = (_WORD *)(v13 + 2 * ((unsigned __int64)v22 >> 1));
        LdrpEventAddUnicodeString((__int64)&v19, v15, 3192 - v22, (int *)&v22);
        v16 = v14 - v22;
        v17 = &v15[(unsigned __int64)v22 >> 1];
        LdrpEventAddUnicodeString((__int64)&v21, v17, v16, (int *)&v22);
        LdrpEventAddUnicodeString((__int64)&v20, &v17[(unsigned __int64)v22 >> 1], v16 - v22, (int *)&v22);
        RtlGetCurrentServiceSessionId();
        NtTraceEvent();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v23 >= 0 )
        RtlFreeUnicodeString(&v19);
      if ( v10 >= 0 )
        RtlFreeUnicodeString(&v20);
      if ( v9 >= 0 )
        RtlFreeUnicodeString(&v21);
    }
  }
}
