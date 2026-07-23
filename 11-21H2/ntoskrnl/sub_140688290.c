/*
 * XREFs of sub_140688290 @ 0x140688290
 * Callers:
 *     sub_14020A620 @ 0x14020A620 (sub_14020A620.c)
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall sub_140688290(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int32 i; // ecx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax

  for ( i = *(_DWORD *)(a1 + 2952); ; i = v6 )
  {
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(a1 + 2952),
           i + 1 < *(_DWORD *)(a1 + 2956) ? i + 1 : 0,
           i);
    if ( i == v6 )
      break;
  }
  v7 = 9LL * i;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 8 * v7 + 2972) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 2976) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 2968) = a2;
  *(_QWORD *)(a1 + 8 * v7 + 2960) = CurrentThread;
  return RtlCaptureStackBackTrace(1u, 6u, (PVOID *)(a1 + 2984 + 8 * v7), 0LL);
}
