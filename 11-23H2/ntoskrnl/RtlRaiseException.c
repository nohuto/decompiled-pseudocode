/*
 * XREFs of RtlRaiseException @ 0x14030D590
 * Callers:
 *     RaiseException @ 0x1403DDED0 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x140548C50 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x140548CE0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140548E30 (HvlpSetRegister64.c)
 *     KiStallBugcheckThread @ 0x14057B5B8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405ABB50 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x1402A3DC0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x1402A5490 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14030D6C0 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D790 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D880 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14041DBA0 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x140429110 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140429B10 (_alloca_probe.c)
 */

char __fastcall RtlRaiseException(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        unsigned __int64 a24)
{
  int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  unsigned int v30; // ebx
  unsigned int *v31; // rax
  char result; // al
  unsigned int v33; // [rsp+40h] [rbp+0h] BYREF
  __int64 v34; // [rsp+48h] [rbp+8h] BYREF
  __int64 v35; // [rsp+50h] [rbp+10h] BYREF
  __int64 v36; // [rsp+58h] [rbp+18h] BYREF

  v33 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  *(_DWORD *)(a1 + 4) |= 0x80u;
  v25 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2((unsigned int)(v25 + 1048587), &v33, 0LL);
  v26 = v33 + 15LL;
  if ( v26 <= v33 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
  v28 = alloca(v27);
  v29 = alloca(v27);
  v30 = RtlInitializeExtendedContext2(&v33, (unsigned int)(v25 + 1048587), &v33, 0LL);
  RtlpCaptureContext2(&v33);
  v31 = RtlLookupFunctionEntry(a24, &v34, 0LL);
  if ( !v31 )
LABEL_6:
    RtlRaiseStatus(v30);
  RtlVirtualUnwind(0, v34, a24, (_DWORD)v31, (__int64)&v33, (__int64)&v36, (__int64)&v35, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1, (__int64)&v33);
  if ( !result )
  {
    v30 = ZwRaiseException(a1, &v33, 0LL);
    goto LABEL_6;
  }
  return result;
}
