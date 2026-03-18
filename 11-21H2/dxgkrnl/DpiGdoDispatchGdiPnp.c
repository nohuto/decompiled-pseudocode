/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C001C50C
 * Callers:
 *     DpiDispatchPnp @ 0x1C01DB310 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = -1073741637;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v4 + 1) != 7 )
  {
    if ( *(_BYTE *)(v4 + 1) == 8 )
      return v3;
    v9 = *(unsigned __int8 *)(v4 + 1);
    v10 = 2LL;
LABEL_8:
    WdLogSingleEntry1(v10, v9);
    return v3;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v9 = -1073741670LL;
    v10 = 6LL;
    goto LABEL_8;
  }
  *(_DWORD *)PoolWithTag = 1;
  PoolWithTag[1] = *(_QWORD *)(v5 + 152);
  ObfReferenceObject(*(PVOID *)(v5 + 152));
  v3 = 0;
  *(_QWORD *)(a2 + 56) = v7;
  return v3;
}
