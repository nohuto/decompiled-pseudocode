/*
 * XREFs of RtlpValidateHeapEntry @ 0x18007C0D8
 * Callers:
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x18010295C (RtlpCheckBusyBlockTail.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpValidateHeapEntry(unsigned __int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v5; // rdi
  char v6; // al
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  _QWORD *i; // rax
  int v12; // [rsp+28h] [rbp-10h]

  v5 = a1;
  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 15);
      if ( (v6 & 0x3F) != 0 )
      {
        if ( v6 >= 0 )
        {
          if ( !*(_DWORD *)(a1 + 124)
            || (v12 = *(_DWORD *)(a2 + 8) ^ *(_DWORD *)(a1 + 136),
                HIBYTE(v12) == ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12)))) )
          {
            if ( *(_BYTE *)(a2 + 15) == 4 )
            {
              if ( (a2 & 0xFFF) != 0x30 )
                goto LABEL_32;
            }
            else
            {
              v8 = *(unsigned __int8 *)(a2 + 14);
              if ( (_BYTE)v8 )
                a1 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v8 << 16) + 0x10000;
              if ( !a1 || *(_QWORD *)(a1 + 40) != v5 || a2 < *(_QWORD *)(a1 + 64) || a2 >= *(_QWORD *)(a1 + 72) )
                goto LABEL_32;
            }
            if ( *(_DWORD *)(v5 + 124) )
            {
              v9 = *(_DWORD *)(a2 + 8);
              if ( (v9 & *(_DWORD *)(v5 + 124)) != 0 )
                v9 ^= *(_DWORD *)(v5 + 136);
              v10 = HIWORD(v9);
            }
            else
            {
              LOBYTE(v10) = *(_BYTE *)(a2 + 10);
            }
            if ( (v10 & 4) == 0 || (unsigned __int8)RtlpCheckBusyBlockTail(v5, a2) )
            {
              if ( *(_BYTE *)(a2 + 15) == 4 )
                return 1;
              for ( i = *(_QWORD **)(v5 + 288); i != (_QWORD *)(v5 + 288); i = (_QWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
            }
          }
        }
        else if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
        {
          return 1;
        }
      }
    }
  }
LABEL_32:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)v5, (const void *)(a2 + 16));
  RtlpBreakPointHeap();
  return 0;
}
