/*
 * XREFs of PerfControlPTStates @ 0x1C0004420
 * Callers:
 *     <none>
 * Callees:
 *     InvokePTStateChange @ 0x1C00043E0 (InvokePTStateChange.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    return;
  }
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *a2;
  v7 = *(_QWORD *)(v5 + 56);
  v8 = v7 + 32LL * (unsigned int)*a2;
  v13 = *a2;
  v9 = *(unsigned __int8 *)(v8 + 25);
  if ( *(_DWORD *)(a1 + 40) == v9 )
    goto LABEL_12;
  if ( v9 == 1 )
  {
    if ( !*(_DWORD *)(v5 + 72) )
      goto LABEL_12;
    v11 = *(unsigned int *)(v5 + 68);
  }
  else
  {
    v10 = *(_DWORD *)(v5 + 68);
    if ( !v10 )
      goto LABEL_12;
    v11 = (unsigned int)(v10 - 1);
  }
  v12 = v7 + 32 * v11;
  if ( !v12 )
  {
LABEL_12:
    if ( a3 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( a3 )
  {
    InvokePTStateChange(v5, v12, HIDWORD(v6));
LABEL_13:
    InvokePTStateChange(v5, v8, HIDWORD(v13));
  }
LABEL_14:
  *(_DWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v8 + 25);
  *(_DWORD *)(a1 + 44) = *(unsigned __int8 *)(v8 + 24);
}
