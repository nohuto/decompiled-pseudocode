/*
 * XREFs of sub_1405B99AC @ 0x1405B99AC
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14025247C @ 0x14025247C (sub_14025247C.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BAF60 @ 0x1405BAF60 (sub_1405BAF60.c)
 *     sub_1405BB84C @ 0x1405BB84C (sub_1405BB84C.c)
 *     sub_1405BB8B4 @ 0x1405BB8B4 (sub_1405BB8B4.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_14098056C @ 0x14098056C (sub_14098056C.c)
 *     sub_140980D40 @ 0x140980D40 (sub_140980D40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405B99AC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 *v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rcx
  volatile LONG *v16; // rbx
  KIRQL v17; // al
  struct _KTHREAD *v18; // rdi
  volatile LONG *v19; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 *v21; // rbx
  int v22; // edi
  unsigned __int64 *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  _QWORD **v26; // rax
  __int64 v27; // r15
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  unsigned __int64 v31; // rdi
  __int64 **v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r10
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  volatile LONG *v38; // rax
  volatile LONG *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // esi
  unsigned __int64 v44; // rax
  int v45; // ecx
  unsigned __int64 v46; // rcx
  bool v47; // cc
  __int64 v48; // rbx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rsi
  int v51; // edx
  unsigned __int64 v52; // rax
  __int64 v53; // r9
  size_t v54; // r8
  __int64 v55; // r12
  __int64 *v56; // rcx
  _QWORD *i; // rax
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r14
  _QWORD *v60; // rbx
  _QWORD **v61; // rax
  unsigned __int64 v62; // rcx
  _QWORD *v63; // rcx
  volatile LONG *v64; // rbx
  unsigned __int64 v65; // r15
  _QWORD *v66; // rbx
  KIRQL v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+84h] [rbp-7Ch]
  int v70; // [rsp+88h] [rbp-78h] BYREF
  int v71; // [rsp+8Ch] [rbp-74h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v73; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v74; // [rsp+A0h] [rbp-60h]
  _QWORD *v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v79; // [rsp+C8h] [rbp-38h]
  _QWORD *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  _QWORD *v82; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v83; // [rsp+E8h] [rbp-18h]
  _QWORD *v84; // [rsp+F0h] [rbp-10h]
  unsigned __int64 *v85; // [rsp+F8h] [rbp-8h]
  _QWORD *v86; // [rsp+100h] [rbp+0h]
  _DWORD *v87; // [rsp+108h] [rbp+8h]
  _QWORD v88[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v89; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v90[24]; // [rsp+170h] [rbp+70h] BYREF

  v77 = a3;
  v7 = a1;
  v86 = a1;
  v81 = a4;
  v87 = a6;
  memset(v88, 0, 0x48uLL);
  memset(v90, 0, 0xB8uLL);
  v71 = 0;
  v76 = 0LL;
  v79 = 0LL;
  v73 = 0LL;
  v89 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v9 = v7[159];
    if ( !v9 )
      v9 = 1LL;
    v78 = sub_14098056C(v7, v9, *(_QWORD *)(v7[210] + 344LL));
    v10 = (unsigned __int64 *)v78;
    if ( !v78 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota(a2, v11);
    if ( v12 < 0 )
    {
      v22 = v12;
      goto LABEL_87;
    }
    v13 = sub_1402828F0(64, 0x70uLL, 0x64436D4Du);
    v84 = v13;
    v14 = v13;
    if ( !v13 )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v11);
      v22 = -1073741670;
LABEL_87:
      sub_140980D40(v7, v78);
      return (unsigned int)v22;
    }
    v15 = CurrentThread;
    v13[8] = v11;
    sub_1405AB9B8((__int64)v15);
    v16 = (volatile LONG *)sub_140282AD0((__int64)(v7 + 208));
    v17 = ExAcquireSpinLockExclusive(v16);
    *((_DWORD *)v16 + 1) = 0;
    v68 = v17;
    if ( v7[159] <= v10[5] )
    {
      *v14 = v77;
      sub_14025247C((__int64)v7, 1);
      v18 = CurrentThread;
      v7[156] = CurrentThread;
      sub_14030FA80((__int64)(v7 + 208), v68);
      sub_1405AC950((__int64)v18);
      v19 = (volatile LONG *)sub_140282AD0((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v19);
      j = 0LL;
      *((_DWORD *)v19 + 1) = 0;
      v21 = (unsigned __int64 *)v10[3];
      v85 = v21;
      if ( (unsigned int)sub_1405BB84C(a2, v88) )
      {
        v23 = v21;
        v74 = v21;
        v10[6] = 1LL;
        sub_1405BB8B4(v7, v10, 1LL);
        v24 = *(_QWORD **)(a2 + 2008);
        LODWORD(v90[0]) = 1;
        v25 = 0LL;
        WORD2(v90[0]) = 0;
        v90[2] = 0LL;
        LODWORD(v90[1]) = 20;
        v90[3] = 0LL;
        while ( v24 )
        {
          v25 = v24;
          v24 = (_QWORD *)*v24;
        }
        if ( v25 )
        {
          do
          {
            v26 = (_QWORD **)v25[1];
            v27 = (__int64)v25;
            v82 = v25;
            v28 = v25;
            v80 = v25;
            if ( v26 )
            {
              v29 = *v26;
              v25 = v26;
              v75 = v26;
              if ( v29 )
              {
                do
                {
                  v30 = (_QWORD *)*v29;
                  v25 = v29;
                  v75 = v29;
                  v29 = v30;
                }
                while ( v30 );
              }
            }
            else
            {
              v25 = (_QWORD *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v75 = v25;
              if ( v25 )
              {
                do
                {
                  if ( (_QWORD *)*v25 == v28 )
                    break;
                  v28 = v25;
                  v25 = (_QWORD *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v25 );
                v75 = v25;
              }
            }
            v31 = (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32)) << 12;
            v32 = sub_1403126F0(v31);
            v33 = *(unsigned int *)(v27 + 52);
            LODWORD(v33) = v33 & 0x7FFFFFFF;
            v34 = (unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 31;
            v77 = (__int64)v32;
            if ( (v33 | v34) < 0x7FFFFFFFDLL && !sub_14030FBE0(v27) )
            {
              v36 = v35 + ((v31 >> 9) & 0x7FFFFFFFF8LL);
              v37 = v35
                  + 8
                  * ((*(unsigned int *)(v27 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 33) << 32)) & 0xFFFFFFFFFLL);
              v83 = v37;
              do
              {
                sub_14032F1B0((__int64)v90);
                if ( sub_1403531F0((__int64)(v7 + 208)) || KeShouldYieldProcessor() )
                {
                  v70 = 0;
                  v38 = (volatile LONG *)sub_140282AD0((__int64)(v7 + 208));
                  v39 = v38;
                  if ( (*v38 & 0x40000000) != 0 )
                  {
                    v69 = 1;
                    *((_DWORD *)v38 + 1) = 1;
                  }
                  else
                  {
                    v69 = 0;
                  }
                  sub_14030FA80((__int64)(v7 + 208), v68);
                  v43 = 0;
                  if ( v69 )
                  {
                    while ( *((_DWORD *)v39 + 1) )
                    {
                      sub_1402F32E0(&v70, v40, v41, v42);
                      if ( (v70 & 0x3F) == 0 )
                      {
                        v43 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v39);
                  if ( !v43 )
                    *((_DWORD *)v39 + 1) = 0;
                  v23 = v74;
                }
                v44 = sub_1405BBD5C((unsigned int)v88, v36, v37, (unsigned int)&v76, (__int64)v7, v68);
                v45 = *(_DWORD *)(v27 + 48);
                v36 = v44;
                if ( (*(_BYTE *)(v27 + 48) & 0x70) != 0x50 )
                {
                  if ( v44 > v37 )
                    break;
                  v46 = v37;
                  v47 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v37;
                  v48 = v88[8];
                  if ( v47 )
                    v46 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v49 = v88[5] - v44;
                  v50 = v46;
                  do
                  {
                    if ( sub_1405B88D8(
                           (__int64)v7,
                           a2,
                           v36,
                           (_QWORD *)(v49 + v36),
                           v81,
                           v23,
                           &v76,
                           v48,
                           (__int64)v90,
                           v77,
                           (__int64)v80,
                           a5,
                           v68,
                           &v89,
                           &v71) )
                    {
                      v23 += 4;
                    }
                    v36 += 8LL;
                  }
                  while ( v36 <= v50 );
                  v37 = v83;
                  v27 = (__int64)v82;
                  v74 = v23;
                  v45 = *((_DWORD *)v82 + 12);
                }
              }
              while ( v36 <= v37 );
              v25 = v75;
              if ( (v45 & 0x600000) == 0x600000 )
              {
                sub_1402EE0E0(v27, 4);
                v52 = sub_1402EE0E0(v77, v51);
                memmove(*(void **)(v53 + 16), *(const void **)(v52 + 16), v54);
              }
            }
            j = 0LL;
          }
          while ( v25 );
          v14 = v84;
          v10 = (unsigned __int64 *)v78;
        }
        sub_14032F1B0((__int64)v90);
        sub_1405BAF60(v88);
        v55 = (char *)v23 - (char *)v85;
        v56 = (__int64 *)v10[7];
        *(_QWORD *)(a2 + 1272) += v76;
        v8 = v55 >> 5;
        v76 = *(_QWORD *)(a2 + 1272);
        if ( v8 )
        {
          *v56 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 158, v10);
        }
        sub_14025247C((__int64)v7, 1);
        for ( i = (_QWORD *)v7[158]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v58 = v73;
          v59 = v79;
          do
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
            v60 = (_QWORD *)*v14;
            v58 += v14[8];
            v59 += *(_QWORD *)(j + 64);
            *(_OWORD *)v14 = *(_OWORD *)j;
            *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
            *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
            *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
            *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
            *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
            *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
            sub_1405BB8B4(a2, v14, 0LL);
            v61 = *(_QWORD ***)(j + 8);
            v14 = v60;
            v62 = j;
            if ( v61 )
            {
              v63 = *v61;
              for ( j = *(_QWORD *)(j + 8); v63; v63 = (_QWORD *)*v63 )
                j = (unsigned __int64)v63;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v62 )
                  break;
                v62 = j;
              }
            }
          }
          while ( j );
          v79 = v59;
          v7 = v86;
          v73 = v58;
          v10 = (unsigned __int64 *)v78;
        }
        v22 = 0;
      }
      else
      {
        sub_1405BAF60(v88);
        v22 = -1073741670;
      }
      sub_14030FA80((__int64)(v7 + 208), v68);
      sub_1405AB9B8((__int64)CurrentThread);
      v64 = (volatile LONG *)sub_140282AD0((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v64);
      *((_DWORD *)v64 + 1) = 0;
      v7[156] = 0LL;
      sub_14030FA80((__int64)(v7 + 208), v68);
      sub_1405AC950((__int64)CurrentThread);
      if ( v14 )
      {
        v65 = v73;
        do
        {
          v65 += v14[8];
          v66 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v66;
        }
        while ( v66 );
        v73 = v65;
        v10 = (unsigned __int64 *)v78;
      }
      if ( v73 > v79 )
        PsReturnProcessNonPagedPoolQuota(a2, v73 - v79);
      if ( (_QWORD)v89 )
        sub_1406FEC50(a2, v89);
      if ( *((_QWORD *)&v89 + 1) )
        sub_14028CDA0(a2, *((__int64 *)&v89 + 1));
      if ( !v8 || v22 < 0 )
        sub_140980D40(v7, v10);
      if ( v71 )
        *v87 = 1;
      return (unsigned int)v22;
    }
    sub_14030FA80((__int64)(v7 + 208), v17);
    sub_1405AC950((__int64)CurrentThread);
    sub_140980D40(v7, v10);
    PsReturnProcessNonPagedPoolQuota(a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
