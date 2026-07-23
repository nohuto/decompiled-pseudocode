/*
 * XREFs of sub_1406C1234 @ 0x1406C1234
 * Callers:
 *     sub_1406C08F0 @ 0x1406C08F0 (sub_1406C08F0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406C12F4 @ 0x1406C12F4 (sub_1406C12F4.c)
 */

__int64 __fastcall sub_1406C1234(__int64 a1)
{
  unsigned int v2; // esi
  char *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx

  v2 = -1073741771;
  v3 = (char *)sub_140347DB0();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (ULONG_PTR)(v3 + 720);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 720), 0LL);
  v6 = v3 + 128;
  if ( !sub_1406C12F4(v6, a1) )
  {
    v7 = &v6[16 * *(unsigned __int8 *)(a1 + 40)];
    v8 = (char **)*((_QWORD *)v7 + 1);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = (char *)a1;
    *((_QWORD *)v7 + 1) = a1;
    ++*((_DWORD *)v6 + 150);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v2;
}
