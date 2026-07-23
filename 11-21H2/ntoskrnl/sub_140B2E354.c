/*
 * XREFs of sub_140B2E354 @ 0x140B2E354
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 *sub_140B2E354()
{
  unsigned int v0; // r8d
  bool v1; // zf
  char *v2; // rdx
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 *result; // rax
  PVOID PoolWithTag; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  sub_14042A5E0(0LL, &v9);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    qword_140C11460 = (__int64)PoolWithTag;
  }
  if ( v1 || (v2 = (char *)qword_140C11460) == 0LL )
  {
    v2 = (char *)&unk_140C114C0;
    v0 = 1;
    qword_140C11460 = (__int64)&unk_140C114C0;
  }
  dword_140C11528 = v0;
  for ( i = 0; i < v0; *(_DWORD *)&v2[v5 + 96] = 0 )
  {
    v4 = i;
    v5 = 104LL * i++;
    *(_QWORD *)&v2[v5 + 16] = sub_1406419B0;
    *(_QWORD *)&v2[v5 + 24] = v4;
    *(_QWORD *)&v2[v5] = 0LL;
    *(_QWORD *)&v2[v5 + 56] = sub_1406416A0;
    *(_DWORD *)&v2[v5 + 32] = 275;
    *(_QWORD *)&v2[v5 + 64] = v4;
    *(_QWORD *)&v2[v5 + 88] = 0LL;
    *(_QWORD *)&v2[v5 + 48] = 0LL;
  }
  v6 = (_QWORD *)off_140C07098;
  *(_QWORD *)(off_140C07098 + 96) = sub_1406416D0;
  v6[13] = sub_140641720;
  v6[14] = sub_140641270;
  v6[15] = sub_140641840;
  result = &qword_140C11540;
  qword_140C11548 = (__int64)&qword_140C11540;
  qword_140C11540 = (__int64)&qword_140C11540;
  qword_140C11498 = 0LL;
  qword_140C11530 = 0LL;
  return result;
}
