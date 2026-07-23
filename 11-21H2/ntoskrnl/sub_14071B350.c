/*
 * XREFs of sub_14071B350 @ 0x14071B350
 * Callers:
 *     sub_1402001A8 @ 0x1402001A8 (sub_1402001A8.c)
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14068E4E0 @ 0x14068E4E0 (sub_14068E4E0.c)
 *     sub_1406D6E10 @ 0x1406D6E10 (sub_1406D6E10.c)
 *     sub_1407174E0 @ 0x1407174E0 (sub_1407174E0.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 *     sub_14085ED9C @ 0x14085ED9C (sub_14085ED9C.c)
 *     sub_1409103FC @ 0x1409103FC (sub_1409103FC.c)
 *     sub_140911BAC @ 0x140911BAC (sub_140911BAC.c)
 *     sub_1409147B4 @ 0x1409147B4 (sub_1409147B4.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 *__fastcall sub_14071B350(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &qword_140D3CC90;
  if ( a1 )
    v3 = (__int64 *)&a1[201];
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C49860, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &qword_140D3CC90 )
      break;
    v1 = v3 - 201;
    if ( sub_140347810((struct _EX_RUNDOWN_REF *)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
  if ( a1 )
    sub_1402AD030(a1 + 205);
  return v1;
}
