/*
 * XREFs of sub_14053FE50 @ 0x14053FE50
 * Callers:
 *     sub_1402ACAD0 @ 0x1402ACAD0 (sub_1402ACAD0.c)
 *     RtlNotifyFeatureUsage @ 0x1405E4020 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_1403C7918 @ 0x1403C7918 (sub_1403C7918.c)
 *     sub_1403C79D4 @ 0x1403C79D4 (sub_1403C79D4.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 *     sub_1405EE634 @ 0x1405EE634 (sub_1405EE634.c)
 */

__int64 __fastcall sub_14053FE50(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 EffectiveIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v3 = 1;
  }
  v6 = (unsigned int)sub_1403C79D4(qword_140C49570);
  v7 = qword_140C49598[v6];
  if ( !v7 )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = sub_1405EE634(v7, a2);
  if ( v8 < 0 )
  {
LABEL_5:
    if ( (_DWORD)v6 != -1 )
      sub_1403C7918(qword_140C49570, v6);
    goto LABEL_7;
  }
  sub_1403C7918(qword_140C49570, v6);
  if ( byte_140C49590 )
  {
    if ( EffectiveIrql >= 2u )
      KeInsertQueueDpc(&stru_140C495A8, 0LL, 0LL);
    else
      sub_1403C7B20(&stru_140C495E8);
  }
  v8 = 0;
LABEL_7:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
