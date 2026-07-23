/*
 * XREFs of sub_14035BB4C @ 0x14035BB4C
 * Callers:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     sub_14035C7A4 @ 0x14035C7A4 (sub_14035C7A4.c)
 *     sub_1405685CC @ 0x1405685CC (sub_1405685CC.c)
 *     sub_1407F8914 @ 0x1407F8914 (sub_1407F8914.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_1409AFA60 @ 0x1409AFA60 (sub_1409AFA60.c)
 * Callees:
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1403438F0 @ 0x1403438F0 (sub_1403438F0.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 *     sub_14035BDA0 @ 0x14035BDA0 (sub_14035BDA0.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14035BB4C(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // si
  int v17; // r14d
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+24h] [rbp-DCh]
  __int64 v20; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+52h] [rbp-AEh]
  __int16 v25; // [rsp+56h] [rbp-AAh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[34]; // [rsp+70h] [rbp-90h] BYREF

  v20 = a3;
  v19 = a4;
  Affinity = 0LL;
  memset(v27, 0, 0x108uLL);
  v24 = 0;
  v25 = 0;
  v18 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v27[0]) = 2097153;
    a1 = v27;
    memset((char *)v27 + 4, 0, 0x104uLL);
    v27[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  *(_DWORD *)Affinity.Reserved = 0;
  CurrentPrcb = 0LL;
  Affinity.Reserved[2] = 0;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v10 = KeSetPriorityThread(CurrentThread, 30);
    else
      sub_1403438F0((__int64)CurrentThread, 15LL, v6, v7);
  }
  v12 = a1[1];
  v22[0] = a1;
  v13 = v20;
  v23 = 0;
  v22[1] = v12;
  while ( !(unsigned int)sub_14035BDA0(&v18, v22) )
  {
    Affinity.Group = v18;
    Affinity.Mask = 1LL << SBYTE2(v18);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    sub_14042A5E0(CurrentPrcb, v13);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = v19;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v14 = *(unsigned int *)(v15 + 20);
    *(_DWORD *)(v15 + 20) = v14 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  *((_BYTE *)CurrentPrcb + 13242) = 1;
  if ( v17 )
  {
    if ( (v17 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v10);
    else
      sub_14035B110((__int64)CurrentPrcb, (__int64)CurrentThread, v14, v15);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  *((_BYTE *)CurrentPrcb + 13242) = 0;
  sub_140294824((__int64)CurrentPrcb, CurrentIrql);
}
