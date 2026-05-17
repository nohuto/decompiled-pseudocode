/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x1800DB238
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800B0530 (LdrpEventAddUnicodeString.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DC4E8 (LdrpMakeUnicodeStringFromPathElement.c)
 */

void __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  void *ProcessHeap; // rcx
  __int64 Heap; // rbx
  int UnicodeStringFromPathElement; // eax
  __int64 v7; // rcx
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // edi
  _WORD *v14; // rbx
  unsigned int v15; // edi
  _WORD *v16; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v18; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v19; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+50h] BYREF
  int v22; // [rsp+B8h] [rbp+58h]

  v18 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 584LL);
  if ( Heap )
  {
    *(_WORD *)(Heap + 6) = 5332;
    *(_DWORD *)(Heap + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(Heap + 36) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *(_DWORD *)(Heap + 40) = a1;
    *(_DWORD *)(Heap + 44) = *(_DWORD *)(a2 + 36);
    LdrpEventAddUnicodeString(a2, (_WORD *)(Heap + 48), 0x214u, (int *)&v21);
    RtlGetCurrentServiceSessionId();
    NtTraceEvent();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( (a1 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v18);
      v7 = *(_QWORD *)(a2 + 16);
      v22 = UnicodeStringFromPathElement;
      v8 = LdrpMakeUnicodeStringFromPathElement(v7, 0LL, &v20);
      v9 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 5LL, &v19);
      v10 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 3232LL);
      v11 = v10;
      if ( v10 )
      {
        v21 = 0;
        v12 = v10 + 36;
        *(_DWORD *)(v10 + 32) = a1;
        *(_WORD *)(v10 + 6) = 5333;
        LdrpEventAddUnicodeString((__int64)&UnicodeString, (_WORD *)(v10 + 36), 0xC78u, (int *)&v21);
        v13 = 3192 - v21;
        v14 = (_WORD *)(v12 + 2 * ((unsigned __int64)v21 >> 1));
        LdrpEventAddUnicodeString((__int64)&v18, v14, 3192 - v21, (int *)&v21);
        v15 = v13 - v21;
        v16 = &v14[(unsigned __int64)v21 >> 1];
        LdrpEventAddUnicodeString((__int64)&v20, v16, v15, (int *)&v21);
        LdrpEventAddUnicodeString((__int64)&v19, &v16[(unsigned __int64)v21 >> 1], v15 - v21, (int *)&v21);
        RtlGetCurrentServiceSessionId();
        NtTraceEvent();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v22 >= 0 )
        RtlFreeUnicodeString(&v18);
      if ( v9 >= 0 )
        RtlFreeUnicodeString(&v19);
      if ( v8 >= 0 )
        RtlFreeUnicodeString(&v20);
    }
  }
}
