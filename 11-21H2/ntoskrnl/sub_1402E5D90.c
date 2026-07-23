/*
 * XREFs of sub_1402E5D90 @ 0x1402E5D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E5920 @ 0x1402E5920 (sub_1402E5920.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14031285C @ 0x14031285C (sub_14031285C.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406AFE20 @ 0x1406AFE20 (sub_1406AFE20.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402E5D90(ULONG_PTR a1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  PVOID v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  _QWORD *v12; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v14; // r14
  char *v15; // r15
  int v16; // r9d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // esi
  unsigned __int64 v21; // rsi
  ULONG_PTR v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // cl
  BOOL v28; // esi
  bool v29; // zf
  __int64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD **v32; // rax
  _QWORD *j; // rdx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r12
  int v38; // r13d
  unsigned int v39; // esi
  unsigned __int64 v40; // rcx
  _QWORD **v41; // rax
  _QWORD *k; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // [rsp+40h] [rbp-118h]
  int v46; // [rsp+44h] [rbp-114h]
  int v47; // [rsp+44h] [rbp-114h]
  char v48; // [rsp+48h] [rbp-110h]
  unsigned __int64 v49; // [rsp+50h] [rbp-108h]
  PVOID Object; // [rsp+58h] [rbp-100h] BYREF
  int v51; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+88h] [rbp-D0h]
  PVOID P; // [rsp+90h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-C0h]
  int v59; // [rsp+A0h] [rbp-B8h] BYREF
  int v60; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-B0h]
  __int64 v62; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+C8h] [rbp-90h]
  __int64 v66; // [rsp+D0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-80h]
  char *v68; // [rsp+E0h] [rbp-78h]
  _QWORD *v69; // [rsp+E8h] [rbp-70h]
  unsigned __int64 *v70; // [rsp+F0h] [rbp-68h]
  _BYTE v71[48]; // [rsp+F8h] [rbp-60h] BYREF

  v69 = a3;
  v70 = a2;
  memset(v71, 0, sizeof(v71));
  v63 = 0LL;
  v53 = 0LL;
  Object = 0LL;
  v59 = 0;
  v4 = 0;
  v48 = 0;
  v51 = 0;
  result = sub_1406AFE20(a1, (__int64)&v53, (__int64)&v63, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v6 = (v53 + v63 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v54 = v6;
  v7 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v49 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v56 = 0LL;
  BugCheckParameter2 = 0LL;
  v8 = sub_1402828F0(
         64,
         8
       * (((((v6 - (v53 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) >> 6)
        + ((((unsigned __int8)((v6 - (v53 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 1) & 0x3F) != 0)),
         0x6B6C6D4Du);
  P = v8;
  if ( !v8 )
  {
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225626LL;
  }
  if ( a1 != -1LL )
  {
    sub_14030D5C0((ULONG_PTR)Object);
    v4 = 2;
    v48 = 2;
    v51 = 2;
  }
  v9 = v53;
  v55 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = v7;
  v65 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = sub_1406F7D78(Object, v7, v6, 0LL);
  v64 = v10;
  if ( !v10 )
  {
    v39 = -1073741819;
    goto LABEL_87;
  }
  v11 = sub_1403126F0(v7);
  v12 = (_QWORD *)v11;
  for ( i = 0LL; i < v10; i = v30 + 1 )
  {
    if ( !(unsigned int)sub_14031285C(v12) )
    {
      v39 = -1073741747;
      goto LABEL_86;
    }
    v31 = v12;
    v32 = (_QWORD **)v12[1];
    if ( v32 )
    {
      v12 = (_QWORD *)v12[1];
      for ( j = *v32; j; j = (_QWORD *)*j )
        v12 = j;
    }
    else
    {
      while ( 1 )
      {
        v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v12 || (_QWORD *)*v12 == v31 )
          break;
        v31 = v12;
      }
    }
  }
  v46 = sub_140319990(v11);
  v14 = 0LL;
  v15 = (char *)Object + 1664;
  v68 = (char *)Object + 1664;
  v66 = *((_QWORD *)Object + 210);
  LOBYTE(v16) = sub_1402CF4F0((__int64)Object + 1664);
  v45 = v16;
LABEL_9:
  v17 = v49;
  v18 = v54;
  v19 = 0xFFFFF6FB40000000uLL;
  while ( 1 )
  {
    if ( v17 > v18 )
    {
      if ( v14 )
      {
        sub_14020D8D0((__int64)v15, v14);
        LOBYTE(v16) = v45;
      }
      sub_1402B0CE0((__int64)v15, v16);
      sub_1406F7F40(Object, v61, v64, 0LL);
      if ( (v4 & 2) != 0 )
        sub_1402D0930((__int64)v71, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      ExFreePoolWithTag(P, 0);
      v34 = v9 & 0xFFFFFFFFFFFFF000uLL;
      *v69 = v54 - v34 + 4096;
      *v70 = v34;
      return (v4 & 1) != 0 ? 0x40000019 : 0;
    }
    if ( v17 >> 12 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
    {
      v40 = v11;
      v41 = *(_QWORD ***)(v11 + 8);
      if ( v41 )
      {
        v11 = *(_QWORD *)(v11 + 8);
        for ( k = *v41; k; k = (_QWORD *)*k )
          v11 = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 || *(_QWORD *)v11 == v40 )
            break;
          v40 = v11;
        }
      }
      v20 = sub_140319990(v11);
      v46 = v20;
    }
    else
    {
      v20 = v46;
    }
    v52 = ((v17 >> 18) & 0x3FFFFFF8) + v19;
    if ( v14 == v52 )
    {
      v21 = v55;
    }
    else
    {
      if ( v14 )
      {
        sub_14020D8D0((__int64)v15, v14);
        v14 = 0LL;
        LOBYTE(v16) = v45;
      }
      v29 = v20 == 0;
      v21 = v55;
      if ( v29 )
      {
        sub_14032CE60(v55, 0, (*(_DWORD *)(v11 + 48) >> 12) & 0x7F, v16, 0);
        v14 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v35 = sub_14028F080(v55, v65, 0LL, v16, 0, &v59);
        if ( v35 )
          v14 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v35 != v21 )
        {
          v47 = -1073741819;
          goto LABEL_62;
        }
      }
    }
    if ( (*(_BYTE *)v21 & 1) == 0 )
    {
      sub_14020D8D0((__int64)v15, v14);
      v14 = 0LL;
      v62 = 0LL;
      sub_1402B0CE0((__int64)v15, v45);
      LOBYTE(v16) = sub_1402CF4F0((__int64)v15);
      v45 = v16;
      goto LABEL_37;
    }
    v62 = sub_140317A10(v21);
    v22 = 48 * (((unsigned __int64)sub_140317A10(&v62) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (sub_14033A410(0xFFFFFFFFFFLL, v49) & 0xF) == 8 )
    {
      v4 |= 1u;
      v48 = v4;
      v51 = v4;
      v26 = v56;
      goto LABEL_28;
    }
    if ( *((_QWORD *)v15 + 14) <= (unsigned __int64)(*(_QWORD *)(v66 + 32) + 6LL) )
    {
      v47 = -1073741663;
      goto LABEL_62;
    }
    if ( *(__int64 *)(v22 + 40) < 0 && !(unsigned int)sub_14031F940(v22, 1LL) )
      goto LABEL_101;
    BugCheckParameter2 = 48 * (((unsigned __int64)sub_140317A10(v52) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !(unsigned int)sub_14031F940(BugCheckParameter2, 2LL) )
      break;
    v52 = 0LL;
    if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
    {
      v24 = *(_QWORD *)(v22 + 40);
      if ( v24 < 0 )
      {
        v52 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v24 >> 43) & 0x3FF));
        if ( !(unsigned int)sub_14032A4B0(v52, 1LL, 0LL) )
        {
          sub_1402E5B0C(BugCheckParameter2, 2);
          sub_1402E5B0C(48 * (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
          v47 = -1073741523;
          goto LABEL_62;
        }
        _InterlockedAdd64((volatile signed __int64 *)(v52 + 17520), 1uLL);
      }
    }
    else if ( (unsigned int)sub_1402E76C0(v22 + 16) )
    {
      sub_14033E534(v22, 1LL);
    }
    LOBYTE(v23) = 8;
    if ( !(unsigned int)sub_1403171A0(v15, v49, 1LL, v23) )
    {
      sub_1402E5B0C(BugCheckParameter2, 2);
      v44 = *(_QWORD *)(v22 + 40);
      if ( v44 < 0 )
      {
        sub_1402E5B0C(48 * (v44 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
        if ( (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
          sub_14028CE10(v52, 1LL);
      }
      goto LABEL_101;
    }
    v25 = sub_1402E670C(CurrentThread);
    LODWORD(v52) = v25;
    v60 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v60);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
      v25 = v52;
    }
    sub_14027428C(v22, v25, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = v56;
    _bittestandset64((signed __int64 *)P, v56);
LABEL_28:
    v56 = v26 + 1;
    BugCheckParameter2 = v26 + 1;
    v27 = v55 + 8;
    v55 += 8LL;
    v17 = v49 + 4096;
    v49 = v17;
    v28 = 0;
    v18 = v54;
    if ( v17 > v54 || (v27 & 0x78) != 0 )
      goto LABEL_30;
    if ( (unsigned int)sub_1403531F0(v15) || (unsigned int)sub_140274C80((__int64)v15, v14) )
    {
LABEL_31:
      sub_14020D8D0((__int64)v15, v14);
      sub_1402B0CE0((__int64)v15, v45);
      v14 = 0LL;
      sub_1402CF4F0((__int64)v15);
      LOBYTE(v16) = v45;
LABEL_37:
      v9 = v53;
      goto LABEL_9;
    }
    v28 = KeShouldYieldProcessor() != 0;
    v18 = v54;
    v17 = v49;
LABEL_30:
    v29 = !v28;
    v9 = v53;
    LOBYTE(v16) = v45;
    v19 = 0xFFFFF6FB40000000uLL;
    if ( !v29 )
      goto LABEL_31;
  }
  v43 = *(_QWORD *)(v22 + 40);
  if ( v43 < 0 )
    sub_1402E5B0C(48 * (v43 & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
LABEL_101:
  v47 = -1073741670;
LABEL_62:
  if ( v14 )
  {
    sub_14020D8D0((__int64)v15, v14);
    v14 = 0LL;
  }
  v36 = v56;
  v37 = v61 + (v56 << 12);
  while ( 2 )
  {
    if ( v36 )
    {
      --v36;
      v37 -= 4096LL;
      if ( _bittest64((const signed __int64 *)P, v36) == 1 )
      {
        if ( v14 != ((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        {
          if ( v14 )
            sub_14020D8D0((__int64)v15, v14);
          v14 = ((v37 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          sub_14031DE00(v15, v14, 0LL);
        }
        sub_1402E5920((__int64)v15, v37);
      }
      v38 = 0;
      if ( (v36 & 0xF) != 0 )
        goto LABEL_70;
      if ( !(unsigned int)sub_1403531F0(v15) && (!v14 || !(unsigned int)sub_140274C80((__int64)v15, v14)) )
      {
        if ( KeShouldYieldProcessor() )
          v38 = 1;
LABEL_70:
        if ( !v38 )
          continue;
      }
      if ( v14 )
      {
        sub_14020D8D0((__int64)v15, v14);
        v14 = 0LL;
      }
      sub_1402B0CE0((__int64)v15, v45);
      sub_1402CF4F0((__int64)v15);
      continue;
    }
    break;
  }
  LOBYTE(v4) = v48;
  v39 = v47;
  if ( v14 )
    sub_14020D8D0((__int64)v15, v14);
  sub_1402B0CE0((__int64)v15, v45);
  v10 = v64;
LABEL_86:
  v8 = P;
LABEL_87:
  sub_1406F7F40(Object, v61, v10, 0LL);
  if ( (v4 & 2) != 0 )
    sub_1402D0930((__int64)v71, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  ExFreePoolWithTag(v8, 0);
  return v39;
}
