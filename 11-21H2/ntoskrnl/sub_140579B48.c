/*
 * XREFs of sub_140579B48 @ 0x140579B48
 * Callers:
 *     sub_140578AD8 @ 0x140578AD8 (sub_140578AD8.c)
 *     sub_140578EF0 @ 0x140578EF0 (sub_140578EF0.c)
 *     sub_1405795C4 @ 0x1405795C4 (sub_1405795C4.c)
 *     sub_140579620 @ 0x140579620 (sub_140579620.c)
 *     sub_1405796A4 @ 0x1405796A4 (sub_1405796A4.c)
 *     sub_1405796F8 @ 0x1405796F8 (sub_1405796F8.c)
 *     sub_140579750 @ 0x140579750 (sub_140579750.c)
 *     sub_140579878 @ 0x140579878 (sub_140579878.c)
 * Callees:
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140552D54 @ 0x140552D54 (sub_140552D54.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 */

__int64 __fastcall sub_140579B48(_DWORD *a1)
{
  __int16 v3; // bp
  unsigned int v4; // ebx
  char v5; // r14
  bool v6; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  __int16 v14; // [rsp+40h] [rbp-8h]

  if ( byte_140C2A960 )
    return 3221225473LL;
  v3 = v14;
  v4 = 0;
  v5 = 1;
  _disable();
  v6 = (v3 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( (unsigned int)sub_140578BB4(0xF4240u) > 1 )
  {
    v5 = 0;
    byte_140C2A960 = 1;
LABEL_9:
    v4 = -1073741823;
    goto LABEL_18;
  }
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      if ( *a1 == 2 )
      {
        if ( qword_140D00A80 )
        {
          *(_DWORD *)(qword_140D00A80 + 1404) |= a1[2];
          sub_140553164();
        }
        goto LABEL_18;
      }
      byte_140C2A960 = 1;
      goto LABEL_9;
    }
    sub_140552B40(a1[2]);
  }
  else
  {
    sub_140552D54(a1[4]);
  }
LABEL_18:
  sub_1402DA5B0(v5);
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
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v6 )
    _enable();
  return v4;
}
