/*
 * XREFs of sub_14090D9E8 @ 0x14090D9E8
 * Callers:
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14069F904 @ 0x14069F904 (sub_14069F904.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14083D1A4 @ 0x14083D1A4 (sub_14083D1A4.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 *     sub_140919B78 @ 0x140919B78 (sub_140919B78.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_14090D9E8(__int64 a1)
{
  BOOLEAN v2; // r14
  char v3; // si
  char v4; // r15
  _PRIVILEGE_SET *v5; // r12
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  volatile signed __int64 *v12; // r14
  volatile signed __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PLOOKASIDE_LIST_EX v18; // r9
  _PRIVILEGE_SET *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // eax
  unsigned int v26; // r9d
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  ULONG_PTR v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r13
  int v33; // eax
  int v34; // [rsp+20h] [rbp-79h]
  __int64 v35; // [rsp+60h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v37; // [rsp+70h] [rbp-29h]
  _LIST_ENTRY ListHead; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v39[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v41; // [rsp+108h] [rbp+6Fh]
  char v42; // [rsp+110h] [rbp+77h]
  __int64 v43; // [rsp+118h] [rbp+7Fh] BYREF

  v43 = 0LL;
  v35 = 0LL;
  memset(v39, 0, 32);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  BugCheckParameter3 = 0LL;
  ListHead = 0LL;
  v5 = 0LL;
  sub_1407C97FC(&v43);
  sub_1407C97FC(&v35);
  InitializeListHead(&ListHead);
  v6 = *(_QWORD *)(a1 + 8);
  v37 = v6;
  v7 = *(_QWORD *)(v6 + 32);
  v42 = sub_140AB4138();
  if ( !v42 )
  {
    v8 = -1073741431;
    goto LABEL_29;
  }
  v41 = sub_140347810((struct _EX_RUNDOWN_REF *)(v7 + 1640));
  v2 = v41;
  if ( !v41 )
  {
    v8 = -1073740763;
    goto LABEL_29;
  }
  sub_14083D56C(v7);
  v3 = 1;
  sub_140AB4370(v10, v9, v11);
  sub_140AB42D0(v6);
  v8 = sub_140AB43C0(a1, 0LL);
  if ( v8 < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v7 + 2944) == 1 )
  {
    v8 = -1073741431;
LABEL_8:
    sub_140AB4300(v6);
    v4 = 1;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_8;
  }
  v12 = (volatile signed __int64 *)(v7 + 72);
  ExAcquirePushLockSharedEx(v7 + 72, 0LL);
  v13 = (volatile signed __int64 *)(v7 + 80);
  ExAcquirePushLockExclusiveEx(v7 + 80, 0LL);
  if ( *(_DWORD *)(v7 + 912) )
  {
    v8 = -1073741823;
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 + 80);
    sub_1402AFC00(v7 + 80);
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 72));
    sub_1402AFC00(v7 + 72);
    goto LABEL_23;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7 + 80);
  sub_1402AFC00(v7 + 80);
  if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 72));
  sub_1402AFC00(v7 + 72);
  if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
  {
    v8 = -1073741811;
LABEL_23:
    v2 = v41;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 2920) )
  {
    v8 = -1073741823;
    goto LABEL_23;
  }
  sub_140AB4300(v6);
  sub_140AB4260(v15, v14, v16, v17);
  v4 = 0;
  v19 = (_PRIVILEGE_SET *)Allocate(PagedPool, 0x1B0uLL, 0x33394D43u, v18);
  v5 = v19;
  if ( v19 )
  {
    memset(v19, 0, 0x1B0uLL);
    memset((char *)v39 + 8, 0, 24);
    *(_QWORD *)&v39[0] = *(_QWORD *)(v7 + 1544);
    v25 = *(_DWORD *)(v7 + 168);
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        v26 = 1;
        *((_QWORD *)&v39[0] + 1) = *(_QWORD *)(v7 + 1552);
      }
      else
      {
        v26 = 2;
        *(_OWORD *)((char *)v39 + 8) = *(_OWORD *)(v7 + 1576);
      }
    }
    else
    {
      v26 = 0;
    }
    v8 = sub_14068A7FC(
           &BugCheckParameter3,
           2u,
           *(_DWORD *)(v7 + 160) & 0xFFFEFFFF,
           v26,
           0LL,
           v39,
           0LL,
           17367042,
           0LL,
           0LL,
           0LL,
           (__int64)v5);
    if ( v8 < 0 )
      goto LABEL_28;
    sub_14071B6EC();
    v4 = 1;
    v8 = sub_140AB43C0(a1, 0LL);
    if ( v8 < 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(v7 + 2944) == 1 )
    {
      v8 = -1073741431;
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
    {
LABEL_52:
      v8 = -1073741811;
      goto LABEL_28;
    }
    if ( !*(_DWORD *)(v7 + 912) )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
        goto LABEL_52;
      if ( !*(_DWORD *)(v7 + 2920) )
      {
        v27 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
        if ( (_DWORD)v27 == *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v28 = sub_1406BF400(BugCheckParameter3, v27, &v35);
          else
            v28 = sub_1407C9820(BugCheckParameter3, v27, (unsigned int *)&v35);
          v29 = v28;
          v30 = *(unsigned int *)(*(_QWORD *)(v7 + 64) + 36LL);
          if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
            v31 = sub_1406BF400(v7, v30, &v43);
          else
            v31 = sub_1407C9820(v7, v30, (unsigned int *)&v43);
          v32 = v31;
          v8 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), 0);
          if ( v8 < 0 )
          {
            if ( v32 )
            {
              if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                sub_1406BF450(v7, &v43);
              else
                sub_1407C97C0(v7, (unsigned int *)&v43);
            }
            if ( v29 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                sub_1406BF450(BugCheckParameter3, &v35);
              else
                sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v35);
            }
            v4 = 1;
          }
          else
          {
            v33 = *(_DWORD *)(v32 + 16);
            *(_WORD *)(v29 + 2) |= 0xCu;
            *(_DWORD *)(v29 + 16) = v33;
            if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
              sub_1406BF450(v7, &v43);
            else
              sub_1407C97C0(v7, (unsigned int *)&v43);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              sub_1406BF450(BugCheckParameter3, &v35);
            else
              sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v35);
            sub_14069F904(v7);
            LOBYTE(v34) = 1;
            sub_140915544(sub_14090DEF0, v7, &ListHead, 0LL, v34);
            sub_14067EE40(v37, 0LL, (__int64)&ListHead, 1);
            sub_140919B78(v7, BugCheckParameter3);
            sub_14071B3F0(v37);
            ++*(_DWORD *)(v7 + 212);
            v8 = 0;
          }
          goto LABEL_28;
        }
        goto LABEL_52;
      }
    }
    v8 = -1073741823;
    goto LABEL_28;
  }
  v8 = -1073741670;
LABEL_28:
  v2 = v41;
LABEL_29:
  sub_140346C60(&ListHead);
  if ( v4 )
    sub_140AB4260(v21, v20, v22, v23);
  if ( v3 )
    sub_14083D1A4(v7, v20, v22);
  if ( v2 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v7 + 1640));
  if ( v42 )
    sub_140AB4178();
  if ( BugCheckParameter3 )
    sub_14065A7E0(BugCheckParameter3);
  if ( v5 )
    SeFreePrivileges(v5);
  return (unsigned int)v8;
}
