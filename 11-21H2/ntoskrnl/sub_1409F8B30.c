/*
 * XREFs of sub_1409F8B30 @ 0x1409F8B30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140551414 @ 0x140551414 (sub_140551414.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409F8B30(unsigned __int64 a1)
{
  KPROCESSOR_MODE v3; // di
  __int64 v4; // rax
  _WORD *v5; // rsi
  unsigned __int64 v6; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v8; // rdi
  _WORD *v9; // rax
  __int64 v10; // rcx
  _WORD *v11; // rax
  char v12; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    return 3221225485LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v3) )
    return 3221225569LL;
  if ( v3 )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v4 = a1;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0LL;
    v6 = (unsigned __int64)v5 + HIWORD(P);
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !*v5 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(P) + 2LL, 0x67727453u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v5, HIWORD(P));
      v8[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_24;
    }
    return 3221225495LL;
  }
  v9 = *(_WORD **)(a1 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(unsigned __int16 *)(a1 + 2);
  if ( !(_WORD)v10 || !*v9 )
    return 0LL;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2, 0x67727453u);
  v8 = v11;
  if ( !v11 )
    return 3221225495LL;
  memmove(v11, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
  v8[(unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1] = 0;
LABEL_24:
  v12 = sub_140551414(v8);
  ExFreePoolWithTag(v8, 0);
  if ( !v12 )
    return 3221225473LL;
  return 0LL;
}
