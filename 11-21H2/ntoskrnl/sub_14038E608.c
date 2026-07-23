/*
 * XREFs of sub_14038E608 @ 0x14038E608
 * Callers:
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14038E4BC @ 0x14038E4BC (sub_14038E4BC.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 * Callees:
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14038E94C @ 0x14038E94C (sub_14038E94C.c)
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 *     sub_14038ECAC @ 0x14038ECAC (sub_14038ECAC.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 */

__int64 __fastcall sub_14038E608(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v10; // r11
  __int64 v11; // r11
  __int64 v12; // rdx
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // al
  char v17; // al
  int v18; // r8d
  __int64 v20; // r9
  char v21; // al
  ULONG_PTR v22; // rcx
  __int64 v23; // r11
  signed __int32 v24; // eax
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int16 v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // edx
  bool v34; // zf
  BOOL v37; // [rsp+40h] [rbp-81h]
  int v38; // [rsp+44h] [rbp-7Dh] BYREF
  __int64 v39; // [rsp+48h] [rbp-79h] BYREF
  __int64 v40; // [rsp+50h] [rbp-71h]
  __int64 v41; // [rsp+58h] [rbp-69h]
  __int64 v42; // [rsp+60h] [rbp-61h]
  __int128 v43; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v44[112]; // [rsp+78h] [rbp-49h] BYREF

  v3 = 0;
  v38 = 0;
  memset(v44, 0, 0x68uLL);
  v5 = a2;
  v39 = 0LL;
  v6 = -1LL;
  v40 = -1LL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = -1LL;
  v37 = 0;
  CurrentIrql = 17;
  v42 = -1LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v41 = 88LL * v3 + a1 + 2880;
      if ( *(_QWORD *)(v41 + 16) == 0x3FFFFFFFFFLL )
        goto LABEL_3;
      memset(v44, 0, 0x68uLL);
      if ( CurrentIrql == 17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            v6 = v40;
            *(_DWORD *)(v20 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
        }
      }
      v10 = (_QWORD *)v39;
      if ( v39 )
        goto LABEL_34;
      if ( (*(_DWORD *)(a1 + 4) & 0x100) == 0 )
      {
        v11 = *(_QWORD *)(a1 + 16640);
        if ( v11 != a1 + 16640 )
        {
          v10 = *(_QWORD **)(v11 - 8);
          if ( v10 )
            break;
        }
      }
      v39 = 1LL;
LABEL_11:
      v8 = sub_14038E94C(a1, v44, v3);
      if ( v8 != -1 || (v8 = sub_14038ECAC(a1, v12, v3, &v38), v8 != -1) )
      {
        v7 = 48 * v8 - 0x220000000000LL;
        if ( !sub_140277C50(v7) )
        {
          v5 = a2;
          goto LABEL_14;
        }
        sub_140338D00(v41, (__int64)v44);
        v21 = sub_140326870(48 * v8 - 0x220000000000LL, 0);
        v22 = 48 * v8 - 0x220000000000LL;
        if ( (v21 & 3) != 0 )
        {
          sub_1403941B0(v22, 0LL);
        }
        else
        {
          *(_BYTE *)(v7 + 35) &= 0xF8u;
          sub_1402BF9C0(v22, 0x800u);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = v40;
LABEL_38:
        --v3;
        goto LABEL_3;
      }
      if ( v38 )
        goto LABEL_38;
LABEL_3:
      v5 = a2;
      if ( ++v3 >= a2 )
        goto LABEL_14;
    }
    v39 = (__int64)v10;
LABEL_34:
    if ( (unsigned __int64)v10 > 1
      && v6 == -1
      && (a3 & 0x2000) == 0
      && ((unsigned __int64)sub_140266B40(v10, 0) >= 0x100 || *(_QWORD *)(v23 + 16896) >= 0x4000uLL) )
    {
      v43 = 0LL;
      sub_140339C20(0LL, 0, (__int64)&v43);
      v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v43, 1u);
      v26 = sub_1403250B0(v25, DWORD2(v43) & (unsigned int)v24 | HIDWORD(v43), 0);
      v27 = v39;
      v6 = v26;
      v40 = v26;
      if ( v26 == -1 )
        v27 = 1LL;
      v39 = v27;
    }
    goto LABEL_11;
  }
LABEL_14:
  if ( v3 != v5 )
  {
    if ( v6 == -1
      || (*(_BYTE *)(v7 + 34) & 0xC0) != 0x40
      || (unsigned int)sub_140313B20(v7, 1, 0LL)
      || (v13 = (unsigned __int64 *)(v7 + 16), v28 = *(_QWORD *)(v7 + 16), (v28 & 0x400) == 0)
      && ((v28 & 4) == 0
       || (unsigned int)sub_140232E74(a1, *(_QWORD *)(v7 + 16))
       || _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 8LL * (v29 >> 12) + 16736) + 204LL), 0xBu)) )
    {
      sub_14038EB20(a1, (unsigned int)v44, v41, v8, a3);
      v13 = (unsigned __int64 *)(v7 + 16);
      v14 = *(_QWORD *)(v7 + 16);
      if ( (v14 & 0x400) != 0 )
        v15 = v14 >> 11;
      else
        v15 = v14 >> 3;
      v37 = (v15 & 1) != 0;
    }
    else
    {
      sub_1405B3EB4(v7, (__int64)&v39);
    }
    v16 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)(v7 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v7 + 34) = v16 & 0xC7;
    *(_BYTE *)(v7 + 35) &= ~0x20u;
    v17 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)v7 = 0LL;
    *(_BYTE *)(v7 + 34) = v17 & 0xF8 | 5;
    *v13 = 0LL;
    sub_1402E89B0(v13);
    if ( v37 )
      *v13 = sub_14033B6A0(*v13, 4294967293LL);
    if ( v18 )
      v42 = v8;
    else
      sub_14026845C(v7, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = v40;
  }
  if ( v6 != -1 )
    sub_140268408(48 * v6 - 0x220000000000LL);
  if ( CurrentIrql != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = *((_QWORD *)CurrentPrcb + 4375);
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
          *(_DWORD *)(v32 + 20) &= v33;
          if ( v34 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v42;
}
