/*
 * XREFs of sub_1402F3FE0 @ 0x1402F3FE0
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     sub_1402F4380 @ 0x1402F4380 (sub_1402F4380.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056F694 @ 0x14056F694 (sub_14056F694.c)
 */

char __fastcall sub_1402F3FE0(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  char result; // al
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // r11
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  __int64 v17; // r8
  bool v18; // zf
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (dword_140D0689C & 4) == 0 )
    goto LABEL_2;
  if ( (dword_140D0689C & 2) != 0 )
    goto LABEL_16;
  if ( !a1 )
  {
    if ( (byte_140D0688A & 3) != 1 )
      goto LABEL_6;
LABEL_16:
    *a4 = 1;
    return 0;
  }
  if ( (dword_140D0689C & 0x800000) != 0 )
  {
    if ( (unsigned __int8)sub_14056F694(a2) )
      goto LABEL_16;
  }
LABEL_6:
  if ( (_DWORD)dword_140D06884 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
    goto LABEL_16;
  _InterlockedOr(v19, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 1);
  *a5 = CurrentIrql;
  if ( (unsigned int)sub_1402F4380(CurrentPrcb, *(_QWORD *)(v9 + 184) + 368LL) )
  {
    v12 = *v10;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = *((_QWORD *)v15 + 4375);
          v18 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v16;
          if ( v18 )
            sub_140418E4C(v15);
        }
      }
    }
    __writecr8(v12);
    result = 0;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
    return 1;
  }
  return result;
}
