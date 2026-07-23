/*
 * XREFs of sub_140259480 @ 0x140259480
 * Callers:
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     sub_1402594D4 @ 0x1402594D4 (sub_1402594D4.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140259480(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  sub_1402D8E9C(&v10);
  sub_1402594D4(v2, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v3 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *((_QWORD *)CurrentPrcb + 4375);
      v3 = v10;
      v8 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
      *(_DWORD *)(v7 + 20) &= v8;
      if ( v9 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v3 = v10;
  }
  result = v3;
  __writecr8(v3);
  return result;
}
