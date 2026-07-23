/*
 * XREFs of sub_1409226E0 @ 0x1409226E0
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C063C @ 0x1407C063C (sub_1407C063C.c)
 *     sub_1407C07F4 @ 0x1407C07F4 (sub_1407C07F4.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 */

__int64 __fastcall sub_1409226E0(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  __int16 v4; // dx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int v7; // ebx
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  struct _LOOKASIDE_LIST_EX *v10; // r9
  unsigned int v11; // r14d
  _PRIVILEGE_SET *v12; // rax
  _PRIVILEGE_SET *v13; // r13
  __int64 v14; // rdi
  __int64 i; // rsi
  __int128 *v16; // r15
  __int128 *v17; // r12
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rsi
  __int128 *v27; // rax
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-38h]
  __int128 v31; // [rsp+40h] [rbp-28h] BYREF
  PPRIVILEGE_SET v32[2]; // [rsp+50h] [rbp-18h]
  __int64 v33; // [rsp+B0h] [rbp+48h]

  v3 = *(_WORD *)(a1 + 2);
  v29 = 0LL;
  WORD1(v29) = -1;
  v31 = 0LL;
  WORD1(v31) = -1;
  *(_OWORD *)Privileges = 0LL;
  *(_OWORD *)v32 = 0LL;
  v33 = sub_140721CE0(a1, v3);
  v7 = sub_1407C07F4((__int64)&v29, v4, v5, v6);
  if ( v7 < 0 )
    goto LABEL_32;
  v7 = sub_1407C07F4((__int64)&v31, v3, v8, v9);
  if ( v7 < 0 )
    goto LABEL_32;
  v11 = ((*(_DWORD *)(v33 + 8) >> 21) & 0x3FF) + 1;
  v12 = (_PRIVILEGE_SET *)Allocate(PagedPool, 8LL * v11, 0x37364D43u, v10);
  v13 = v12;
  if ( !v12 )
  {
    v7 = -1073741670;
    goto LABEL_32;
  }
  memset(v12, 0, 8LL * v11);
  LODWORD(v14) = v11;
  for ( i = v33; !_bittest((const signed __int32 *)(i + 184), 0x12u); i = *(_QWORD *)(i + 72) )
  {
    v14 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
    *((_QWORD *)&v13->PrivilegeCount + v14) = i;
  }
  v16 = &v29;
  v17 = &v31;
  sub_1407C063C((__int64)&v31, i);
  sub_14071F6D0((__int64)&v31);
  v18 = v33;
  if ( i == v33 )
  {
    if ( a2 )
    {
      ExAcquirePushLockSharedEx(*(_QWORD *)(i + 32) + 72LL, 0LL);
      v19 = sub_140922400((__int64)&v31);
      v20 = *(_QWORD *)(i + 32);
      v7 = v19;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 72));
      sub_1402AFC00(v20 + 72);
      if ( v7 < 0 )
        goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)v14 >= v11 )
  {
LABEL_29:
    v7 = 0;
    if ( !a3 )
      goto LABEL_30;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)&v13->PrivilegeCount + (unsigned int)v14);
    sub_1407C063C((__int64)v16, v21);
    sub_14071F6D0(v22);
    if ( sub_140720F74((__int64)v16) )
      break;
    v23 = *(_DWORD *)(v21 + 40);
    if ( v21 == v18 )
    {
      if ( v23 != -1 && !a2 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v21 + 32) + 72LL, 0LL);
      LOBYTE(v24) = a2;
    }
    else
    {
      if ( v23 != -1 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v21 + 32) + 72LL, 0LL);
      v24 = 0LL;
    }
    v25 = sub_140922984(v17, v16, v24);
    v26 = *(_QWORD *)(v21 + 32);
    v7 = v25;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v26 + 72));
    sub_1402AFC00(v26 + 72);
    if ( v7 < 0 )
      goto LABEL_28;
    v18 = v33;
LABEL_25:
    sub_140721BAC((__int64)v17);
    v27 = v16;
    LODWORD(v14) = v14 + 1;
    v16 = v17;
    v17 = v27;
    if ( (unsigned int)v14 >= v11 )
      goto LABEL_29;
  }
  v7 = -1073741444;
LABEL_28:
  sub_140721BAC((__int64)v16);
LABEL_30:
  sub_140721BAC((__int64)v17);
LABEL_31:
  SeFreePrivileges(v13);
LABEL_32:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v32[1] )
    SeFreePrivileges(v32[1]);
  return (unsigned int)v7;
}
