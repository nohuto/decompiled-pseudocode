/*
 * XREFs of sub_14028D948 @ 0x14028D948
 * Callers:
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 * Callees:
 *     sub_14028D878 @ 0x14028D878 (sub_14028D878.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ExDisableResourceBoostLite @ 0x1403863A0 (ExDisableResourceBoostLite.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char *__fastcall sub_14028D948(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char *result; // rax
  char *v9; // rdi
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax

  result = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
  v9 = result;
  if ( result )
  {
    v10 = (struct _ERESOURCE *)(result + 72);
    *(_WORD *)result = 765;
    *((_QWORD *)result + 1) = *a3;
    *((_DWORD *)result + 1) = *a4;
    v11 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v9 + 16);
    *((_QWORD *)v9 + 4) = v11;
    *((_QWORD *)v9 + 22) = a1;
    ExInitializeResourceLite(v10);
    ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
    v12 = *(_QWORD **)(a2 + 24);
    v13 = v9 + 16;
    if ( *v12 != a2 + 16 )
      __fastfail(3u);
    *v13 = a2 + 16;
    *((_QWORD *)v9 + 3) = v12;
    *v12 = v13;
    *(_QWORD *)(a2 + 24) = v13;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      sub_14028D878(a1, *a3, 1);
    ExReleasePushLockEx(a1 + 104, 0LL);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v9 + 72));
    return v9;
  }
  return result;
}
