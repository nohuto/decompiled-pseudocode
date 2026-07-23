/*
 * XREFs of sub_1405BB090 @ 0x1405BB090
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140239F04 @ 0x140239F04 (sub_140239F04.c)
 *     sub_14026ED6C @ 0x14026ED6C (sub_14026ED6C.c)
 *     sub_14026EDC4 @ 0x14026EDC4 (sub_14026EDC4.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405BAFB0 @ 0x1405BAFB0 (sub_1405BAFB0.c)
 *     sub_1405BBC9C @ 0x1405BBC9C (sub_1405BBC9C.c)
 *     sub_1405BC224 @ 0x1405BC224 (sub_1405BC224.c)
 */

__int64 __fastcall sub_1405BB090(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  __int64 v12; // r14
  ULONG_PTR v13; // rdi
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  signed __int32 v28; // eax
  unsigned int v29; // ebp
  __int64 v30; // rax
  unsigned __int8 v31; // r15
  _QWORD *v32; // r14
  volatile LONG *v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // edi
  int v37; // r13d
  int v38; // edx
  __int64 v39; // r8
  bool v40; // zf
  __int64 v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  unsigned __int64 v46; // rdi
  BOOL v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edi
  bool v51; // zf
  __int64 v52; // rbx
  volatile LONG *v53; // rbx
  int v54; // [rsp+30h] [rbp-98h]
  unsigned int v55; // [rsp+38h] [rbp-90h]
  __int64 v56; // [rsp+38h] [rbp-90h]
  unsigned int v57; // [rsp+44h] [rbp-84h]
  __int64 v58; // [rsp+48h] [rbp-80h] BYREF
  _QWORD *v59; // [rsp+50h] [rbp-78h]
  __int128 v60; // [rsp+58h] [rbp-70h] BYREF
  __int64 v61; // [rsp+68h] [rbp-60h]
  unsigned __int64 v62; // [rsp+70h] [rbp-58h]
  __int64 v63; // [rsp+78h] [rbp-50h]
  unsigned int v65; // [rsp+D8h] [rbp+10h]
  __int64 v66; // [rsp+D8h] [rbp+10h]

  v12 = a5;
  v13 = (ULONG_PTR)a3;
  v58 = 0LL;
  v60 = 0LL;
  v15 = sub_1402CCC50((a5 << 16) | 0x400);
  v16 = 0LL;
  v17 = 0;
  v61 = v15;
  v19 = *(unsigned __int16 *)(v18 + 1838);
  v62 = 0LL;
  v65 = 0;
  v54 = 0;
  v20 = *(_QWORD *)(qword_140C51F48 + 8 * v19);
  v22 = *(unsigned __int16 *)(v21 + 1838);
  v63 = v20;
  v59 = *(_QWORD **)(qword_140C51F48 + 8 * v22);
  if ( v59 != (_QWORD *)v20 )
  {
    if ( (a9 & 1) != 0 )
    {
      if ( !(unsigned int)sub_14032A4B0(v20, 1uLL, 0) )
      {
        sub_1405BC224(a4);
        *a12 = 1;
        return 1LL;
      }
      v17 = 1;
      v54 = 1;
    }
    if ( (unsigned int)sub_1405BAFB0(v20) )
    {
      v65 = 1;
      goto LABEL_12;
    }
    sub_1405BC224(a4);
    *a12 = 1;
    if ( v17 )
      sub_14028CE10(v20, 1LL);
    return 1LL;
  }
  while ( 1 )
  {
LABEL_12:
    v24 = sub_140315D60(v13, 0LL, 0);
    if ( !v24 )
    {
LABEL_22:
      v36 = v65;
LABEL_23:
      if ( v17 )
        sub_14028CE10(v20, 1LL);
      if ( v36 )
        sub_1405BBC9C(v20);
      return 0LL;
    }
    v25 = sub_140317A10(v13);
    LODWORD(v26) = 0;
    v27 = (v25 >> 5) & 0x1F;
    v55 = v27;
    if ( !*(_WORD *)(v24 + 32) && (v27 & 0xFFFFFFF8) != 0x10 && !(unsigned int)sub_140239F04((_QWORD *)(v24 + 16)) )
      break;
    v57 = *(unsigned __int8 *)(v24 + 34) >> 6;
    v56 = a1 + 1664;
    if ( *a8 != -1LL )
    {
      if ( v17 )
      {
        sub_14028CE10(v20, 1LL);
        v17 = 0;
      }
      v36 = v65;
      if ( v65 )
      {
        sub_1405BBC9C(v20);
        v36 = 0;
      }
      v52 = 48 * *a8 - 0x220000000000LL;
      sub_140239060(v52);
      sub_1402E5708(v52, v57, 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v24 + 34) & 0x20) != 0 && (sub_14032F1B0(a7), (*(_BYTE *)(v24 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        sub_14030FA80(v56, a10);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
        v53 = (volatile LONG *)sub_140282AD0(v56);
        ExAcquireSpinLockExclusive(v53);
        *((_DWORD *)v53 + 1) = 0;
      }
      else if ( (unsigned int)sub_1405BA864((unsigned __int64)a3, a4, *a8, a10, 2u) )
      {
        *a8 = -1LL;
        ++*a6;
        return 1LL;
      }
      goto LABEL_23;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_140339C20((char *)(a1 + 1664), v26, (__int64)&v60);
    v28 = _InterlockedExchangeAdd((volatile signed __int32 *)v60, 1u);
    v29 = HIDWORD(v60) | v28 & DWORD2(v60);
    v30 = sub_1403250B0((__int64)v59, v29, 0);
    *a8 = v30;
    if ( v30 == -1 )
    {
      v31 = a10;
      v32 = v59;
      do
      {
        sub_14032F1B0(a7);
        sub_14030FA80(v56, v31);
        sub_1405B8348(v32);
        v33 = (volatile LONG *)sub_140282AD0(v56);
        LOBYTE(v34) = ExAcquireSpinLockExclusive(v33);
        *((_DWORD *)v33 + 1) = 0;
        v31 = v34;
        sub_14032CE60((ULONG_PTR)a3, 0LL, 0, v34, 1);
        v35 = sub_1403250B0((__int64)v32, v29, 0);
        *a8 = v35;
      }
      while ( v35 == -1 );
      v15 = v61;
      v16 = v62;
      v12 = a5;
      v17 = v54;
      a10 = v31;
      v20 = v63;
    }
    v13 = (ULONG_PTR)a3;
    if ( (sub_140317A10((unsigned __int64)a3) & 0x401) != 0 )
      goto LABEL_22;
  }
  *(_QWORD *)v12 = v26;
  v37 = v26;
  if ( sub_140317A80(v12) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v37 = v38 + 1;
      if ( HIBYTE(word_140C51864) == (_BYTE)v38 )
      {
        v40 = ((unsigned __int8)v25 & (unsigned __int8)v37) == 0;
LABEL_34:
        if ( !v40 )
          v25 |= v39;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v40 = (v25 & 1) == 0;
      goto LABEL_34;
    }
  }
  *(_QWORD *)v12 = v25;
  if ( v37 )
    sub_1402294F0(v12, v25);
  sub_14026ED6C((__int64 *)v12);
  *(_QWORD *)(v12 + 8) = v65;
  *(_QWORD *)(v12 + 24) = 2LL;
  if ( (a9 & 1) != 0 )
  {
    *(_QWORD *)(v12 + 16) = 1LL;
    if ( v17 )
      ++*a11;
    else
      ++a11[1];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 17528), 1uLL);
    v41 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    v41 = 0LL;
  }
  *(_QWORD *)(v12 + 16) = v41 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v55 << 59);
  if ( (*(_QWORD *)(v24 + 16) & 2) != 0 )
  {
    v16 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)(v24 + 34) & 7) == 3 )
    {
      sub_140326870(v24, 0);
      v42 = 1;
    }
    else
    {
      v42 = 0;
    }
    *(_QWORD *)(v24 + 16) &= ~2uLL;
    if ( v42 )
      sub_1402BF9C0(v24, 8u);
  }
  *(_QWORD *)(v24 + 8) = v12;
  *(_QWORD *)(v24 + 40) |= 0x8000000000000000uLL;
  sub_14026ED6C((__int64 *)(v24 + 16));
  v66 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFLL;
  v58 = sub_140317A10((((unsigned __int64)v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v43 = sub_140317A10((unsigned __int64)&v58);
  sub_14033C3E0(v24, (v43 >> 12) & 0xFFFFFFFFFFLL);
  sub_14026EDC4(v44, (__int64)a3);
  v45 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v58) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  sub_140239060(v45);
  *(_QWORD *)(v45 + 24) ^= (*(_QWORD *)(v45 + 24) ^ (*(_QWORD *)(v45 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v46 = v15;
  v47 = sub_140317A80((unsigned __int64)a3);
  v48 = 0;
  if ( !v47 )
  {
LABEL_58:
    v49 = v48;
    goto LABEL_59;
  }
  if ( !(unsigned int)sub_140229550() )
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v15 & 1) != 0 )
      v46 = v15 | 0x8000000000000000uLL;
    goto LABEL_58;
  }
  v49 = v48 + 1;
  if ( HIBYTE(word_140C51864) == (_BYTE)v48 && ((unsigned __int8)v15 & (unsigned __int8)v49) != 0 )
    v46 = v15 | 0x8000000000000000uLL;
LABEL_59:
  *a3 = v46;
  if ( v49 )
    sub_1402294F0((__int64)a3, v46);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
  {
    if ( (v16 & 4) != 0 )
      v16 &= ~4uLL;
    sub_1402E20D0(v20, v16, 1);
  }
  if ( (a9 & 1) != 0 && v55 != 24 )
    v15 |= 8uLL;
  v50 = 0;
  if ( sub_140317A80((unsigned __int64)a4) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v50 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v51 = (v15 & 1) == 0;
LABEL_74:
        if ( !v51 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v51 = (v15 & 1) == 0;
      goto LABEL_74;
    }
  }
  *a4 = v15;
  if ( v50 )
    sub_1402294F0((__int64)a4, v15);
  sub_140228660(48 * v66 - 0x220000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
