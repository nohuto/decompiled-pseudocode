/*
 * XREFs of sub_140237720 @ 0x140237720
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402378F8 @ 0x1402378F8 (sub_1402378F8.c)
 *     sub_140237E3C @ 0x140237E3C (sub_140237E3C.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_140391B70 @ 0x140391B70 (sub_140391B70.c)
 *     sub_140391B9C @ 0x140391B9C (sub_140391B9C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG __fastcall sub_140237720(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int64 v3; // rbp
  __int64 v4; // r14
  LONG result; // eax
  unsigned __int64 *v6; // rdi
  KIRQL v7; // al
  __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  v4 = sub_1402378F8(v1);
  *(_DWORD *)(a1 + 32) = v4 == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v4 )
  {
    Object[0] = v1 + 815;
    Object[1] = v1 + 812;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = v1 + 818;
        while ( 1 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(v1 + 820);
          v8 = *(__int64 **)(v3 + 64);
          v9 = v7;
          if ( v8 == (__int64 *)v6 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = (__int64 *)*v6;
            *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v10 == v8 )
            {
              *v6 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
            }
          }
          KeReleaseSpinLockFromDpcLevel(v1 + 820);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v15 = *((_QWORD *)CurrentPrcb + 4375);
                v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
                *(_DWORD *)(v15 + 20) &= v16;
                if ( v17 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          if ( !v10 )
            break;
          v11 = sub_14037DA00(&dword_140D324C0, 1);
          v12 = sub_140391B9C(v1, v10, v4);
          sub_140391B70(v1, v10, v12);
          sub_14037AE58(&dword_140D324C0, 3LL, v1 + 811, v11);
        }
      }
    }
    while ( result != 1 );
  }
  if ( v4 )
    return sub_140237E3C(v1, v4);
  return result;
}
