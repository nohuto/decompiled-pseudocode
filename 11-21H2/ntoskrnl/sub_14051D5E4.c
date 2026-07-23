/*
 * XREFs of sub_14051D5E4 @ 0x14051D5E4
 * Callers:
 *     sub_140507CF0 @ 0x140507CF0 (sub_140507CF0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051D5E4(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 i; // rsi
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // [rsp+78h] [rbp+20h]

  if ( !byte_140C54BB0 )
    return 3221225659LL;
  v6 = 1;
  v7 = sub_140252344(&qword_140C4B0D0);
  v8 = qword_140C4B0C0;
  v18 = v7;
  do
  {
    if ( (__int64 *)v8 == &qword_140C4B0C0 )
      break;
    v9 = 0;
    for ( i = *(_QWORD *)(v8 + 32); v9 < *(_DWORD *)(v8 + 20); ++v9 )
    {
      if ( *(_BYTE *)(v8 + 16 * (v9 + 10LL) + 12) )
      {
        v11 = *(_DWORD *)(v8 + 16);
        *(_WORD *)(a3 + 4) = 1;
        v12 = v9 + v11;
        *(_DWORD *)(a3 + 16) = v12;
        *(_DWORD *)(a3 + 8) = *(_DWORD *)(v8 + 16 * (v9 + 10LL) + 4);
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 16 * (v9 + 10LL));
        if ( (int)sub_14042A5E0(i, v12) >= 0 )
        {
          v6 = sub_14042A5E0(a2, a3);
          if ( !v6 )
            break;
        }
      }
    }
    v8 = *(_QWORD *)v8;
  }
  while ( v6 );
  KeReleaseSpinLockFromDpcLevel(&qword_140C4B0D0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v18 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (v18 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v18);
  return 0LL;
}
