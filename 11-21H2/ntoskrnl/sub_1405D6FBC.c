/*
 * XREFs of sub_1405D6FBC @ 0x1405D6FBC
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D71E0 @ 0x1405D71E0 (sub_1405D71E0.c)
 */

__int64 __fastcall sub_1405D6FBC(_DWORD *a1, unsigned int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int16 *v9; // rcx
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // r9
  int v13; // edi
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax
  unsigned int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v22; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+34h] [rbp-CCh]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+52h] [rbp-AEh]
  __int16 v29; // [rsp+56h] [rbp-AAh]
  _DWORD v30[68]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v30, 0, 0x108uLL);
  v9 = *(unsigned __int16 **)a4;
  v24 = 4 * a3 + 4;
  v27 = *(_WORD *)(a4 + 8);
  v28 = 0;
  v29 = 0;
  v21 = 0;
  v25 = 0LL;
  v22 = a1;
  v23 = a2;
  v26[1] = v9;
  v26[0] = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v26) )
  {
    v10 = sub_140348800(v21);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v13 = sub_1405D71E0(v10);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 < 0 )
    {
      v30[0] = 2097153;
      memset(&v30[1], 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v30, *(_DWORD *)(v10 + 36));
      result = sub_140293A88((__int64)v30, (__int64)sub_1405D71E0, (__int64)&v22, 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v20 = v24;
  *a5 = v24;
  if ( v20 > a2 )
    return 3221225476LL;
  *v22 = a3;
  return 0LL;
}
