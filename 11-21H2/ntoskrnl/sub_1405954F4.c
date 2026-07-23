/*
 * XREFs of sub_1405954F4 @ 0x1405954F4
 * Callers:
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 * Callees:
 *     sub_140201144 @ 0x140201144 (sub_140201144.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140220160 (ExAcquireRundownProtectionCacheAware.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_140266074 @ 0x140266074 (sub_140266074.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_14096D038 @ 0x14096D038 (sub_14096D038.c)
 */

__int64 __fastcall sub_1405954F4(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  ULONG_PTR *v9; // r14
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // al
  __int64 v20; // r9
  __int64 v21; // r11
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned int v31; // ebx
  char v32; // r11
  __int64 v33; // rax
  struct _KTHREAD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v41; // r15
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v43; // r9
  int v44; // eax
  bool v45; // zf
  __int64 v46; // rax
  char v47; // r15
  __int64 v48; // rbx
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // edi
  ULONG_PTR v54; // rbx
  __int64 v55; // rsi
  unsigned __int8 v57; // [rsp+30h] [rbp-D0h]
  char v58; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v59; // [rsp+32h] [rbp-CEh]
  volatile signed __int64 *v60; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+44h] [rbp-BCh]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  char v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h]
  unsigned __int64 v73; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  __int128 v75; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v77; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  _QWORD v80[24]; // [rsp+E0h] [rbp-20h] BYREF

  BugCheckParameter3 = a1;
  v75 = 0LL;
  memset(v80, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v79 = *((_QWORD *)CurrentThread + 23);
  v67 = sub_1402E670C((__int64)CurrentThread);
  v72 = sub_14096D038(a2);
  v74 = *(_QWORD *)(a1 + 32);
  v62 = 0;
  v5 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 0;
  v66 = v79 + 1664;
  sub_140339C20((char *)(v79 + 1664), 0, (__int64)&v75);
  v6 = 0LL;
  v7 = 0x3FFFFFFFFFLL;
  v8 = 0LL;
  v9 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v66 + 174));
  v63 = (__int64)v9;
  v11 = sub_140329630(v9, v10, 2);
  v73 = v11;
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v75, 1u);
    v14 = sub_1403250B0((__int64)v9, DWORD2(v75) & (unsigned int)v13 | HIDWORD(v75), 0);
    v15 = v14;
    if ( v14 != -1 )
    {
      v6 = 48 * v14 - 0x220000000000LL;
      if ( (unsigned int)sub_140266074(v6, a3) )
      {
        *(_QWORD *)(v6 + 16) = v8;
        v8 = v6;
      }
      sub_140313CA0(v6, v7, 0);
      v7 = v15;
      v9 = (ULONG_PTR *)v63;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    v9 = (ULONG_PTR *)v63;
    sub_1405B8348(v63);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  sub_14024AA58(v63, v11 - v12, 0);
  v11 = v12;
  v73 = v12;
LABEL_11:
  if ( v8 )
  {
    v70 = 0LL;
    sub_1402E89B0((unsigned __int64 *)&v70);
    sub_1402680C0(v8, a3, v70);
  }
LABEL_13:
  v16 = v66;
  v71 = -1LL;
  v17 = 0LL;
  v78 = v5 + 8 * v11;
  v18 = 0LL;
  v64 = 0LL;
  v19 = sub_1402CF4F0(v66);
  v59 = v19;
  if ( v5 >= v5 + 8 * v11 )
    goto LABEL_33;
  v21 = 1LL;
  v77 = BugCheckParameter3 - ((v74 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v18 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        sub_14020D8D0(v16, v18);
        goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14031DE00(v16, v18, 0LL, v20);
      v71 = sub_14033AC10(v5);
      v21 = 1LL;
    }
    if ( (unsigned int)sub_140201144(v5, v21, 3) )
      goto LABEL_30;
    v22 = sub_140317A10(v5);
    v68 = v22;
    if ( (v22 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v22, BugCheckParameter3);
    v23 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v68) >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v23 - 0x220000000000LL;
    if ( v23 > qword_140C50840 || (*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      goto LABEL_36;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v22, BugCheckParameter4);
    v25 = *(_QWORD *)(BugCheckParameter4 + 40);
    v26 = 1;
    if ( (v25 & 0x10000000000LL) != 0 || (v25 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      v26 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v26 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v22, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v26 )
    {
LABEL_36:
      v60 = (volatile signed __int64 *)(v6 + 24);
      v29 = v6;
      v30 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v30 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v30 - 0x220000000000LL;
      v65 = 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4);
      v31 = (v22 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v31 |= 0x18u;
      }
      else if ( !a3 )
      {
        v31 |= 8u;
      }
      v68 = sub_1402CCC50(32LL * v31);
      *(_QWORD *)(v29 + 16) = v68;
      if ( !v58 )
      {
        v33 = v72;
        v34 = CurrentThread;
        v58 = v32;
        *(_DWORD *)(v72 + 192) |= 0x20u;
        *(_DWORD *)(v33 + 80) = 0;
        *(_QWORD *)(v33 + 88) = 0LL;
        *(_QWORD *)(v33 + 248) = v29;
        *(_QWORD *)(v33 + 152) = v34;
      }
      sub_14033C3E0(v29, v71);
      v57 = sub_1402F2700(v35);
      v37 = v72;
      *(_BYTE *)(v29 + 34) |= 0x20u;
      if ( v37 )
        v38 = v37 + 32;
      else
        v38 = 0LL;
      *(_QWORD *)v29 = v38;
      *v60 &= 0xC000000000000000uLL;
      sub_140274508(v29, 1LL, v36);
      v39 = *(_BYTE *)(v29 + 34) & 0xFA;
      *(_QWORD *)(v29 + 8) = v5;
      *(_BYTE *)(v29 + 34) = v39 | 2;
      *(_BYTE *)(v29 + 35) ^= (v67 ^ *(_BYTE *)(v29 + 35)) & 7;
      if ( ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 2368));
      _InterlockedAnd64(v60, 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v41 = v57;
        if ( v57 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v43 = *((_QWORD *)CurrentPrcb + 4375);
          v44 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v45 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
          *(_DWORD *)(v43 + 20) &= v44;
          if ( v45 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      else
      {
        v41 = v57;
      }
      __writecr8(v41);
      sub_14024AA58(v63, 1uLL, 0);
      v46 = sub_1402E4D28(v65, v31);
      v47 = v46;
      v68 = v46;
      v48 = v46;
      if ( sub_140317A80(v5) )
      {
        v49 = sub_140229550();
        v21 = 1LL;
        if ( v49 )
        {
          v50 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_66;
        }
        else
        {
          v50 = 0;
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
            goto LABEL_66;
        }
        if ( (v47 & 1) != 0 )
          v48 |= 0x8000000000000000uLL;
      }
      else
      {
        v50 = 0;
        v21 = 1LL;
      }
LABEL_66:
      *(_QWORD *)v5 = v48;
      if ( v50 )
        sub_1402294F0(v5, v48);
      v51 = v65;
      v17 += v21;
      v16 = v66;
      v64 = v17;
      *(_QWORD *)(v77 + v5 + 48) = v51;
      v5 += 8LL;
      if ( v5 >= v78 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  v16 = v66;
  v62 = 1;
LABEL_30:
  if ( v18 )
    sub_14020D8D0(v16, v18);
  v19 = v59;
LABEL_33:
  sub_1402B0CE0(v16, v19);
  if ( v6 )
  {
    do
    {
      v27 = v6;
      v28 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v28 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v28 - 0x220000000000LL;
      sub_1402E89B0((unsigned __int64 *)(v27 + 16));
      sub_140268408(v52);
    }
    while ( v6 );
    v17 = v64;
    v11 = v73;
  }
  if ( v17 == v11 )
  {
    v53 = v62;
  }
  else
  {
    sub_14024AA58(v63, v11 - v17, 0);
    v53 = v62;
    if ( !v17 )
      v53 = 1;
  }
  v54 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v17 << 12;
  if ( v17 )
  {
    v55 = v79;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v79 + 1272), v17);
    WORD2(v80[0]) = 0;
    v80[2] = 0LL;
    v80[3] = 0LL;
    LODWORD(v80[0]) = 1;
    LODWORD(v80[1]) = 20;
    sub_1402CF280((__int64)v80, v74 & 0xFFFFFFFFFFFFF000uLL, v17, 0);
    sub_14032F1B0((__int64)v80);
    *(_QWORD *)(v54 + 16) = v55;
    *(_WORD *)(v54 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 1280), v17);
    if ( (dword_140D06994 & 1) != 0 )
      sub_140584030(v54, v17, 4);
  }
  return v53;
}
