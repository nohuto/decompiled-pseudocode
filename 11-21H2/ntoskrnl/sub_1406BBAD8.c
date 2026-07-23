/*
 * XREFs of sub_1406BBAD8 @ 0x1406BBAD8
 * Callers:
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067EC64 @ 0x14067EC64 (sub_14067EC64.c)
 *     sub_1406A5F0C @ 0x1406A5F0C (sub_1406A5F0C.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_14071A730 @ 0x14071A730 (sub_14071A730.c)
 *     sub_14071A784 @ 0x14071A784 (sub_14071A784.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_14071B8C0 @ 0x14071B8C0 (sub_14071B8C0.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_14091C9E8 @ 0x14091C9E8 (sub_14091C9E8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140689A8C @ 0x140689A8C (sub_140689A8C.c)
 *     sub_1406BBBA8 @ 0x1406BBBA8 (sub_1406BBBA8.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406BBAD8(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = P + 201;
  if ( (_QWORD *)*v1 != v1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49860, 0LL);
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
  }
  *(_DWORD *)P = -1160724768;
  sub_140689A8C((__int64)P);
  sub_1406BBBA8(P);
  v5 = (void *)P[231];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[233];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)P[602];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  sub_14079CF18(4824LL);
  ExFreePoolWithTag(P, 0);
}
