/*
 * XREFs of sub_140283E8C @ 0x140283E8C
 * Callers:
 *     sub_14027F03C @ 0x14027F03C (sub_14027F03C.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 * Callees:
 *     sub_140239CF8 @ 0x140239CF8 (sub_140239CF8.c)
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140283E8C(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r10
  unsigned __int8 v12; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  v18[0] = 0;
  v8 = sub_14028494C(a1, 1LL, v18);
  v10 = v8;
  if ( v8 )
  {
    if ( (!a4 || (unsigned int)sub_140239CF8(v8)) && (*(_DWORD *)(v10 + 56) & 3) == 0 && *(_QWORD *)(v10 + 32) )
    {
      LOBYTE(v9) = v18[0];
      return sub_140286AB0(v10, v9, a2, a3, 0, a5);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v18[0];
      if ( v18[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = v18[0];
        v16 = ~(unsigned __int16)(-1LL << (v18[0] + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v12 = v18[0];
    }
    __writecr8(v12);
  }
  return 0LL;
}
