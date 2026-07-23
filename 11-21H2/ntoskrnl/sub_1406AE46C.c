/*
 * XREFs of sub_1406AE46C @ 0x1406AE46C
 * Callers:
 *     sub_140661FA0 @ 0x140661FA0 (sub_140661FA0.c)
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 *     sub_1407DFE00 @ 0x1407DFE00 (sub_1407DFE00.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AE46C(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
