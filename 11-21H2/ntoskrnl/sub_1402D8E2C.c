/*
 * XREFs of sub_1402D8E2C @ 0x1402D8E2C
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D8E2C(__int64 a1, int a2)
{
  unsigned __int8 v4; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  sub_1402D8E9C(&v11);
  if ( a2 )
    a1 = 0LL;
  qword_140C4F5E0 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v4 = v11;
    if ( v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      v4 = v11;
      v9 = ~(unsigned __int16)(-1LL << (v11 + 1));
      v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
      *(_DWORD *)(v8 + 20) &= v9;
      if ( v10 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v4 = v11;
  }
  result = v4;
  __writecr8(v4);
  return result;
}
