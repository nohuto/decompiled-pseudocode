/*
 * XREFs of sub_140592278 @ 0x140592278
 * Callers:
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 * Callees:
 *     sub_140286884 @ 0x140286884 (sub_140286884.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_140592278(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 result; // rax

  v2 = *BugCheckParameter2;
  v5 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = sub_140286884((ULONG_PTR)BugCheckParameter2, a2, 4);
  --*(_QWORD *)(v2 + 40);
  --*(_DWORD *)(v2 + 88);
  v8 = v7;
  result = sub_140287660(v2, v6, v9);
  if ( v8 )
    return sub_1405C4B8C(v5, 1LL, v8);
  return result;
}
