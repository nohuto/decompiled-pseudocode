/*
 * XREFs of sub_14058EB84 @ 0x14058EB84
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x14058FE30 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     sub_1402166E0 @ 0x1402166E0 (sub_1402166E0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_14059FBF4 @ 0x14059FBF4 (sub_14059FBF4.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 */

__int64 __fastcall sub_14058EB84(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rsi
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // r11
  __int64 v7; // r9
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  int v20; // r10d
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // r14
  unsigned __int8 v24; // cf
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 v27; // rdx
  signed __int32 v28; // eax
  __int64 v29; // rcx
  char v30; // r8
  unsigned __int64 v31; // r8
  struct _KPRCB *v32; // r9
  __int64 v33; // rdx
  signed __int32 v34; // eax
  struct _KPRCB *v35; // r10
  __int64 v36; // r9
  int v37; // eax
  unsigned __int8 v38; // cl
  __int64 v39; // r9
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // edx
  __int64 v45; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  int v47; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR v48; // [rsp+88h] [rbp+10h]
  _QWORD *v49; // [rsp+90h] [rbp+18h]
  _QWORD *v50; // [rsp+98h] [rbp+20h]

  v48 = a2;
  v2 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = -1LL;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( BugCheckParameter2 < a2 )
  {
    v8 = (volatile signed __int32 *)(v4 + 24);
    v9 = 0LL;
    v50 = (_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL);
    v10 = v50;
    while ( 1 )
    {
      v49 = v10;
      v11 = v9;
      if ( sub_1402166E0(v3) )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v15 = KeGetCurrentIrql();
            if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v17 = *((_QWORD *)CurrentPrcb + 4375);
              v18 = ~(unsigned __int16)(v6 << (CurrentIrql + 1));
              v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
              *(_DWORD *)(v17 + 20) &= v18;
              if ( v19 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v20 = sub_1405882D0(v3);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v6 = -1LL;
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        if ( v20 >= 0 )
        {
          v22 = v49;
          v12 = v11;
          if ( v20 == 274 )
          {
            ++v46;
            v45 = v11;
            goto LABEL_72;
          }
        }
        else
        {
          --v3;
          v22 = v50 - 6;
          v4 -= 48LL;
          v8 -= 12;
          v12 = v45 - 1;
        }
      }
      else
      {
        v22 = v50;
        if ( v3 <= qword_140C50840 )
        {
          if ( (*v50 & 0x40000000000000LL) == 0 )
            goto LABEL_69;
          v47 = 0;
          while ( _interlockedbittestandset64(v8, 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v47, v12, v13, v14);
            while ( *(__int64 *)v8 < 0 );
          }
          v23 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
          if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
          {
            sub_1405ADDA8(v4, 0LL, 1LL);
            ++v46;
            v24 = _bittest64((const signed __int64 *)(v4 + 40), 0x35u);
            *(_BYTE *)(v4 + 35) &= ~0x80u;
            if ( v24 )
            {
              sub_14059FBF4(v4);
              goto LABEL_55;
            }
            sub_14028CE10(v23, 1LL);
            v25 = 1LL;
            if ( (ULONG_PTR *)v23 == &StartContext )
            {
              v26 = KeGetCurrentPrcb();
              v27 = *((int *)v26 + 8615);
              if ( (_DWORD)v27 != -1 )
              {
                if ( (unsigned __int64)(v27 + 1) <= 0x100 )
                {
                  while ( 1 )
                  {
                    v28 = _InterlockedCompareExchange((volatile signed __int32 *)v26 + 8615, v27 + 1, v27);
                    v19 = (_DWORD)v27 == v28;
                    LODWORD(v27) = v28;
                    if ( v19 )
                      break;
                    if ( v28 == -1 || (unsigned __int64)(v28 + 1LL) > 0x100 )
                      goto LABEL_37;
                  }
LABEL_55:
                  _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
                  if ( CurrentIrql >= 2u )
                    goto LABEL_70;
                  if ( (v45 & 0xF) == 0 )
                  {
                    if ( KeShouldYieldProcessor() )
                    {
                      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 )
                      {
                        v6 = -1LL;
                        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                        {
                          v35 = KeGetCurrentPrcb();
                          v36 = *((_QWORD *)v35 + 4375);
                          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                          v19 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
                          *(_DWORD *)(v36 + 20) &= v37;
                          if ( v19 )
                          {
                            sub_140418E4C((__int64)v35);
                            goto LABEL_63;
                          }
                        }
                      }
                      else
                      {
LABEL_63:
                        v6 = -1LL;
                      }
                      __writecr8(CurrentIrql);
                      v38 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v38 <= 0xFu )
                      {
                        v39 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                        *(_DWORD *)(v39 + 20) |= (-1 << (v38 + 1)) & 4;
                      }
                    }
                    else
                    {
LABEL_70:
                      v6 = -1LL;
                    }
                    v22 = v50;
LABEL_72:
                    v12 = v45;
                    goto LABEL_73;
                  }
                  v12 = v45;
                  v6 = -1LL;
LABEL_69:
                  v22 = v50;
                  goto LABEL_73;
                }
LABEL_37:
                if ( (int)v27 > 192
                  && (_DWORD)v27 == _InterlockedCompareExchange((volatile signed __int32 *)v26 + 8615, 192, v27) )
                {
                  v25 = (int)v27 - 192 + 1LL;
                }
                if ( !v25 )
                  goto LABEL_55;
              }
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16960), v25);
            goto LABEL_55;
          }
          if ( !sub_140273354(v4) )
            goto LABEL_55;
          *(_BYTE *)(v4 + 35) = v30 & 0x7F;
          sub_1405ADEB8(v29, 0LL);
          *(_QWORD *)v8 |= 0x4000000000000000uLL;
          sub_1402C6EB0(v3, 2);
          sub_14028CE10(v23, 1LL);
          v31 = 1LL;
          if ( (ULONG_PTR *)v23 != &StartContext )
            goto LABEL_53;
          v32 = KeGetCurrentPrcb();
          v33 = *((int *)v32 + 8615);
          if ( (_DWORD)v33 == -1 )
            goto LABEL_53;
          if ( (unsigned __int64)(v33 + 1) <= 0x100 )
          {
            do
            {
              v34 = _InterlockedCompareExchange((volatile signed __int32 *)v32 + 8615, v33 + 1, v33);
              v19 = (_DWORD)v33 == v34;
              LODWORD(v33) = v34;
              if ( v19 )
                goto LABEL_54;
            }
            while ( v34 != -1 && (unsigned __int64)(v34 + 1LL) <= 0x100 );
          }
          if ( (int)v33 > 192
            && (_DWORD)v33 == _InterlockedCompareExchange((volatile signed __int32 *)v32 + 8615, 192, v33) )
          {
            v31 = (int)v33 - 192 + 1LL;
          }
          if ( v31 )
LABEL_53:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16960), v31);
LABEL_54:
          ++v46;
          goto LABEL_55;
        }
      }
LABEL_73:
      v10 = v22 + 6;
      v9 = v12 + 1;
      ++v3;
      v50 = v10;
      v4 += 48LL;
      v45 = v9;
      v8 += 12;
      if ( v3 >= v48 )
      {
        v2 = v46;
        break;
      }
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = *((_QWORD *)v41 + 4375);
        v43 = ~(unsigned __int16)(v6 << (CurrentIrql + 1));
        v19 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
        *(_DWORD *)(v42 + 20) &= v43;
        if ( v19 )
          sub_140418E4C((__int64)v41);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
