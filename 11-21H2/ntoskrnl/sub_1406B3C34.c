/*
 * XREFs of sub_1406B3C34 @ 0x1406B3C34
 * Callers:
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F68C @ 0x14071F68C (sub_14071F68C.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_1406B3C34(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v7; // r14d
  ULONG_PTR v10; // r12
  __int64 v11; // r13
  __int64 v12; // r15
  ULONG_PTR v13; // r14
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r9
  int v18; // r10d
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned __int16 i; // dx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // r14d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  ULONG_PTR v59; // rcx
  __int64 v60; // rax
  char v61; // [rsp+40h] [rbp-E8h]
  unsigned int v62; // [rsp+44h] [rbp-E4h]
  size_t Size; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-D8h]
  int v65; // [rsp+54h] [rbp-D4h]
  int v66; // [rsp+58h] [rbp-D0h]
  _DWORD v67[2]; // [rsp+60h] [rbp-C8h] BYREF
  _DWORD v68[2]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-B8h]
  __int64 v70; // [rsp+78h] [rbp-B0h] BYREF
  unsigned int v71; // [rsp+80h] [rbp-A8h]
  __int64 v72; // [rsp+88h] [rbp-A0h]
  _DWORD v73[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v74; // [rsp+98h] [rbp-90h] BYREF
  void *Src; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-80h]
  ULONG_PTR v77; // [rsp+B0h] [rbp-78h]
  ULONG_PTR v78; // [rsp+B8h] [rbp-70h]
  __int64 v79; // [rsp+C0h] [rbp-68h]
  __int64 v80; // [rsp+C8h] [rbp-60h]
  __int64 v81; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v82; // [rsp+D8h] [rbp-50h]
  __int64 v83; // [rsp+E0h] [rbp-48h]
  __int64 v84; // [rsp+130h] [rbp+8h] BYREF
  __int64 v85; // [rsp+140h] [rbp+18h]
  unsigned int v86; // [rsp+148h] [rbp+20h]

  v86 = a4;
  v85 = a3;
  v7 = a3;
  v78 = 0LL;
  v10 = 0LL;
  v77 = 0LL;
  v67[0] = -1;
  v67[1] = 0;
  v64 = 0;
  v62 = 0;
  v61 = 0;
  v68[0] = -1;
  v68[1] = 0;
  v72 = 0LL;
  v73[0] = -1;
  v73[1] = 0;
  v11 = 0LL;
  v80 = 0LL;
  v70 = 0LL;
  LOBYTE(v66) = 0;
  LOBYTE(v65) = 0;
  Src = 0LL;
  LOBYTE(v84) = 0;
  v74 = 0xFFFFFFFFLL;
  sub_140AB4370();
  v12 = *(_QWORD *)(a1 + 8);
  v83 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    v38 = sub_14091210C(a1, v7, v86, a5, (__int64)a6, (__int64)a7);
    sub_140AB4260(v40, v39, v41, v42);
    return v38;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    sub_140AB42D0(v12);
    if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) )
    {
      v43 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      sub_140AB4300(v12);
LABEL_59:
      sub_140AB4260(v45, v44, v46, v47);
      return (unsigned int)(v43 - 1073741444);
    }
    sub_140AB4300(v12);
    v53 = sub_14067F480((_QWORD *)a1, &v70);
    if ( v53 < 0 )
    {
      sub_140AB4260(v50, v49, v51, v52);
      return (unsigned int)v53;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v80 = v11;
  }
  sub_1407C300C(v11, v12);
  if ( (unsigned __int8)sub_140AB45A0(a1, v70) )
  {
    v48 = *(_DWORD *)(a1 + 48);
LABEL_58:
    v43 = (v48 & 1) != 0 ? 0x2A9 : 0;
    sub_1407C2FB4(v11, v12);
    goto LABEL_59;
  }
  if ( a2 && (unsigned __int8)sub_140AB45A0(a2, v70) )
  {
    v48 = *(_DWORD *)(a2 + 48);
    goto LABEL_58;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v82 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    v15 = sub_1406BF400(v13, *(unsigned int *)(v12 + 40));
  else
    v15 = sub_1407C9820(v13);
  v79 = v15;
  if ( !v15 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    sub_1402AFC00(v13 + 72);
    goto LABEL_69;
  }
  sub_140722534(v13, v15, *(unsigned int *)(v12 + 40));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  sub_1402AFC00(v13 + 72);
  v16 = v70;
  if ( v70 )
  {
    v58 = (unsigned __int8)v66;
    if ( *(_QWORD *)(v12 + 288) == v70 )
      v58 = 1;
    v66 = v58;
  }
  if ( !v11 )
  {
    v17 = 0LL;
    LOBYTE(v18) = v65;
    goto LABEL_16;
  }
  v59 = *(_QWORD *)(v11 + 32);
  v78 = v59;
  if ( (*(_BYTE *)(v59 + 140) & 1) != 0 )
    v60 = sub_1406BF400(v59, *(unsigned int *)(v11 + 40));
  else
    v60 = sub_1407C9820(v59);
  v17 = v60;
  v72 = v60;
  if ( !v60 )
  {
    if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
      sub_1406BF450(v13, v68);
    else
      sub_1407C97C0(v13, v68);
LABEL_69:
    sub_1407C2FB4(v11, v12);
    sub_140AB4260(v55, v54, v56, v57);
    return 3221225626LL;
  }
  LOBYTE(v18) = v65;
  if ( v16 )
  {
    v18 = (unsigned __int8)v65;
    if ( *(_QWORD *)(v11 + 288) == v16 )
      v18 = 1;
    v65 = v18;
  }
LABEL_16:
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v71 = v20;
    if ( v20 >= v86 )
      break;
    v81 = 3LL * v20;
    v21 = *(_QWORD *)(v85 + 24LL * v20);
    v69 = v21;
    for ( i = *(_WORD *)v21; i && !*(_WORD *)(*(_QWORD *)(v21 + 8) + 2 * ((unsigned __int64)i >> 1) - 2); *(_WORD *)v21 = i )
      i -= 2;
    v23 = -1;
    Size = -1LL;
    if ( v11 )
    {
      v10 = v78;
      v77 = v78;
      if ( (_BYTE)v18 )
      {
        sub_14071F68C(v78, v11 + 280, v21, 0, 0LL, (__int64)&Size);
        v23 = Size;
        HIDWORD(Size) = Size;
      }
      else
      {
        v23 = sub_1406B4108(v78, v17);
        HIDWORD(Size) = v23;
        LODWORD(Size) = v23;
      }
      LODWORD(v21) = v69;
    }
    if ( v23 == -1 )
    {
      v10 = v13;
      v77 = v13;
      if ( (_BYTE)v66 )
      {
        sub_14071F68C(v13, v12 + 280, v21, 0, 0LL, (__int64)&Size);
        v23 = Size;
        HIDWORD(Size) = Size;
      }
      else
      {
        v23 = sub_1406B4108(v13, v79);
        HIDWORD(Size) = v23;
      }
      if ( v23 == -1 )
      {
        v19 = -1073741772;
        break;
      }
    }
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      v24 = sub_1406BF400(v10, v23);
    else
      v24 = sub_1407C9820(v10);
    v25 = v24;
    v69 = v24;
    if ( !v24 )
    {
      v19 = -1073741670;
      goto LABEL_48;
    }
    v26 = *(_DWORD *)(v24 + 4);
    v27 = v26 + 0x80000000;
    if ( v26 < 0x80000000 )
      v27 = v26;
    LODWORD(Size) = v27;
    v28 = (v62 + 3) & 0xFFFFFFFC;
    v62 = v28;
    LODWORD(v70) = v28;
    v29 = (v64 + 3) & 0xFFFFFFFC;
    v64 = v29;
    v76 = v29;
    if ( v27 + v28 > *a6 || v27 + v28 < v28 || v61 )
    {
      v61 = 1;
    }
    else
    {
      if ( !(unsigned __int8)sub_1407C46A0(v10, (__int64)&Src, (__int64)&v84, (__int64)&v74) )
      {
        v19 = -1073741670;
        v25 = v69;
        goto LABEL_48;
      }
      HIDWORD(Size) = Size;
      memmove((void *)(a5 + v62), Src, (unsigned int)Size);
      v30 = v81;
      v31 = v85;
      *(_DWORD *)(v85 + 8 * v81 + 16) = *(_DWORD *)(v69 + 12);
      *(_DWORD *)(v31 + 8 * v30 + 8) = HIDWORD(Size);
      *(_DWORD *)(v31 + 8 * v30 + 12) = v62;
      if ( (_BYTE)v84 )
      {
        ExFreePoolWithTag(Src, 0);
        LOBYTE(v84) = 0;
      }
      else if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      {
        sub_1406BF450(v10, &v74);
      }
      else
      {
        sub_1407C97C0(v10, &v74);
      }
      Src = 0LL;
      v27 = HIDWORD(Size);
      v62 += HIDWORD(Size);
      v29 = v64;
    }
    v64 = v27 + v29;
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      sub_1406BF450(v10, v67);
    else
      sub_1407C97C0(v10, v67);
    v20 = v71 + 1;
    v17 = v72;
    LOBYTE(v18) = v65;
  }
  v32 = v64;
  v25 = 0LL;
  if ( v19 >= 0 )
  {
    if ( v61 )
      v19 = -2147483643;
    *a6 = v62;
    if ( a7 )
      *a7 = v32;
  }
LABEL_48:
  if ( v25 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      sub_1406BF450(v10, v67);
    else
      sub_1407C97C0(v10, v67);
  }
  if ( v72 )
  {
    if ( (*(_BYTE *)(v78 + 140) & 1) != 0 )
      sub_1406BF450(v78, v73);
    else
      sub_1407C97C0(v78, v73);
  }
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    sub_1406BF450(v13, v68);
  else
    sub_1407C97C0(v13, v68);
  sub_1407C2FB4(v11, v12);
  sub_140AB4260(v34, v33, v35, v36);
  return (unsigned int)v19;
}
