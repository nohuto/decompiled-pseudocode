/*
 * XREFs of sub_14056FB90 @ 0x14056FB90
 * Callers:
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_140570394 @ 0x140570394 (sub_140570394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14056FB90(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 104);
  v6 = 0;
  if ( (int)sub_140570394(v1, v4, v2, &v6) < 0 || !v6 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
      sub_1402C1900(v5, 8u, v1);
  }
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 120), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 120), 0);
}
