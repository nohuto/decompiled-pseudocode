/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1800035C8
 * Callers:
 *     RtlpFreeAllAtom @ 0x18000361C (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18008C490 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180003CA0 (RtlIsValidIndexHandle.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  _RTL_HANDLE_TABLE_ENTRY *v3; // rax
  PRTL_HANDLE_TABLE_ENTRY v4; // rbx
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v3) = RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), *(unsigned __int16 *)(a2 + 8), &Handle);
  if ( (_BYTE)v3 )
  {
    v4 = Handle;
    memset_thunk_772440563353939046(Handle, 0, *(unsigned int *)(a1 + 20));
    v3 = *(_RTL_HANDLE_TABLE_ENTRY **)(a1 + 32);
    v4->NextFree = v3;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return (char)v3;
}
