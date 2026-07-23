/*
 * XREFs of sub_140389084 @ 0x140389084
 * Callers:
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 __fastcall sub_140389084(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF

  v12[1] = 8LL;
  v12[0] = 0LL;
  v13 = 393479LL;
  v14[1] = v14;
  v14[0] = v14;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v12[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v12;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  sub_140334790(a3, v8, v9, v10);
  return sub_140217454((__int64)&v13, 0x12u);
}
