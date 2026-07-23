/*
 * XREFs of sub_14050C138 @ 0x14050C138
 * Callers:
 *     sub_140354380 @ 0x140354380 (sub_140354380.c)
 *     sub_140521AC0 @ 0x140521AC0 (sub_140521AC0.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140354380 @ 0x140354380 (sub_140354380.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050C138(char a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = sub_140303720(qword_140C4E4C8);
  sub_14042A5E0(v5, v6);
  *((_BYTE *)CurrentPrcb + 34) &= ~2u;
  if ( a1 && byte_140C4E842 )
    sub_140354380(0, (unsigned int)dword_140C2B1C8, (__int64)&v13);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = *((_QWORD *)v8 + 4375);
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)v8);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
