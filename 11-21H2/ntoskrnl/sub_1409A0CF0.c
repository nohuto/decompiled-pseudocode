/*
 * XREFs of sub_1409A0CF0 @ 0x1409A0CF0
 * Callers:
 *     sub_1409A0FD0 @ 0x1409A0FD0 (sub_1409A0FD0.c)
 *     sub_1409A1160 @ 0x1409A1160 (sub_1409A1160.c)
 *     sub_1409A1190 @ 0x1409A1190 (sub_1409A1190.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 */

void __fastcall sub_1409A0CF0(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int i; // edi

  ExAcquirePushLockExclusiveEx(a1[2] + 16LL, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  sub_14036C0A0(a1[2] + 16LL);
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    sub_140346D64((void *)a1[4 * i + 7], *(_DWORD *)(a1[2] + 24LL));
  sub_140346D64(a1, *(_DWORD *)(a1[2] + 24LL));
}
