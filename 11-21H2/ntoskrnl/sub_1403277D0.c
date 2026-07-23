/*
 * XREFs of sub_1403277D0 @ 0x1403277D0
 * Callers:
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_14024DD20 @ 0x14024DD20 (sub_14024DD20.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14038E94C @ 0x14038E94C (sub_14038E94C.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 */

__int64 __fastcall sub_1403277D0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // r13d
  __int64 v7; // r15
  __int64 v8; // r11
  ULONG_PTR v9; // rsi
  int v10; // r12d
  volatile LONG *v11; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v13; // rcx
  signed __int32 v14; // ett
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  char v20; // al
  int v21; // r9d
  ULONG_PTR v22; // r8
  char *v23; // rax
  __int64 v24; // r12
  char v25; // al
  __int64 v26; // rsi
  unsigned int v27; // eax
  int v28; // r8d
  __int64 v29; // r9
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  int v37; // r10d
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // [rsp+30h] [rbp-68h]
  volatile LONG *SpinLock; // [rsp+A8h] [rbp+10h]

  v4 = 0LL;
  v5 = 0;
  v7 = a2;
  v8 = a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( v9 < qword_140C52CE0 || v9 >= qword_140C52CE0 + 2048 )
  {
    v10 = 0;
    if ( byte_140C58C66 && _bittest64((const signed __int64 *)qword_140C58DE0, v9 >> 9) )
      v5 = 1;
  }
  else
  {
    v10 = 1;
  }
  v11 = (volatile LONG *)(a1 + 32);
  SpinLock = (volatile LONG *)(a1 + 32);
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    sub_140461B20(a1 + 32, a2);
LABEL_57:
    v8 = a1;
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v40 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = v40 + 1;
      if ( v40 == -1 )
      {
        sub_140418E4C(CurrentPrcb);
        v8 = a1;
        v11 = SpinLock;
      }
    }
  }
  _m_prefetchw((const void *)v11);
  v14 = *v11 & 0x7FFFFFFF;
  if ( v14 != _InterlockedCompareExchange(v11, v14 + 1, v14) )
  {
    v39 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v39 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v41 = *(_DWORD *)(v39 + 24) - 1;
        *(_DWORD *)(v39 + 24) = v41;
        if ( !v41 )
        {
          sub_140418E4C(CurrentPrcb);
          v11 = SpinLock;
        }
      }
    }
    LOBYTE(a2) = -1;
    sub_140366A20(v11, a2);
    goto LABEL_57;
  }
LABEL_8:
  v15 = *(_QWORD *)v7 & 0xFFFFFFFFFFLL;
  v16 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL;
  if ( v16 == 0x3FFFFFFFFFLL )
    v17 = v8 + 40;
  else
    v17 = 48 * v16 - 0x220000000000LL;
  v18 = v8 + 40;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a4 + 16) = v17;
    v19 = a4 + 16;
    *(_QWORD *)(a4 + 8) = v16;
    *(_BYTE *)(a4 + 24) = 1;
    if ( v15 != 0x3FFFFFFFFFLL )
      v18 = 48 * v15 - 0x220000000000LL;
    if ( v15 == v16 )
    {
      v20 = 0;
LABEL_16:
      *(_BYTE *)(a4 + 48) = v20;
      if ( *(_DWORD *)(v8 + 8) == 2 && !v10 && !v5 )
      {
        v42 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(48 * v9 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
        v21 = dword_140C506C8;
        v22 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v9) >> 4);
        if ( dword_140C506C4 > (unsigned int)dword_140C506C8
          || (v23 = (char *)qword_140C50708 + 16 * dword_140C506C4, v22 < *(_QWORD *)v23)
          || dword_140C506C4 != dword_140C506C8 && v22 >= *((_QWORD *)v23 + 2) )
        {
          v37 = 0;
          if ( dword_140C506C8 < 0 )
LABEL_77:
            KeBugCheckEx(0x1Au, 0x6201uLL, v22, 0LL, 0LL);
          while ( 1 )
          {
            v38 = (v37 + v21) >> 1;
            v23 = (char *)qword_140C50708 + 16 * v38;
            if ( v22 < *(_QWORD *)v23 )
            {
              if ( !v38 )
                KeBugCheckEx(0x1Au, 0x6200uLL, v22, (ULONG_PTR)qword_140C50708, 0LL);
              v21 = v38 - 1;
            }
            else
            {
              if ( v38 == dword_140C506C8 || v22 < *((_QWORD *)v23 + 2) )
              {
                dword_140C506C4 = (v37 + v21) >> 1;
                break;
              }
              v37 = v38 + 1;
            }
            if ( v21 < v37 )
              goto LABEL_77;
          }
        }
        v24 = *((unsigned int *)v23 + 2);
        v25 = *(_BYTE *)(48 * v9 - 0x220000000000LL + 35);
        if ( (v25 & 8) != 0 )
          v26 = 5LL;
        else
          v26 = v25 & 7;
        if ( qword_140C50710 )
        {
          v27 = sub_1403B76EC(v22);
          v8 = a1;
        }
        else
        {
          v27 = 0;
        }
        v28 = *(_DWORD *)(v7 + 36);
        v29 = *(_QWORD *)(v42 + 16) + 24512 * v24 + 88 * (v26 + 8LL * v27);
        v30 = (8LL * (v28 & 0xFFE00000)) | (((*(_QWORD *)v7 >> 20) | *(_QWORD *)(v7 + 40) & 0xF80000000000000uLL) >> 20);
        if ( v30 == 0x3FFFFFFFFFLL )
          v31 = v29 + 3296;
        else
          v31 = 48 * v30 - 0x220000000000LL;
        v32 = ((unsigned __int64)(v28 & 0x1FFFFF) << 19) | (*(_QWORD *)(v7 + 24) >> 40) & 0x7FFFFLL;
        if ( v32 == 0x3FFFFFFFFFLL )
          v33 = v29 + 3296;
        else
          v33 = 48 * v32 - 0x220000000000LL;
        v34 = 0LL;
        v35 = a4 + 16;
        while ( !*(_BYTE *)(v35 + 8) || v31 != *(_QWORD *)v35 )
        {
          ++v34;
          v35 += 24LL;
          if ( v34 >= 4 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
              goto LABEL_58;
            *(_BYTE *)(a4 + 96) = 1;
            break;
          }
        }
        *(_QWORD *)(a4 + 88) = v31;
        *(_QWORD *)(a4 + 80) = v30;
        while ( !*(_BYTE *)(v19 + 8) || v33 != *(_QWORD *)v19 )
        {
          ++v4;
          v19 += 24LL;
          if ( v4 >= 4 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
              goto LABEL_58;
            *(_QWORD *)(a4 + 64) = v33;
            *(_QWORD *)(a4 + 56) = v32;
            *(_BYTE *)(a4 + 72) = 1;
            break;
          }
        }
      }
      *(_BYTE *)a4 = 1;
      return 1LL;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a4 + 40) = v18;
      v20 = 1;
      *(_QWORD *)(a4 + 32) = v15;
      goto LABEL_16;
    }
  }
LABEL_58:
  *(_BYTE *)a4 = 1;
  sub_140338D00(v8, a4);
  *(_BYTE *)a4 = 0;
  if ( a3 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    return 1LL;
  }
  return 0LL;
}
