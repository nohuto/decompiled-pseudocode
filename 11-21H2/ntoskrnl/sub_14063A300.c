/*
 * XREFs of sub_14063A300 @ 0x14063A300
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA4C0 @ 0x1402DA4C0 (sub_1402DA4C0.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall __noreturn sub_14063A300(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  __int64 v12; // r9
  int v13; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140C15820, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &qword_140C157F0;
      while ( 1 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C15800);
        v2 = (__int64 *)v2[1];
        v4 = v3;
        KeReleaseSpinLockFromDpcLevel(&qword_140C15800);
        if ( v2 == &qword_140C157F0 )
          break;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v7 = *((_QWORD *)CurrentPrcb + 4375);
              v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
              *(_DWORD *)(v7 + 20) &= v8;
              if ( v9 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v4);
        if ( *((_DWORD *)v2 - 1)
          && (unsigned __int8)sub_14042A5E0(v2[4], v2[6])
          && _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd(&dword_140C157D8, 0xFFFFFFFF) == 1 )
        {
          goto LABEL_24;
        }
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = *((_QWORD *)v11 + 4375);
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v9 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
            *(_DWORD *)(v12 + 20) &= v13;
            if ( v9 )
              sub_140418E4C((__int64)v11);
          }
        }
      }
      __writecr8(v4);
LABEL_24:
      if ( !dword_140C157D8 )
        break;
      sub_1402DA0F0();
      KeStallExecutionProcessor(0xF4240u);
      sub_1402DA4C0(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
