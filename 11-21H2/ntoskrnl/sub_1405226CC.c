/*
 * XREFs of sub_1405226CC @ 0x1405226CC
 * Callers:
 *     sub_14052D9E0 @ 0x14052D9E0 (sub_14052D9E0.c)
 *     sub_14052E768 @ 0x14052E768 (sub_14052E768.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140509594 @ 0x140509594 (sub_140509594.c)
 */

void __fastcall sub_1405226CC(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  KIRQL v7; // al
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 *v16; // rax
  bool v17; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 <= 1 )
  {
    v5 = a3;
    v17 = 0;
    if ( (int)sub_140509594((unsigned __int64)a2, &v17) >= 0 && !v17 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A260);
      v8 = (__int64 *)qword_140C4A240;
      v9 = v7;
      while ( v8 != &qword_140C4A240 )
      {
        if ( (void *)v8[2] == a2 && v8[4] == v5 && *((_DWORD *)v8 + 12) == a4 )
        {
          MmFreeContiguousMemory(a2);
          v15 = *v8;
          v16 = (__int64 *)v8[1];
          if ( *(__int64 **)(*v8 + 8) != v8 || (__int64 *)*v16 != v8 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          sub_1403B1B5C(v15, (__int64)v8);
          break;
        }
        v8 = (__int64 *)*v8;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C4A260);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = *((_QWORD *)CurrentPrcb + 4375);
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
            *(_DWORD *)(v12 + 20) &= v13;
            if ( v14 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
  }
}
