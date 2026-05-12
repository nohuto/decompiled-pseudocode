/*
 * XREFs of sub_1C000F7A0 @ 0x1C000F7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0032BA4 @ 0x1C0032BA4 (sub_1C0032BA4.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

void __fastcall sub_1C000F7A0(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rbx
  union _SLIST_HEADER *v5; // rdi
  unsigned int v6; // ebp
  _DWORD *v8; // r14
  PSLIST_ENTRY i; // rdi
  bool v10; // zf
  PSLIST_ENTRY v11; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rdx
  DWORD LowPart; // ecx
  LARGE_INTEGER v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  int v19; // [rsp+60h] [rbp-38h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF

  v4.QuadPart = 0LL;
  v5 = DeferredContext + 4;
  v6 = 0;
  v19 = MEMORY[0xFFFFF78000000320];
  if ( byte_1C0093BE8 && (byte_1C0093A03 & 4) != 0 )
  {
    if ( byte_1C0093BA0 )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v8 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v5); i; ++v6 )
  {
    v10 = (BYTE1(i[-1].Next) & 1) == 0;
    v11 = i - 2;
    i = i->Next;
    if ( !v10 )
    {
      sub_1C0037008(*((_QWORD *)&v11[13].Next + 1), *((unsigned int *)&v11[46].Next + 3));
      BYTE1(v11[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v11[41].Next)(v11);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v19) > v8[1162] )
  {
    v8[1162] = MEMORY[0xFFFFF78000000320] - v19;
    v8[1163] = v6;
  }
  if ( v6 > v8[1161] )
    v8[1161] = v6;
  if ( byte_1C0093BE8 && (byte_1C0093A03 & 4) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( byte_1C0093BA0 )
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v13.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v13.QuadPart <= 0 || v13.QuadPart >= v4.QuadPart )
      v17 = v13.QuadPart - v4.QuadPart;
    else
      v17 = v13.QuadPart - v4.QuadPart - 1;
    if ( byte_1C0093BA0 )
    {
      LowPart = PerformanceFrequency.LowPart;
      LOBYTE(v18) = 0;
      if ( PerformanceFrequency.QuadPart && v17 )
      {
        v16.QuadPart = 1000 * (v17 % PerformanceFrequency.QuadPart);
        v14.QuadPart = 10000 * (v16.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                     % PerformanceFrequency.QuadPart;
        v18 = 10000 * (v16.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v17 / PerformanceFrequency.QuadPart)
             + v16.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      LOBYTE(v18) = v17;
    }
    if ( (byte_1C0093A03 & 4) != 0 )
      sub_1C0032BA4(
        LowPart,
        v14.LowPart,
        v16.LowPart,
        (unsigned int)sub_1C000F7A0,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v8[14],
        v6,
        v17,
        v18,
        0,
        0);
  }
}
