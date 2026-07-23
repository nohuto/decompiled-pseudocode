/*
 * XREFs of sub_140639760 @ 0x140639760
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB070C @ 0x140AB070C (sub_140AB070C.c)
 */

__int64 __fastcall sub_140639760(__int128 *a1)
{
  int v2; // ebx
  void *v3; // rsi
  KPROCESSOR_MODE v4; // r15
  __int64 v6; // rax
  int v7; // ecx
  const void *v8; // r14
  unsigned __int64 v9; // rax
  PVOID PoolWithTag; // rax
  unsigned __int16 v11; // cx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp+10h]

  v12 = 0LL;
  v2 = 0;
  v3 = 0LL;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v4) )
    return 3221225569LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !v4 )
    goto LABEL_17;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a1;
  v7 = *(_DWORD *)v6;
  v13 = *(_DWORD *)v6;
  LODWORD(v12) = *(_DWORD *)v6;
  v8 = *(const void **)(v6 + 8);
  *((_QWORD *)&v12 + 1) = v8;
  if ( !v8 || !HIWORD(v7) )
    goto LABEL_24;
  v9 = (unsigned __int64)v8 + HIWORD(v13);
  if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v13), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v8, HIWORD(v13));
    *((_QWORD *)&v12 + 1) = v3;
    a1 = &v12;
LABEL_17:
    v2 = -1073741811;
    v11 = *((_WORD *)a1 + 1) >> 1;
    if ( v11 )
    {
      while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v11 - 2) )
      {
        if ( !--v11 )
          goto LABEL_22;
      }
      v2 = 0;
    }
LABEL_22:
    if ( v2 >= 0 )
      v2 = sub_140AB070C(*((_QWORD *)a1 + 1));
    goto LABEL_24;
  }
  v2 = -1073741801;
LABEL_24:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v2;
}
