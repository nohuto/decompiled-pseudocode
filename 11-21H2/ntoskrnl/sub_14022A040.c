/*
 * XREFs of sub_14022A040 @ 0x14022A040
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 * Callees:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_140210D6C @ 0x140210D6C (sub_140210D6C.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14022A040(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned __int64 v7; // rcx
  bool v8; // si
  char v9; // al
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  char v13; // al
  struct _KDPC *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ecx
  volatile signed __int32 *v17; // rax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  int v24; // eax

  v3 = *(_BYTE *)(a3 + 112);
  if ( (v3 & 0x10) != 0 || (v3 & 2) != 0 )
    goto LABEL_5;
  v7 = *(_QWORD *)(a3 + 40) - *(_QWORD *)a3;
  *(_QWORD *)(a3 + 40) = *(_QWORD *)a3;
  v8 = (__int64)(v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v7)) <= 0;
  if ( *(__int64 *)(a1 + 32) > 0
    && (__int64)(v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), v7)) <= 0 )
  {
    v14 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
    if ( v14 )
      KeInsertQueueDpc(v14, 0LL, 0LL);
  }
  if ( !v8 )
  {
LABEL_5:
    v9 = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 112) |= 2u;
    v9 = 1;
  }
  v10 = *(unsigned __int8 *)(a3 + 112);
  v11 = *(_QWORD *)a3;
  v12 = *(_QWORD *)(a3 + 8);
  if ( (v10 & 0x10) != 0 )
  {
    if ( v11 < v12 )
      goto LABEL_9;
  }
  else if ( !v9 && (v12 == *(_QWORD *)(a3 + 16) || v11 < v12) )
  {
    goto LABEL_9;
  }
  v15 = *(unsigned int *)(a1 + 8);
  v16 = *(_QWORD *)(a3 + 32) / ((unsigned __int64)(qword_140D05418 * v15) >> 7) + 1;
  v17 = *(volatile signed __int32 **)(a3 + 120);
  *(_DWORD *)(a3 + 116) = v16;
  if ( v17 )
  {
    _InterlockedExchangeAdd(v17, v16);
    LOBYTE(v10) = *(_BYTE *)(a3 + 112);
  }
  *(_QWORD *)(a3 + 24) = *(_QWORD *)(a3 + 8) + ((unsigned __int64)(qword_140D052A0 * v15) >> 7);
  *(_BYTE *)(a3 + 112) = v10 | 4;
  sub_140208284(a2, a3);
LABEL_9:
  v13 = *(_BYTE *)(a3 + 112);
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 2) != 0 )
      sub_140210CE4((_RTL_RB_TREE *)a2, a3, 1);
    else
      sub_140210D6C((_RTL_RB_TREE *)a2, a3, 1);
  }
  if ( (*(_BYTE *)(a3 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 33113) )
  {
    KeInterlockedSetProcessorAffinityEx(asc_140C0B690, *(unsigned int *)(a2 + 36), v10, v11);
    v18 = byte_140D06889 == 0;
    *(_BYTE *)(a2 + 33113) = 1;
    if ( !v18 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      *(_BYTE *)(a2 + 37092) &= ~2u;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
