/*
 * XREFs of sub_140982B6C @ 0x140982B6C
 * Callers:
 *     sub_140980FA0 @ 0x140980FA0 (sub_140980FA0.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 */

__int64 __fastcall sub_140982B6C(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // r9
  int v9; // edi
  int v11; // r12d
  int v12; // r13d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  size_t v17; // rdi
  __int64 v18; // r9
  void *v19; // rcx
  struct _MDL *v20; // r15
  void *v21; // [rsp+30h] [rbp-39h] BYREF
  PVOID v22; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v26[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  memset(v26, 0, sizeof(v26));
  sub_1402EE0E0(a3, 16);
  v6 = sub_1402EE0C8(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(v6 + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v6 + 16);
  }
  sub_14030D5C0(v8, 0LL, (__int64)v26, v8);
  ExAcquirePushLockExclusiveEx(a3 + 40, 0LL);
  v9 = sub_1405C2A4C(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3 + 40);
  sub_1402AFC00(a3 + 40);
  sub_1402D0930((__int64)v26, 0LL);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 48) & 0x200;
  v13 = 4292870144LL;
  v14 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v15 = v14 << 12;
  v16 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v14 + 1) << 12;
  while ( v16 )
  {
    v17 = v13;
    if ( v16 <= v13 )
      v17 = v16;
    v11 = sub_1406A904C(v15, v17, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v11 < 0 )
      goto LABEL_11;
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v26, v18);
    v19 = (void *)v15;
    if ( v12 )
    {
      v20 = 0LL;
      v21 = (void *)v15;
      v22 = 0LL;
    }
    else
    {
      v11 = sub_1406A904C(v15, v17, 1, IoWriteAccess, &v21, (struct _MDL **)&v22);
      if ( v11 < 0 )
      {
        sub_1402D0930((__int64)v26, 0LL);
        sub_140231450((struct _MDL *)P);
LABEL_11:
        v13 = (v17 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v13 < 0x200000 )
          return (unsigned int)v11;
        continue;
      }
      v20 = (struct _MDL *)v22;
      v19 = v21;
    }
    memmove(v19, Src, v17);
    if ( !v12 )
      sub_140231450(v20);
    sub_1402D0930((__int64)v26, 0LL);
    sub_140231450((struct _MDL *)P);
    v16 -= v17;
    v15 += v17;
  }
  return (unsigned int)v11;
}
