/*
 * XREFs of sub_14099A188 @ 0x14099A188
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14099A188(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8

  memset((void *)a2, 0, 0x90uLL);
  v4 = *(_QWORD *)(a1 + 2280);
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx(v4 + 432, 0LL);
    *(_DWORD *)(a2 + 4) = (unsigned __int16)*(_DWORD *)(v4 + 464);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 468);
    v6 = *(_QWORD *)(v4 + 456);
    if ( v6 )
      sub_1402D88AC((_WORD *)(a2 + 16), 64LL, v6 + 32, (*(_QWORD *)(v6 + 24) >> 17) & 0x1FFFFFFFLL);
    sub_1402935D0(v4 + 432);
  }
}
