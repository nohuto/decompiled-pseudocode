/*
 * XREFs of sub_140977F8C @ 0x140977F8C
 * Callers:
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 */

struct _KTHREAD *__fastcall sub_140977F8C(_QWORD *a1)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r8

  result = KeGetCurrentThread();
  v3 = a1[2];
  v4 = *((_QWORD *)result + 23);
  if ( v3 )
    result = (struct _KTHREAD *)PsReturnProcessNonPagedPoolQuota(*((_QWORD *)result + 23), v3);
  v5 = a1[1];
  if ( v5 )
    result = (struct _KTHREAD *)PsReturnProcessPagedPoolQuota(v4, v5);
  if ( *a1 )
  {
    v6 = sub_14032A72C(v4);
    return (struct _KTHREAD *)sub_140216E18(v6, v7);
  }
  return result;
}
