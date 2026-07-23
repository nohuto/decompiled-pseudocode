/*
 * XREFs of sub_14054F010 @ 0x14054F010
 * Callers:
 *     sub_140399424 @ 0x140399424 (sub_140399424.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14054F010()
{
  struct _MDL *v0; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned int v4; // esi
  unsigned __int8 v5; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 *v10[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-88h] BYREF

  v0 = (struct _MDL *)qword_140D051A8;
  memset(v11, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  if ( !sub_140294D28(0LL) )
    return 3221225629LL;
  result = sub_1403A0F08((__int64)v10, v0, 0x2000u, 1, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v11[1] = v10[0];
    v11[2] = v10[7];
    v4 = sub_140358A20(2u, 252, 0, (__int64)v11);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    sub_1403A0EB4(v10);
    return v4;
  }
  return result;
}
