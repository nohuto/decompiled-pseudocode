/*
 * XREFs of sub_140A53718 @ 0x140A53718
 * Callers:
 *     sub_140A5029C @ 0x140A5029C (sub_140A5029C.c)
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403AAB4C @ 0x1403AAB4C (sub_1403AAB4C.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140A61640 @ 0x140A61640 (sub_140A61640.c)
 */

BOOLEAN __fastcall sub_140A53718(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  BOOLEAN result; // al
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf

  v4 = 1;
  if ( sub_1403AAE50() == 1 && !(unsigned __int8)sub_140A61640() )
  {
    byte_140D014B9 = 1;
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( dword_140D014B4 )
    goto LABEL_24;
  if ( *(_BYTE *)(a1 + 48) != 5 )
  {
    byte_140D014B9 = 1;
LABEL_24:
    v4 = 0;
  }
  sub_1403AAB4C(a1, v4, a2);
  v7 = sub_1403AAB1C(a2, v6);
  v8 = v7;
  if ( v7 && v4 )
  {
    *(_DWORD *)(v7 + 120) = 0;
    *(_BYTE *)(v7 + 128) = 0;
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    result = byte_140C54998;
    if ( byte_140C54998 )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v8 && *(_QWORD *)(v8 + 16) )
        {
          if ( *(_QWORD *)(v8 + 24) )
            return KeInsertQueueDpc((PRKDPC)(v8 + 48), 0LL, 0LL);
        }
      }
      else
      {
        return sub_1403AAA10(a2);
      }
    }
  }
  return result;
}
