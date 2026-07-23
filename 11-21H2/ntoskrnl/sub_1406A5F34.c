/*
 * XREFs of sub_1406A5F34 @ 0x1406A5F34
 * Callers:
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 */

__int64 sub_1406A5F34()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  __int64 *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C49860, 0LL);
  v1 = qword_140D3CC98;
  v2 = &qword_140D3CC90;
  while ( (__int64 *)v1 != v2 )
  {
    if ( (unsigned __int8)sub_14071BBD8(v1 - 1608) )
    {
      v0 = v3;
      break;
    }
    v1 = *(_QWORD *)(v4 + 8);
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
  return v0;
}
