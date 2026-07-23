/*
 * XREFs of sub_140560798 @ 0x140560798
 * Callers:
 *     sub_14045B710 @ 0x14045B710 (sub_14045B710.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140459EC8 @ 0x140459EC8 (sub_140459EC8.c)
 *     sub_1405609F8 @ 0x1405609F8 (sub_1405609F8.c)
 */

__int64 sub_140560798()
{
  __int64 result; // rax
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  result = sub_1405609F8();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      sub_14042A5E0(*(unsigned int *)(result + 24), 1LL);
    sub_140459EC8(v1, &v8);
    v2 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      sub_140345190(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 56));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v4 = v8;
      if ( v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v4 = v8;
        v7 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v2 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v2 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v4 = v8;
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
