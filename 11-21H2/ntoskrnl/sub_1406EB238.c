/*
 * XREFs of sub_1406EB238 @ 0x1406EB238
 * Callers:
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_14096D000 @ 0x14096D000 (sub_14096D000.c)
 * Callees:
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall sub_1406EB238(__int64 a1)
{
  _SLIST_ENTRY *v1; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 )
    sub_14027456C(v1);
  return PsReturnProcessNonPagedPoolQuota(*((_QWORD *)KeGetCurrentThread() + 23), 520LL);
}
