/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1405587A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140558AE0 @ 0x140558AE0 (sub_140558AE0.c)
 *     sub_1409AD954 @ 0x1409AD954 (sub_1409AD954.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // esi
  __int64 v5; // r9
  KIRQL v6; // al
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  int v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0LL;
  v4 = sub_140558AE0(a1, (_DWORD)a2, 1, (unsigned int)&v16, (__int64)&v17);
  if ( v4 >= 0 && v16 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
      v7 = (_BYTE *)v17;
      v8 = v6;
      ++*(_DWORD *)(v17 + 32);
      if ( !v7[16] )
      {
        v9 = qword_140C47220;
        if ( *((PVOID **)qword_140C47220 + 1) != &qword_140C47220 )
          __fastfail(3u);
        *(_QWORD *)v7 = qword_140C47220;
        *((_QWORD *)v7 + 1) = &qword_140C47220;
        v9[1] = v7;
        qword_140C47220 = v7;
        v7[16] = 1;
        if ( !byte_140C47258 )
        {
          byte_140C47258 = 1;
          ExQueueWorkItem(&stru_140C47200, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = *((_QWORD *)CurrentPrcb + 4375);
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
            *(_DWORD *)(v12 + 20) &= v13;
            if ( v14 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      LOBYTE(v5) = *(_BYTE *)(v17 + 18);
      sub_1409AD954(a2, 1LL, a1, v5);
    }
  }
  return (unsigned int)v4;
}
