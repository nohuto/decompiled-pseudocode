/*
 * XREFs of sub_1402D8ABC @ 0x1402D8ABC
 * Callers:
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 * Callees:
 *     sub_1402D8B40 @ 0x1402D8B40 (sub_1402D8B40.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     sub_1402D8EEC @ 0x1402D8EEC (sub_1402D8EEC.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402D8ABC(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // ecx
  unsigned __int8 v5; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  v14 = 0;
  v13 = 0;
  v3 = a1;
  sub_1402D8EEC(a1, v12, &v14);
  sub_1402D8E9C(&v13);
  sub_1402D8B40(v4, v3, v12[0], a2, v14);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v5 = v13;
    if ( v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      v5 = v13;
      v10 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
      *(_DWORD *)(v9 + 20) &= v10;
      if ( v11 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  else
  {
    v5 = v13;
  }
  result = v5;
  __writecr8(v5);
  return result;
}
