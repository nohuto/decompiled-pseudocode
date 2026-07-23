/*
 * XREFs of sub_140253900 @ 0x140253900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_1405FBB30 @ 0x1405FBB30 (sub_1405FBB30.c)
 */

LONG __fastcall sub_140253900(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  LONG result; // eax
  unsigned int v5; // esi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)CurrentThread + 345) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v5 = *(unsigned __int16 *)(a1 + 58);
    if ( v5 == 1 )
      break;
    sub_14037DAEC(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v3 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v8 = *(_OWORD *)(a1 + 64);
      v7 = *(_OWORD *)(a1 + 96);
      v9 = v6;
      v10 = v7;
      if ( v5 == 4 )
      {
        sub_1405FBB30(a1, 4LL, &v8);
        v3 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v3 & 2) != 0 )
      sub_1405FBB30(a1, v5, &v8);
  }
  return result;
}
