/*
 * XREFs of sub_14056ECDC @ 0x14056ECDC
 * Callers:
 *     sub_1403AF5E4 @ 0x1403AF5E4 (sub_1403AF5E4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403DC10C @ 0x1403DC10C (sub_1403DC10C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 *     sub_14056EC2C @ 0x14056EC2C (sub_14056EC2C.c)
 */

__int64 __fastcall sub_14056ECDC(__int64 a1)
{
  char v3; // si
  unsigned __int8 v4; // cl
  __int64 v5; // rdx
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v12; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = 0;
  if ( !byte_140C2B068 )
    return 3221225473LL;
  v3 = 0;
  v4 = *(_BYTE *)(a1 + 92);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  v6 = 0;
  if ( (unsigned int)v5 > 0xFF )
    return 3221225711LL;
  if ( v4 > 0xCu )
    return 3221225711LL;
  if ( *(_DWORD *)(a1 + 96) >= (unsigned int)dword_140D06884 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v4 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  v8 = qword_140C2B0D8 + 48 * v5;
  sub_14056EC2C(v8);
  sub_14045A41A((PKSPIN_LOCK)v8, &v17);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( v9 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_17;
      if ( !*(_BYTE *)(v9 + 100) )
        goto LABEL_17;
      if ( *(_DWORD *)(v9 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_17;
      v6 = 1;
      v3 = 1;
      sub_1403DC10C(*(_QWORD *)(v8 + 40), a1);
      if ( *(_BYTE *)(v10 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_17;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v8 + 32) = 0;
    }
    *(_QWORD *)(v8 + 40) = a1;
LABEL_17:
    *(_BYTE *)(a1 + 95) = 1;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v12 = v17;
    if ( v17 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = *((_QWORD *)CurrentPrcb + 4375);
      v12 = v17;
      v15 = ~(unsigned __int16)(-1LL << (v17 + 1));
      v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
      *(_DWORD *)(v14 + 20) &= v15;
      if ( v16 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v12 = v17;
  }
  __writecr8(v12);
  KeSetEvent((PRKEVENT)(v8 + 8), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v6 )
    return v3 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
