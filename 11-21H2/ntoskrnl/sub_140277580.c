/*
 * XREFs of sub_140277580 @ 0x140277580
 * Callers:
 *     sub_14027738C @ 0x14027738C (sub_14027738C.c)
 * Callees:
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_140235E40 @ 0x140235E40 (sub_140235E40.c)
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     sub_1402446B4 @ 0x1402446B4 (sub_1402446B4.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     sub_14027924C @ 0x14027924C (sub_14027924C.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402E8240 @ 0x1402E8240 (sub_1402E8240.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14038719C @ 0x14038719C (sub_14038719C.c)
 *     sub_1403CC0F0 @ 0x1403CC0F0 (sub_1403CC0F0.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405AF29C @ 0x1405AF29C (sub_1405AF29C.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 */

__int64 __fastcall sub_140277580(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r12d
  __int64 v5; // r13
  int v7; // r14d
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  __int64 v13; // r11
  char v14; // dl
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ebp
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r8d
  unsigned __int64 v24; // rcx
  int v25; // ebp
  int v26; // ebp
  __int64 v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  __int64 v33; // r10
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  __int64 v49; // r9
  __int64 v50; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v53; // r8
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  __int64 v57; // r8
  int v58; // eax
  signed __int32 v59[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v60; // [rsp+40h] [rbp-78h] BYREF
  int v61; // [rsp+44h] [rbp-74h]
  __int64 v62; // [rsp+48h] [rbp-70h] BYREF
  __int64 v63; // [rsp+50h] [rbp-68h]
  __int64 v64; // [rsp+58h] [rbp-60h]
  __int64 v65; // [rsp+60h] [rbp-58h]
  unsigned __int8 v66; // [rsp+C0h] [rbp+8h]
  int v67; // [rsp+C8h] [rbp+10h]
  int v68; // [rsp+D0h] [rbp+18h] BYREF
  int v69; // [rsp+D8h] [rbp+20h]

  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 24);
  v5 = *(_QWORD *)a1;
  v63 = *(_QWORD *)(a1 + 8);
  v61 = *(_DWORD *)(a1 + 32);
  v60 = 0;
  v68 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v7 = v3 & 0x400000;
  if ( (v3 & 0x400000) != 0 )
    v69 = *(_DWORD *)(a1 + 28);
  else
    v69 = -1;
  v62 = -1LL;
  v64 = 0LL;
  v8 = 48 * a2 - 0x220000000000LL;
  v9 = sub_1402F2700(v8);
  while ( 1 )
  {
    while ( 1 )
    {
      v66 = v9;
      while ( 1 )
      {
        if ( !(unsigned int)sub_1402B2E00(a2) )
          goto LABEL_163;
        v10 = *(_QWORD *)(v8 + 40);
        if ( *(_QWORD *)(qword_140C51F48 + 8 * ((v10 >> 43) & 0x3FF)) != v5 )
        {
          v50 = (unsigned int)sub_14027924C(&StartContext, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v66 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v53 = *((_QWORD *)CurrentPrcb + 4375);
                v54 = ~(unsigned __int16)(-1LL << (v66 + 1));
                v35 = (v54 & *(_DWORD *)(v53 + 20)) == 0;
                *(_DWORD *)(v53 + 20) &= v54;
                if ( v35 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v66);
          if ( (_DWORD)v50 != -1 )
            *(_QWORD *)(a1 + 48) = qword_14001C780[v50];
          ++dword_140C29DC4;
          goto LABEL_23;
        }
        v11 = *(_BYTE *)(v8 + 34) & 7;
        v67 = -1;
        if ( (v10 & 0x10000000000LL) != 0 )
        {
          v65 = sub_140235E40(v8);
          v11 = *(_BYTE *)(v65 + 34) & 7;
          v28 = sub_140235E10(v65);
          v67 = v28;
          if ( v65 != v8 )
            _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v11 == 6 )
          {
            ++dword_140C29DCC;
            *(_QWORD *)(a1 + 48) = qword_14001C780[v28];
            goto LABEL_20;
          }
        }
        if ( v11 != 5 )
          goto LABEL_9;
        if ( sub_140273354(v8) )
        {
          ++dword_140C29DD4;
          goto LABEL_20;
        }
        if ( v23 != -1 )
          break;
        if ( !sub_140273A80(*(_QWORD *)(v8 + 16)) )
          goto LABEL_48;
        if ( qword_140C50780 )
        {
          if ( (v24 & 0x10) != 0 )
            v24 &= ~0x10uLL;
          else
            v24 &= ~qword_140C50780;
        }
        if ( HIDWORD(v24) != 4294967294 )
        {
LABEL_48:
          ++dword_140C29DD8;
          goto LABEL_20;
        }
        if ( v64 == v8 )
        {
          ++dword_140C29DDC;
          goto LABEL_20;
        }
        v25 = *(_DWORD *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4)) + 8);
        v26 = ((unsigned int)sub_1402E8990(v8) << byte_140C506CD) | dword_140C50738 & a2 | (v25 << byte_140C506CC);
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && v66 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = *((_QWORD *)v32 + 4375);
              v34 = ~(unsigned __int16)(-1LL << (v66 + 1));
              v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
              *(_DWORD *)(v33 + 20) &= v34;
              if ( v35 )
                sub_140418E4C(v32);
            }
          }
        }
        __writecr8(v66);
        v27 = *(_QWORD *)(a1 + 16);
        ++dword_140C29DA0;
        sub_1402416A4(v5, v8, v27, v26);
        v64 = v8;
        sub_1402F2700(v8);
      }
      v11 = 1;
LABEL_9:
      if ( _bittest64((const signed __int64 *)(v8 + 40), 0x35u) || (unsigned int)sub_140277C50(v8) )
      {
LABEL_163:
        ++dword_140C29DBC;
        goto LABEL_20;
      }
      if ( v11 <= 1 )
      {
        if ( v12 == -1 )
        {
          if ( v7 || (unsigned int)sub_1402C8740(a2) )
          {
            ++dword_140C29D9C;
            v2 = 1LL;
            sub_1402446B4(a1, a2, 0);
          }
          else
          {
            ++dword_140C29DE4;
            sub_14026845C(v8, 0LL);
          }
          goto LABEL_20;
        }
        v65 = v12;
        v29 = qword_14001C780[v12];
        if ( (v3 & 0x2000000) != 0 && v29 >= 0x200 || (v3 & 0x1000000) != 0 && v29 == 16 )
          goto LABEL_20;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v66 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = *((_QWORD *)v37 + 4375);
              v39 = ~(unsigned __int16)(-1LL << (v66 + 1));
              v35 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
              *(_DWORD *)(v38 + 20) &= v39;
              if ( v35 )
                sub_140418E4C(v37);
              v12 = v67;
            }
          }
        }
        __writecr8(v66);
        if ( (a2 & ~(v29 - 1)) == a2 && (v3 & 0x400000) == 0 && *(_QWORD *)(a1 + 16) >= v29 )
        {
          v30 = v29 + a2 - 1;
          if ( v30 <= *(_QWORD *)(a1 + 56) )
          {
            if ( (unsigned int)sub_1403D5CF4(v5, v30, v12, *(_QWORD *)(a1 + 64), v3) )
            {
              dword_140C29D9C += v29;
              v2 = v29;
              if ( *(_QWORD *)(a1 + 64) )
              {
                if ( sub_140268A70(v8, v61) )
                  *(_QWORD *)(v49 + 24) = 1LL;
              }
              goto LABEL_23;
            }
            v12 = v67;
          }
        }
        if ( !(unsigned int)sub_14038719C(v5, a2, v12, v3, (__int64)&v68) && !v68 )
        {
          if ( (unsigned int)sub_1405AF29C(v8) )
          {
            ++dword_140C29DD0;
          }
          else
          {
            ++dword_140C29DC8;
            *(_QWORD *)(a1 + 48) = qword_14001C780[v65];
          }
          goto LABEL_23;
        }
        goto LABEL_69;
      }
      v13 = v63;
      if ( !*(_QWORD *)(v63 + 16) || (v14 = *(_BYTE *)(v8 + 35), v14 < 0) )
      {
        if ( v11 == 2 )
        {
          if ( *(_WORD *)(v8 + 32) )
          {
            ++dword_140C29DE8;
          }
          else if ( (unsigned int)sub_1405B3FA4(v8) )
          {
            v2 = 1LL;
            sub_1402446B4(a1, a2, 1);
          }
          else
          {
            sub_14026845C(v8, 0LL);
            ++dword_140C29DE4;
          }
          goto LABEL_20;
        }
        if ( v11 == 6
          && (*(_BYTE *)(v8 + 34) & 0x10) == 0
          && *(_WORD *)(v8 + 32) == 1
          && ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 2
          && (*(_BYTE *)v8 & 1) != 0 )
        {
          v14 = *(_BYTE *)(v8 + 35);
          if ( (v14 & 8) == 0 )
            goto LABEL_16;
        }
        ++dword_140C29DF4;
LABEL_20:
        if ( v66 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v55 = KeGetCurrentIrql();
              if ( v55 <= 0xFu && v66 <= 0xFu && v55 >= 2u )
              {
                v56 = KeGetCurrentPrcb();
                v57 = *((_QWORD *)v56 + 4375);
                v58 = ~(unsigned __int16)(-1LL << (v66 + 1));
                v35 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
                *(_DWORD *)(v57 + 20) &= v58;
                if ( v35 )
                  sub_140418E4C(v56);
              }
            }
          }
          __writecr8(v66);
        }
        goto LABEL_23;
      }
      if ( v11 > 4 )
        break;
      if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x28u) && (v3 & 0x4000000) == 0 && *(__int64 *)(v8 + 8) > 0 )
      {
        ++dword_140C29DF8;
        goto LABEL_20;
      }
      if ( (v3 & 0x200000) != 0 && ((v14 & 0x40) != 0 || sub_140273354(v8)) )
      {
LABEL_108:
        ++dword_140C29DFC;
        goto LABEL_20;
      }
      v22 = sub_1402E8240(v8, v66, v13, v69, v3, (__int64)&v62);
      if ( v22 == 3 )
      {
        if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v5 )
          goto LABEL_142;
        if ( !v7 )
        {
LABEL_40:
          v2 = 1LL;
          sub_1402446B4(a1, a2, 1);
          goto LABEL_23;
        }
        v21 = v8;
LABEL_144:
        sub_1403CC0F0(v21);
        goto LABEL_40;
      }
      if ( v22 != 2 )
        goto LABEL_23;
LABEL_69:
      v9 = sub_1402F2700(v8);
    }
    if ( v11 != 6 )
    {
      ++dword_140C29E04;
      goto LABEL_20;
    }
LABEL_16:
    if ( (v3 & 0x200000) != 0 && ((v14 & 0x40) != 0 || sub_140273354(v8)) )
      goto LABEL_108;
    if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 2 )
      break;
    if ( (v3 & 8) != 0 )
      goto LABEL_147;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && v66 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << (v66 + 1));
          v35 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v35 )
          {
            sub_140418E4C(v41);
            v13 = v63;
          }
        }
      }
    }
    __writecr8(v66);
    if ( (unsigned int)sub_140249930(v5, v8, v13, *(_DWORD *)(a1 + 28), v3, &v62, &v60) )
    {
      if ( v60 )
        ++dword_140C29DA8;
      else
        ++dword_140C29DB4;
LABEL_32:
      *(_QWORD *)(v8 + 16) = 0LL;
      sub_1402E89B0(v8 + 16, v18, v19);
      v21 = v8;
      if ( !v7 )
      {
        _InterlockedOr(v59, 0);
        sub_14033C33C(v8, (unsigned int)dword_140D31080, 0LL);
        goto LABEL_40;
      }
      goto LABEL_144;
    }
    if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 2 )
    {
      ++dword_140C29E08;
      goto LABEL_23;
    }
    v9 = sub_1402F2700(v8);
    ++dword_140C29DB8;
  }
  v15 = sub_140278960(v5, v8, 1LL);
  if ( v15 )
  {
    ++dword_140C29E8C;
    *(_QWORD *)(a1 + 48) = v15;
    goto LABEL_20;
  }
  if ( (v3 & 8) != 0 )
  {
LABEL_147:
    ++dword_140C29E00;
    goto LABEL_20;
  }
  if ( *(__int64 *)(v8 + 40) < 0 )
    v17 = sub_14023F658(v8, v66, v3);
  else
    v17 = DnsPrint_RpcZoneInfo(v8, *(_DWORD *)(a1 + 28), (__int64)&v62);
  v20 = v17;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && v66 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v18 = -1LL << (v66 + 1);
        v46 = *((_QWORD *)v45 + 4375);
        v47 = ~(unsigned __int16)v18;
        v35 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
        v19 = (unsigned int)v47 & *(_DWORD *)(v46 + 20);
        *(_DWORD *)(v46 + 20) = v19;
        if ( v35 )
          sub_140418E4C(v45);
      }
    }
  }
  __writecr8(v66);
  if ( !v20 )
  {
    ++dword_140C29E10;
    goto LABEL_23;
  }
  if ( v20 == 2 )
    goto LABEL_69;
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) == v5 )
  {
    ++dword_140C29DAC;
    goto LABEL_32;
  }
LABEL_142:
  ++dword_140C29DC4;
  sub_1403CC0F0(v8);
LABEL_23:
  result = v2;
  *(_QWORD *)(a1 + 40) = v62;
  return result;
}
