/*
 * XREFs of sub_140220944 @ 0x140220944
 * Callers:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 * Callees:
 *     sub_140220A44 @ 0x140220A44 (sub_140220A44.c)
 *     sub_140270204 @ 0x140270204 (sub_140270204.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 */

_UNKNOWN **__fastcall sub_140220944(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v3 | 1;
      sub_140220A44(a1);
      sub_140287A2C(a1);
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1352));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
      v5 = *(_QWORD **)(v4 + 1560);
      v6 = (_QWORD *)(a1 + 8);
      if ( *v5 != v4 + 1552 )
        __fastfail(3u);
      *v6 = v4 + 1552;
      *(_QWORD *)(a1 + 16) = v5;
      *v5 = v6;
      *(_QWORD *)(v4 + 1560) = v6;
      *(_DWORD *)(a1 + 56) |= 0x10000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
      sub_14035AD70((PVOID)(v4 + 1520), 0);
      return (_UNKNOWN **)sub_140270204(v4, v4 + 1352);
    }
  }
  return result;
}
