/*
 * XREFs of sub_1405A1AE8 @ 0x1405A1AE8
 * Callers:
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A1AE8(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  ULONG_PTR v13; // [rsp+20h] [rbp-20h] BYREF
  __int16 v14; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+2Ah] [rbp-16h]
  char v16; // [rsp+2Bh] [rbp-15h]
  int v17; // [rsp+2Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2;
  v16 = 0;
  v3 = (__int64 *)sub_140347C10((__int64)&qword_140C4F2C8, 0LL);
  v6 = (unsigned __int64)v3;
  if ( v3 )
    sub_14029F580(v3, v4, v5);
  v17 = 0;
  v18[1] = v18;
  v14 = 263;
  v18[0] = v18;
  v13 = qword_140C4F2C8;
  qword_140C4F2C8 = (ULONG_PTR)&v13;
  v15 = 6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  result = sub_140217454((__int64)&v14, 0x12u);
  if ( v6 )
  {
    sub_140347C10((__int64)&qword_140C4F2C8, v6);
    return sub_140353BB0((ULONG_PTR)&qword_140C4F2C8, v6);
  }
  return result;
}
