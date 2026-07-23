/*
 * XREFs of sub_1409CD544 @ 0x1409CD544
 * Callers:
 *     sub_1409CD7E0 @ 0x1409CD7E0 (sub_1409CD7E0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1409CD544(_DWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct _ERESOURCE *v10; // r12
  __int64 **v11; // r13
  struct _ERESOURCE *v12; // rbp
  struct _ERESOURCE *v13; // rcx
  struct _KTHREAD *v14; // rax
  unsigned int v15; // esi
  __int64 *i; // rbx
  __int64 v17; // rax
  __int64 v18; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (unsigned int)(1529154084 * *a2) >> 28;
  v7 = v5 & 3;
  v8 = v6 & 3;
  v9 = qword_140D3CA78 + 8 * v5;
  v10 = &stru_140CF66C0 + v7;
  v11 = (__int64 **)(qword_140D3CA78 + 8 * v6);
  v12 = &stru_140CF66C0 + v8;
  --*((_WORD *)CurrentThread + 242);
  if ( (unsigned int)v5 >= (unsigned int)v6 )
  {
    ExAcquireResourceExclusiveLite(&stru_140CF66C0 + v8, 1u);
    v13 = v10;
  }
  else
  {
    ExAcquireResourceExclusiveLite(&stru_140CF66C0 + v7, 1u);
    v13 = v12;
  }
  v14 = KeGetCurrentThread();
  --*((_WORD *)v14 + 242);
  ExAcquireResourceExclusiveLite(v13, 1u);
  v15 = 0;
  do
    v9 = *(_QWORD *)v9;
  while ( v9
       && (*(_QWORD *)(v9 + 160) != PsGetCurrentServerSilo()
        || *a1 != *(_DWORD *)(v9 + 8)
        || a1[1] != *(_DWORD *)(v9 + 12)) );
  for ( i = *v11;
        i && (i[20] != PsGetCurrentServerSilo() || *a2 != *((_DWORD *)i + 2) || a2[1] != *((_DWORD *)i + 3));
        i = (__int64 *)*i )
  {
    ;
  }
  if ( v9 && i )
  {
    v17 = *(_QWORD *)a2;
    *(_DWORD *)(v9 + 32) |= 0x40u;
    *(_QWORD *)(v9 + 168) = v17;
    v18 = *(_QWORD *)a1;
    *((_DWORD *)i + 8) |= 0x40u;
    i[21] = v18;
  }
  else
  {
    v15 = -1073741729;
  }
  ExReleaseResourceLite(v10);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ExReleaseResourceLite(v12);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v15;
}
