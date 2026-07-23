/*
 * XREFs of sub_1405AE144 @ 0x1405AE144
 * Callers:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140228BCC @ 0x140228BCC (sub_140228BCC.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405AE144(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  char v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  ULONG_PTR Context[28]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Context, 0, sizeof(Context));
  LODWORD(Context[5]) = 0;
  Context[7] = 0LL;
  Context[8] = 0LL;
  Context[0] = a1;
  Context[2] = a3;
  BYTE5(Context[5]) = 0;
  Context[6] = 20LL;
  v6 = sub_140317A10(a1);
  v7 = 0;
  BYTE4(Context[5]) = 1;
  v8 = a2;
  while ( 1 )
  {
    v8 = (__int64)(v8 << 25) >> 16;
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v7;
  }
  if ( v6 >= 0 )
    sub_140228BCC((__int64)&Context[5], v7, a2);
  else
    sub_1402285E8((__int64)&Context[5], v7, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  Context[3] = sub_14033AC10(a1);
  HIDWORD(Context[4]) = dword_140D06884;
  LODWORD(Context[4]) = dword_140D06884;
  KeIpiGenericCall(sub_1405AE310, (ULONG_PTR)Context);
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
  return result;
}
