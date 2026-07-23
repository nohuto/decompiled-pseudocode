/*
 * XREFs of sub_1403D5CF4 @ 0x1403D5CF4
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 */

__int64 __fastcall sub_1403D5CF4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  char v7; // al
  __int64 v8; // rsi
  ULONG_PTR v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // r8
  _QWORD *v20; // r8
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0;
  v7 = 0;
  if ( KeGetCurrentIrql() < 2u && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 && (a5 & 8) == 0 )
    v7 = 64;
  v8 = qword_14001C780[a3];
  v9 = a2 & ~(v8 - 1);
  result = sub_1403872A4(a1, v9, a3, 1LL, v7, &v21);
  v11 = result;
  if ( result )
  {
    LOBYTE(v12) = sub_140268620(result);
    if ( v12 && (a5 & 0x3000000) == 0 )
    {
      sub_1405B766C(v9, a3, 1LL);
      v13 = (unsigned __int8)sub_1402F2700(v11);
      *(_QWORD *)(v11 + 16) = sub_14033B6A0(*(_QWORD *)(v11 + 16), 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
    }
    sub_1402C6AA0(v11, a3, 0, 1, 0LL, 0LL, 0LL);
    if ( a4 )
    {
      v19 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v20 = (_QWORD *)(a4 + 8 * v19);
      do
      {
        *v20++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
