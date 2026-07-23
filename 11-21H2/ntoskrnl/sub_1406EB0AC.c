/*
 * XREFs of sub_1406EB0AC @ 0x1406EB0AC
 * Callers:
 *     sub_1406EB080 @ 0x1406EB080 (sub_1406EB080.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1406EB0AC(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  unsigned int v6; // edi

  v2 = (unsigned int)(1529154084 * *a1) >> 28;
  v3 = qword_140D3CA78 + 8 * v2;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = &stru_140CF66C0 + (v2 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v3;
    if ( !v3 )
      break;
    if ( *(_QWORD *)(v3 + 160) == PsGetCurrentServerSilo()
      && *a1 == *(_DWORD *)(v3 + 8)
      && a1[1] == *(_DWORD *)(v3 + 12) )
    {
      *(_DWORD *)(v3 + 32) |= 0x20u;
      goto LABEL_7;
    }
  }
  v6 = -1073741729;
LABEL_7:
  ExReleaseResourceLite(v5);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
