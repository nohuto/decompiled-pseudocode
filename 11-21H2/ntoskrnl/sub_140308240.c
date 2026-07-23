/*
 * XREFs of sub_140308240 @ 0x140308240
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_14022FA04 @ 0x14022FA04 (sub_14022FA04.c)
 *     sub_14023EF1C @ 0x14023EF1C (sub_14023EF1C.c)
 *     sub_1402FF090 @ 0x1402FF090 (sub_1402FF090.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056C1B0 (KeFindFirstSetRightAffinityEx.c)
 *     sub_14056CDBC @ 0x14056CDBC (sub_14056CDBC.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 *     sub_14057AA10 @ 0x14057AA10 (sub_14057AA10.c)
 *     sub_14063DF48 @ 0x14063DF48 (sub_14063DF48.c)
 */

void __fastcall sub_140308240(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int32 v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // r8
  char v8; // di
  struct _KPRCB *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // r15
  unsigned int FirstSetRightAffinity; // r15d
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int32 v20; // edi
  __int64 *v21; // r9
  __int64 *v22; // r8
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  _BOOL8 v35; // rcx
  unsigned __int8 v36; // r14
  __int64 v37; // r10
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  int v41; // eax
  unsigned __int64 v42; // rdi
  unsigned __int8 v43; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v44[7]; // [rsp+39h] [rbp-18h] BYREF
  __int64 v45; // [rsp+40h] [rbp-11h] BYREF
  __int64 v46; // [rsp+48h] [rbp-9h] BYREF
  __int64 v47; // [rsp+50h] [rbp-1h] BYREF
  LARGE_INTEGER v48; // [rsp+58h] [rbp+7h] BYREF
  __int128 v49; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v50[2]; // [rsp+70h] [rbp+1Fh] BYREF

  v46 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48.QuadPart = 0LL;
  v44[0] = 0;
  v43 = 0;
  if ( (_BYTE)dword_140D05304 )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v3 = dword_140D31000;
    if ( dword_140D31000 == 1 )
    {
      v3 = _InterlockedCompareExchange(&dword_140D31000, 3, 1);
      if ( v3 == 1 )
        break;
    }
    if ( v3 != 3 )
      goto LABEL_6;
    _mm_pause();
  }
  sub_14020F07C(0LL, 1, (__int64)&v45, (__int64)&v48);
  qword_140C2B1A8 = v45;
  if ( dword_140D06960 - 1 + (int)v45 - (int)qword_140C4E940 >= (unsigned int)dword_140D069B8 )
    qword_140C4E940 = v45;
  v10 = (unsigned int)(v45 - qword_140C4E948);
  v11 = v45;
  v12 = (unsigned int)(v10 + dword_140D06960 - 1);
  if ( (unsigned int)v12 >= dword_140D06984 )
    qword_140C4E948 = v45;
  v15 = sub_14042A5E0(v12, v10);
  if ( byte_140C2B1B0 )
  {
    if ( a1 )
    {
      v14 = *((unsigned int *)CurrentPrcb + 9);
      if ( (_DWORD)dword_140C2B1C0 == (_DWORD)v14 )
      {
        v14 = qword_140C2B1A0;
        if ( v11 >= qword_140C2B1A0 )
        {
          if ( v15 )
            *a1 = v11 - qword_140C2B1A0;
        }
      }
    }
    byte_140C2B1B0 = 0;
  }
  if ( a1
    && (_DWORD)dword_140C2B1C0 == *((_DWORD *)CurrentPrcb + 9)
    && v11 >= qword_140C2B1A0
    && (unsigned __int8)sub_14042A5E0(v14, v13) )
  {
    *a1 = v11 - qword_140C2B1A0;
  }
  byte_140C2B1B0 = 0;
  if ( v11 - qword_140C2B1B8 < qword_140C2B168 )
    qword_140C2B168 = v11 - qword_140C2B1B8;
  if ( v11 - qword_140C2B1B8 > qword_140C2B160 )
    qword_140C2B160 = v11 - qword_140C2B1B8;
  if ( byte_140C2B580 )
  {
    if ( v15 && (unsigned int)sub_14057AA10(v11, v44, &v43) )
      sub_14063DF48(v44[0], v43);
    sub_14056CDBC(CurrentPrcb, v11);
    byte_140C2B580 = 0;
  }
  if ( !byte_140D068E5 )
  {
    v17 = *((_DWORD *)CurrentPrcb + 9);
LABEL_36:
    if ( v11 + (unsigned int)dword_140C2B1C8 > qword_140C2B1A0 )
    {
      ++qword_140C2B158;
      v20 = 2;
      v21 = 0LL;
      v24 = 2;
      v22 = 0LL;
    }
    else
    {
      if ( byte_140D068E5 )
      {
        *((_BYTE *)CurrentPrcb + 33) = 1;
        LODWORD(dword_140C2B1C0) = v17;
        if ( !sub_14023EF1C() )
        {
          sub_14042A5E0(v19, v18);
          *((_BYTE *)CurrentPrcb + 37128) = 1;
        }
      }
      if ( byte_140D06889 && *((_BYTE *)CurrentPrcb + 33) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v28 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v11 = v45;
          *(_DWORD *)(v28 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        sub_14056CF48((_DWORD)CurrentPrcb, -DesiredTime, DesiredTime, 3, 1, 0);
        LOBYTE(v29) = 1;
        sub_14056CFD8(CurrentPrcb, v29);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = *((_QWORD *)v31 + 4375);
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
              *(_DWORD *)(v32 + 20) &= v33;
              if ( v34 )
                sub_140418E4C(v31);
              v11 = v45;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      v20 = 0;
      sub_14022F864(v11, &v47, (int *)&v46);
      v21 = &v47;
      v22 = &v46;
      v23 = v11 + (unsigned int)dword_140D06938;
      *((_QWORD *)CurrentPrcb + 4624) = v11 + v46;
      v24 = 0;
      qword_140C2B1A0 = v23;
    }
    sub_14022FA04(v24, 1, v22, v21);
    goto LABEL_43;
  }
  sub_1402FF090(word_140C0B7A0, &qword_140C2B7F0);
  FirstSetRightAffinity = *((_DWORD *)CurrentPrcb + 9);
  if ( !(unsigned int)KeCheckProcessorAffinityEx(word_140C0B7A0, FirstSetRightAffinity) )
  {
    FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&dword_140C2AB00);
    if ( FirstSetRightAffinity == -1 )
      FirstSetRightAffinity = *((_DWORD *)CurrentPrcb + 9);
  }
  v17 = *((_DWORD *)CurrentPrcb + 9);
  if ( v17 == FirstSetRightAffinity )
    goto LABEL_36;
  ++qword_140C2B158;
  v20 = 2;
  sub_14022FA04(2, 1, 0LL, 0LL);
  LODWORD(dword_140C2B1C0) = FirstSetRightAffinity;
  sub_14022F244();
LABEL_43:
  if ( byte_140C2B1B1 )
  {
    byte_140C2B1B1 = 0;
    v35 = (unsigned __int8)sub_14042A5E0(v26, v25) == 0;
    sub_14057A428(v35, 0LL);
  }
  v49 = 0LL;
  if ( (DWORD2(xmmword_140D06900) & 0x100000) != 0 )
  {
    DWORD2(v49) = dword_140C2B1C0;
    v50[0] = &v49;
    *(_QWORD *)&v49 = v11;
    v50[1] = 16LL;
    sub_14035EDE4((unsigned int)v50, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&dword_140D31000, v20);
LABEL_6:
  v4 = *((unsigned int *)CurrentPrcb + 9);
  if ( (_DWORD)dword_140C2B1C0 == (_DWORD)v4 && !*((_BYTE *)CurrentPrcb + 33) )
    *((_BYTE *)CurrentPrcb + 33) = 1;
  v5 = *((unsigned __int8 *)CurrentPrcb + 33);
  v6 = (unsigned __int8)v5;
  if ( !(_BYTE)v5 )
  {
    v7 = *(volatile signed __int32 **)(qword_140D088C0[v4] + 35000);
    if ( v7 )
    {
      if ( (dword_140D068EC & 0x40) != 0 )
      {
        _InterlockedAnd(v7, 0xFFF7FFFF);
        v6 = *((unsigned __int8 *)CurrentPrcb + 33);
      }
    }
  }
  v8 = 0;
  if ( byte_140D068E5 )
    v9 = KeGetCurrentPrcb();
  else
    v9 = (struct _KPRCB *)qword_140D088C0[(unsigned int)dword_140C2B1C0];
  if ( (*((_BYTE *)v9 + 34) & 1) != 0 )
    goto LABEL_17;
  if ( (_BYTE)v6 || byte_140D06889 )
  {
    sub_14042A5E0(v5, v6);
    *((_BYTE *)CurrentPrcb + 37128) = 1;
    v8 = 1;
LABEL_17:
    if ( byte_140D06889 )
    {
      v36 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v36 <= 0xFu )
      {
        v37 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v37 + 20) |= (-1 << (v36 + 1)) & 0xFFFC;
      }
      sub_14056CF48((_DWORD)CurrentPrcb, -DesiredTime, DesiredTime, 3, 1, 0);
      v6 = *((unsigned __int8 *)CurrentPrcb + 33);
      if ( (_BYTE)v6 || !dword_140D05038 )
        sub_14056CFD8(CurrentPrcb, v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && v36 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v5 = (unsigned int)v36 + 1;
            v40 = *((_QWORD *)v39 + 4375);
            v41 = ~(unsigned __int16)(-1LL << (v36 + 1));
            v34 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
            v6 = (unsigned int)v41 & *(_DWORD *)(v40 + 20);
            *(_DWORD *)(v40 + 20) = v6;
            if ( v34 )
              sub_140418E4C(v39);
          }
        }
      }
      __writecr8(v36);
      if ( v8 )
      {
        v42 = KeQueryInterruptTimePrecise(&v48);
        sub_14022F864(v42, &v47, (int *)&v46);
        if ( *((_BYTE *)CurrentPrcb + 33) )
        {
          v5 = v42 + (unsigned int)dword_140D06938;
          qword_140C2B1A0 = v5;
        }
        *((_QWORD *)CurrentPrcb + 4624) = v42 + v46;
      }
    }
  }
  if ( !*((_BYTE *)CurrentPrcb + 33) && (*((_BYTE *)CurrentPrcb + 34) & 1) != 0 && !byte_140D06889 )
  {
    sub_14042A5E0(v5, v6);
    sub_14022F96C(0);
    *((_BYTE *)CurrentPrcb + 37128) = 0;
  }
}
