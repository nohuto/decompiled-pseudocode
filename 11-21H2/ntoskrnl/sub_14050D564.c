/*
 * XREFs of sub_14050D564 @ 0x14050D564
 * Callers:
 *     sub_140391724 @ 0x140391724 (sub_140391724.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14052266C @ 0x14052266C (sub_14052266C.c)
 */

__int64 sub_14050D564()
{
  int v0; // ecx
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  byte_140C4C7D8 = sub_140252344(&qword_140C4C7D0);
  if ( *(int **)&qword_140C4C7A0 != &qword_140C4C7A0 )
    sub_14052266C(v0, 277, qword_140C4C7E0, (int)&qword_140C4C7A0, 0LL);
  dword_140C4C780 = -1;
  v1 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
  v3 = sub_14042A5E0(v1, v2);
  v4 = (unsigned __int8)byte_140C4C7D8;
  v5 = v3;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4C7D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
