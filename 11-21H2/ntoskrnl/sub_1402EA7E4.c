/*
 * XREFs of sub_1402EA7E4 @ 0x1402EA7E4
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 * Callees:
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402EA7E4(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v6; // esi
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  signed __int32 v16[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+4Ch] [rbp-1Ch]

  v19 = 0;
  v3 = 2147483650LL;
  v18 = a2;
  v17 = a1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    _InterlockedOr(v16, 0);
    v6 = (_DWORD)CurrentPrcb + 11704;
    v10 = *(_QWORD *)(*((_QWORD *)CurrentPrcb + 1) + 184LL);
    *((_DWORD *)CurrentPrcb + 2927) = 0;
    *((_DWORD *)CurrentPrcb + 2926) = 2097153;
    memset((char *)CurrentPrcb + 11712, 0, 0x100uLL);
    sub_140300030((char *)CurrentPrcb + 11704, *((unsigned __int16 *)CurrentPrcb + 5853), v10 + 368);
    KeRemoveProcessorAffinityEx((char *)CurrentPrcb + 11704, *((unsigned int *)CurrentPrcb + 9));
    v7 = 0;
  }
  sub_1402F42D4((_DWORD)CurrentPrcb, v7, v6, (unsigned int)&v17, v3, (__int64)sub_140246390, (__int64)&v17);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(v12);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
