/*
 * XREFs of sub_140A6AACC @ 0x140A6AACC
 * Callers:
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140399288 @ 0x140399288 (sub_140399288.c)
 */

__int64 __fastcall sub_140A6AACC(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ecx
  int v11; // r12d
  unsigned int v12; // ebx
  __int64 v13; // rbx
  unsigned int v14; // esi
  NTSTATUS v15; // r10d
  __int64 v16; // rax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  Timeout.QuadPart = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v8 = dword_140C4EB78 < (unsigned int)dword_140C4EB7C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_18;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v10 = *(_DWORD *)(BugCheckParameter2 + 8) & 3;
    if ( v10 == 1 )
    {
      v11 = 2;
      v12 = v5 - v4;
    }
    else
    {
      if ( v10 )
        break;
      if ( !v8 )
      {
LABEL_18:
        sub_140399288(BugCheckParameter2);
        break;
      }
      v12 = v8;
      v11 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v12;
    v13 = MEMORY[0xFFFFF78000000320];
    v14 = MEMORY[0xFFFFF78000000004];
    v15 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v16 = (unsigned int)v13;
    v5 = v20;
    v4 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v14 * HIDWORD(v13)) << 8)
        - ((v16 * (unsigned __int64)v14) >> 24);
    if ( v15 == 258 || v4 >= v20 )
    {
      v3 = 1;
    }
    else if ( v11 == 2 )
    {
      return v4;
    }
    v6 = v19;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  sub_1402AFC00(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
