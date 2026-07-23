/*
 * XREFs of sub_14023F108 @ 0x14023F108
 * Callers:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 * Callees:
 *     sub_140240404 @ 0x140240404 (sub_140240404.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14023F108(int a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v3; // esi
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v13, 0);
    v3 = (_DWORD)CurrentPrcb + 11704;
    v7 = *(_QWORD *)(*((_QWORD *)CurrentPrcb + 1) + 184LL);
    *((_DWORD *)CurrentPrcb + 2927) = 0;
    *((_DWORD *)CurrentPrcb + 2926) = 2097153;
    memset((char *)CurrentPrcb + 11712, 0, 0x100uLL);
    sub_140300030((char *)CurrentPrcb + 11704, *((unsigned __int16 *)CurrentPrcb + 5853), v7 + 368);
    KeRemoveProcessorAffinityEx((char *)CurrentPrcb + 11704, *((unsigned int *)CurrentPrcb + 9));
    v4 = 0;
    goto LABEL_11;
  }
  v3 = 0;
  v4 = 1;
  if ( !byte_140E01840 )
  {
LABEL_11:
    sub_1402F42D4((_DWORD)CurrentPrcb, v4, v3, 0, 1LL, (__int64)sub_14024B290, 0LL);
    goto LABEL_6;
  }
  if ( (unsigned __int8)sub_140240404(&dword_140D31080, 1LL) )
  {
    sub_1402F42D4((_DWORD)CurrentPrcb, 1, 0, 0, 1LL, (__int64)sub_14024B290, 0LL);
    _InterlockedAdd(&dword_140D31080, 1u);
  }
LABEL_6:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = *((_QWORD *)v9 + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
