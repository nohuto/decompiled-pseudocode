/*
 * XREFs of sub_1403D2750 @ 0x1403D2750
 * Callers:
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 * Callees:
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403D2818 @ 0x1403D2818 (sub_1403D2818.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403D2750(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  v3 = 0LL;
  v5 = sub_1403AAB1C(a2, a2);
  if ( !*(_QWORD *)(v5 + 16) )
  {
    v3 = sub_1403B1F04(v4, 372LL);
    if ( !v3 )
      KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, 0LL, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( v3 )
    *(_QWORD *)(v5 + 16) = v3;
  else
    v3 = *(_QWORD *)(v5 + 16);
  sub_1403D2818(v3);
  *(_OWORD *)(*(_QWORD *)(v5 + 16) + 32LL) = xmmword_140025DE8;
  *(_QWORD *)(v5 + 24) = a1;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
