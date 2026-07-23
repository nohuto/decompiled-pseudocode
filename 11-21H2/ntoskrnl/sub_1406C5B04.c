/*
 * XREFs of sub_1406C5B04 @ 0x1406C5B04
 * Callers:
 *     sub_1406C5AE0 @ 0x1406C5AE0 (sub_1406C5AE0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406C5B04(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edx
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rbp
  __int64 *v7; // rbx
  void *v8; // rcx
  char *Pool2; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  --*((_WORD *)CurrentThread + 242);
  v5 = v4;
  v6 = &stru_140CF66C0 + (v4 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = *(__int64 **)(qword_140D3CA78 + 8 * v5);
  if ( v7 )
  {
    while ( *(_DWORD *)a1 != *((_DWORD *)v7 + 2) || *(_DWORD *)(a1 + 4) != *((_DWORD *)v7 + 3) )
    {
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_10;
    }
    v8 = (void *)v7[8];
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      v7[8] = 0LL;
      v7[10] = 0LL;
    }
    Pool2 = (char *)ExAllocatePool2(
                      256LL,
                      ((*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFF8LL) + *(unsigned __int16 *)(a1 + 24) + 2LL,
                      1934386515LL);
    if ( Pool2 )
    {
      v7[8] = (__int64)Pool2;
      v7[10] = (__int64)&Pool2[(*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFFFFFFFFFF8uLL];
      memmove(Pool2, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
      v10 = *(unsigned __int16 *)(a1 + 8);
      *((_WORD *)v7 + 28) = v10;
      *((_WORD *)v7 + 29) = v10 + 2;
      *(_WORD *)(v7[8] + 2 * (v10 >> 1)) = 0;
      memmove(
        (void *)v7[10],
        (const void *)(((*(unsigned __int16 *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + a1 + 40),
        *(unsigned __int16 *)(a1 + 24));
      v11 = *(unsigned __int16 *)(a1 + 24);
      *((_WORD *)v7 + 36) = v11;
      *((_WORD *)v7 + 37) = v11 + 2;
      *(_WORD *)(v7[10] + 2 * (v11 >> 1)) = 0;
    }
    else
    {
      v1 = -1073741670;
    }
  }
  else
  {
LABEL_10:
    v1 = -1073741729;
  }
  ExReleaseResourceLite(v6);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v1;
}
