/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x140969FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140A93398 @ 0x140A93398 (sub_140A93398.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v6; // ebx
  ULONG v7; // edi
  struct _KTHREAD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // rax
  NTSTATUS v15; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (dword_140D06880 & 1) == 0 )
    return -1073741637;
  v6 = 0;
  if ( !(unsigned int)sub_1402DA4B0() || (qword_140D01450 & 0xFFA9F6E6) == 0 && (qword_140D01450 & 0x200000000LL) == 0 )
    return -1073741637;
  v7 = ThunkBufferSize >> 4;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  dword_140C1AA74 += v7;
  v9 = sub_1406F5B50();
  v10 = sub_1402FDA80(EntryRoutine, 0);
  v11 = v10;
  if ( v10 && (v12 = v10[6], retaddr >= v12) && (v13 = v12 + *((unsigned int *)v10 + 16), retaddr < v13) )
  {
    v14 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v14 >= v12 && *v14 < v13 )
    {
      v14 += 2;
      if ( ++v6 >= v7 )
      {
        v15 = sub_140A93398(EntryRoutine, ThunkBuffer, ThunkBufferSize, v11);
        goto LABEL_17;
      }
    }
    v15 = -1073741584;
  }
  else
  {
    v15 = -1073741585;
  }
LABEL_17:
  sub_1406F5AF0((__int64)v9);
  return v15;
}
