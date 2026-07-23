/*
 * XREFs of sub_140793B84 @ 0x140793B84
 * Callers:
 *     sub_1406E191C @ 0x1406E191C (sub_1406E191C.c)
 *     sub_1407934D0 @ 0x1407934D0 (sub_1407934D0.c)
 *     sub_140A01DB0 @ 0x140A01DB0 (sub_140A01DB0.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_1406E7820 @ 0x1406E7820 (sub_1406E7820.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14075ADF8 @ 0x14075ADF8 (sub_14075ADF8.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_1407945D4 @ 0x1407945D4 (sub_1407945D4.c)
 *     sub_1407946F8 @ 0x1407946F8 (sub_1407946F8.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 *     sub_1407947BC @ 0x1407947BC (sub_1407947BC.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140793B84(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r12
  unsigned __int64 v10; // r14
  int v11; // esi
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rbx
  PEPROCESS v19; // r15
  unsigned __int64 v20; // rbx
  ULONG_PTR v21; // r13
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // r8
  PVOID v26; // r15
  struct _EX_RUNDOWN_REF *v27; // rbx
  __int64 v28; // rsi
  ULONG_PTR Count; // rcx
  __int64 v30; // rcx
  int v31; // [rsp+38h] [rbp-E0h]
  unsigned int v32; // [rsp+3Ch] [rbp-DCh]
  struct _EX_RUNDOWN_REF *v33; // [rsp+40h] [rbp-D8h] BYREF
  int v34; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-C8h] BYREF
  PVOID P; // [rsp+58h] [rbp-C0h] BYREF
  int v37; // [rsp+60h] [rbp-B8h]
  PSID Sid; // [rsp+68h] [rbp-B0h] BYREF
  __int128 *v39; // [rsp+70h] [rbp-A8h]
  int v40[2]; // [rsp+78h] [rbp-A0h] BYREF
  const void *v41; // [rsp+80h] [rbp-98h]
  PEPROCESS v42; // [rsp+88h] [rbp-90h]
  __int128 v43; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-60h]
  __int128 v46; // [rsp+C0h] [rbp-58h] BYREF

  v32 = a3;
  v41 = a2;
  v35 = 0LL;
  v46 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  P = 0LL;
  *(_QWORD *)v40 = 0LL;
  v33 = 0LL;
  LODWORD(v10) = 0;
  v43 = 0LL;
  v39 = a4;
  LOBYTE(a3) = v9;
  v11 = sub_14079474C(a1, &v35, a3);
  if ( v11 < 0 )
    goto LABEL_26;
  v37 = (v35 >> 4) & 3;
  v10 = (v35 >> 6) & 0xF;
  v31 = (v35 >> 6) & 0xF;
  if ( v9 )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (_DWORD)v14 && (v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v13 )
    {
      if ( v13 < 0x7FFFFFFF0000LL )
        v16 = v13;
      v46 = *(_OWORD *)v16;
      v39 = &v46;
    }
  }
  LOBYTE(v12) = v9;
  v11 = sub_1407947BC((v35 >> 6) & 0xF, a5, v12, &Sid, &v43);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( v9 )
  {
    v34 = 0;
    if ( a5 )
    {
      v11 = sub_14075ADF8(v35);
      if ( v11 < 0 )
        goto LABEL_26;
    }
  }
  else
  {
    v34 = 1;
  }
  if ( v9 )
  {
    v18 = KeGetCurrentThread();
    v19 = (PEPROCESS)*((_QWORD *)v18 + 23);
    v42 = v19;
    LODWORD(v10) = v31;
    if ( v31 == 3 && (!Sid || v19 == *(PEPROCESS *)Sid) )
      goto LABEL_60;
  }
  else
  {
    LODWORD(v18) = 0;
    LODWORD(v19) = (_DWORD)PsInitialSystemProcess;
    v42 = PsInitialSystemProcess;
  }
  if ( (_DWORD)v10 == 5 && a8 )
  {
    if ( a7 )
    {
LABEL_60:
      v11 = -1073741811;
      goto LABEL_26;
    }
    v44 = v35 ^ 0x41C64E6DA3BC0074LL;
    v11 = sub_1406E7820(v17, 1u);
    if ( v11 != -1073741822 )
      goto LABEL_26;
  }
  v11 = sub_140798334((int)v40, (int)v19, (int)v18, v10, Sid);
  if ( v11 < 0 )
    goto LABEL_26;
  v20 = v35;
  v21 = *(_QWORD *)v40;
  v22 = sub_140798234(*(_QWORD *)v40, v35, &v33);
  v11 = v22;
  if ( v22 != -1073741772 || v37 == 3 )
  {
    if ( v22 < 0 )
      goto LABEL_26;
    v23 = v32;
    v11 = sub_1407945D4(2u, v34);
    if ( v11 < 0 )
      goto LABEL_26;
  }
  else
  {
    v11 = sub_14075A12C(v20, (PSECURITY_DESCRIPTOR **)&P);
    if ( v11 < 0 )
      goto LABEL_26;
    v26 = P;
    v11 = sub_1407945D4(2u, v34);
    if ( v11 < 0 )
      goto LABEL_26;
    v11 = sub_14066FED4(v21, v20, (__int64)v26, (ULONG_PTR)v42, &v33);
    ExFreePoolWithTag(v26, 0x20666E57u);
    P = 0LL;
    if ( v11 < 0 )
      goto LABEL_26;
    v23 = v32;
  }
  v11 = sub_14079350C((__int64)v33, v41, v23, a6, a7);
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v10 == 5 )
    {
      v45 = v35 ^ 0x41C64E6DA3BC0074LL;
      v27 = v33 + 10;
      v28 = sub_140347C10((__int64)&v33[10], 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27, 17LL, 0LL) )
        sub_14029F350((signed __int64 *)v27, 0, v28, (__int64)v27);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
      Count = 0LL;
      if ( v33[11].Count != 1 )
        Count = v33[11].Count;
      if ( Count )
        v30 = *(unsigned int *)(Count + 8);
      else
        v30 = 0LL;
      sub_1406E7820(v30, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v27);
      sub_1402AFC00((ULONG_PTR)v27);
      LODWORD(v10) = v31;
    }
    sub_1407938B0((__int64)v33, 1u, 1, v9 != 0);
    v11 = 0;
  }
LABEL_26:
  if ( v33 )
    sub_1402AD030(v33 + 1);
  if ( *(_QWORD *)v40 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)v40 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v24) = v9;
  sub_1407946F8((unsigned int)v10, &v43, v24);
  return (unsigned int)v11;
}
