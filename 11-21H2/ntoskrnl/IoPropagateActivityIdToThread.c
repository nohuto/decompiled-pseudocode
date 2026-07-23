/*
 * XREFs of IoPropagateActivityIdToThread @ 0x14020BD50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     IoGetActivityIdIrp @ 0x14020C9B0 (IoGetActivityIdIrp.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax

  if ( !(unsigned __int8)sub_14020C0F0(a1, 0LL) )
    return 3221226021LL;
  IoGetActivityIdIrp(v5, a2);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_QWORD *)CurrentThread + 190);
  *((_QWORD *)CurrentThread + 190) = a2;
  *a3 = v8;
  return 0LL;
}
