/*
 * XREFs of sub_1403C6E24 @ 0x1403C6E24
 * Callers:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 * Callees:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1402166A4 @ 0x1402166A4 (sub_1402166A4.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403C7090 @ 0x1403C7090 (sub_1403C7090.c)
 *     sub_1403C736C @ 0x1403C736C (sub_1403C736C.c)
 *     sub_1403D240C @ 0x1403D240C (sub_1403D240C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403C6E24(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 *BugCheckParameter4; // r11
  _QWORD *v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // r10
  ULONG_PTR v11; // rdx
  int v12; // ebp
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // r8
  bool v16; // zf
  unsigned __int8 CurrentIrql; // r15
  int v18; // r15d
  unsigned int v19; // edx
  int v20; // r12d
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned __int8 v24; // cl
  __int64 v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  ULONG_PTR v30; // [rsp+48h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp+8h] BYREF
  int v32; // [rsp+A8h] [rbp+10h]
  unsigned int v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  BugCheckParameter4 = 0LL;
  v32 = 0;
  v8 = 0LL;
  *a5 = 0;
  v9 = 1;
  v10 = 2LL;
  if ( a3 >> 3 == 1 )
  {
    v9 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v9 = 2;
  }
  if ( BugCheckParameter2 <= qword_140C50840
    && _bittest64((const signed __int64 *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v11 = 48 * BugCheckParameter2 - 0x220000000000LL;
    v31 = 1;
  }
  else
  {
    v31 = 0;
    v11 = 0LL;
  }
  v30 = v11;
  v12 = 3;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = v11 + 34;
    while ( 1 )
    {
      v15 = v13 + BugCheckParameter2;
      if ( v13 + BugCheckParameter2 <= qword_140C50840
        && (*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      {
        if ( ((unsigned __int8)a4 & (unsigned __int8)v10) != 0
          && ((*(_BYTE *)v14 & 7) != 5 || !_bittest64((const signed __int64 *)(v14 + 6), 0x35u)) )
        {
          KeBugCheckEx(0x1Au, 0x1160CuLL, v15, 0LL, (ULONG_PTR)BugCheckParameter4);
        }
        if ( !v11 )
          break;
        v24 = *(_BYTE *)v14;
        if ( (*(_BYTE *)v14 & 0xC0) == 0xC0 )
        {
          sub_1403D240C(v14 - 34, v9);
          v24 = *(_BYTE *)v14;
          BugCheckParameter4 = 0LL;
          v10 = 2LL;
        }
        if ( v24 >> 6 != v9 )
          break;
        v12 = v9;
      }
      else
      {
        if ( v11 )
          break;
        if ( !v13 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(v10);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v25 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v25 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v8 = sub_1402166A4(BugCheckParameter2, a2);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v26 = KeGetCurrentIrql();
              if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= (unsigned __int8)v10 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v28 = *((_QWORD *)CurrentPrcb + 4375);
                v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v16 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
                *(_DWORD *)(v28 + 20) &= v29;
                if ( v16 )
                {
                  sub_140418E4C(CurrentPrcb);
                  BugCheckParameter4 = 0LL;
                }
                v10 = 2LL;
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( v8 )
          {
            if ( BugCheckParameter2 >= v8[3] && BugCheckParameter2 + a2 - 1 <= v8[4] )
            {
              v12 = *((_DWORD *)v8 + 10);
              goto LABEL_19;
            }
          }
        }
      }
      ++v13;
      v14 += 48LL;
      v16 = v13 == a2;
      if ( v13 >= a2 )
        goto LABEL_18;
      v11 = v30;
      LOBYTE(a4) = v34;
    }
  }
  v16 = v13 == a2;
LABEL_18:
  if ( !v16 )
    return 0LL;
LABEL_19:
  v18 = v31;
  if ( v31 || v8 )
  {
    v20 = v32;
    goto LABEL_27;
  }
  v31 = (int)BugCheckParameter4;
  if ( (int)sub_140215E54(1, BugCheckParameter2, a2, v9, &v31, BugCheckParameter4) < 0 )
    return 0LL;
  v19 = v31;
  if ( ((v31 - 1) & v31) != 0 )
  {
    sub_140215AA8(1, BugCheckParameter2, a2);
    return 0LL;
  }
  v12 = 0;
  while ( (v19 & 1) == 0 )
  {
    ++v12;
    v19 >>= 1;
  }
  v20 = 1;
LABEL_27:
  sub_1402C1550(BugCheckParameter2);
  v21 = sub_1403C736C(a2, 9LL, 1LL);
  if ( v21 )
  {
    v22 = (unsigned int)sub_14026DFC0(3);
    sub_1403C7090(v22, v21, BugCheckParameter2, a2, 1, v33, v12);
    if ( v20 )
      *a5 |= 1u;
  }
  else if ( !v18 && !v8 )
  {
    sub_140215AA8(1, BugCheckParameter2, a2);
  }
  return v21;
}
