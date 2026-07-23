/*
 * XREFs of sub_140250924 @ 0x140250924
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 * Callees:
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_140250924(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  __int64 v6; // rdx
  KIRQL v7; // r15
  int v8; // eax
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v8 = *(_DWORD *)(v1 + 56);
  if ( (v8 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v8 & 0x400) == 0 )
    v3 = sub_140286920((ULONG_PTR)BugCheckParameter2);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
    v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  LOBYTE(v6) = v7;
  result = sub_140287660(v1, v6);
  if ( v3 )
    return sub_1405C4B8C(v4, v5, v3);
  return result;
}
