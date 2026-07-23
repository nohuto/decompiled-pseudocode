/*
 * XREFs of sub_14097A358 @ 0x14097A358
 * Callers:
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405A8968 @ 0x1405A8968 (sub_1405A8968.c)
 *     sub_1405E33F8 @ 0x1405E33F8 (sub_1405E33F8.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097A358(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        KPROCESSOR_MODE a4,
        unsigned __int64 a5,
        int a6,
        int *a7,
        unsigned __int64 Base,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  ULONG_PTR v12; // rsi
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // edi
  SIZE_T v18; // rax
  _WORD *v19; // rax
  __int64 v20; // r9
  int *v21; // r14
  __int16 v23; // [rsp+64h] [rbp-C4h] BYREF
  int v24; // [rsp+68h] [rbp-C0h] BYREF
  int *v25; // [rsp+70h] [rbp-B8h]
  _QWORD *v26; // [rsp+78h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-A8h]
  _WORD *v28; // [rsp+88h] [rbp-A0h]
  ULONG_PTR v29; // [rsp+90h] [rbp-98h]
  unsigned __int64 v30; // [rsp+98h] [rbp-90h]
  int *v31; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-80h]
  _BYTE v33[48]; // [rsp+B0h] [rbp-78h] BYREF

  BugCheckParameter1 = a2;
  v29 = a3;
  v30 = a5;
  v25 = a7;
  v31 = a7;
  v26 = a11;
  v23 = 0;
  v24 = 0;
  memset(v33, 0, sizeof(v33));
  v12 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  v14 = *a7;
  if ( !*a7 )
    return 3221225485LL;
  if ( v14 > 2 )
  {
    if ( v14 == 3 )
      goto LABEL_10;
    if ( v14 != 4 )
    {
      if ( v14 == 5 )
      {
LABEL_10:
        if ( Base )
          return 3221225713LL;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_14:
  v15 = sub_14032BCC0(a10 & 0x5FFFFFFF);
  if ( (v15 & 7) == 0 || v15 > 7 || (v15 & 5) == 5 )
    return 3221225541LL;
  if ( (v15 & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL) & 0x100) != 0
    && (*((_DWORD *)KeGetCurrentThread() + 344) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v32 = a5 + 4095;
  if ( sub_1405A8968(a5, a5 + 4095, a3, v16 + 1664) )
    return 3221225505LL;
  result = sub_14032C1B0(a3, a5, 4096LL, a10, 0, 0LL, 0, 0, 0LL, &v24, &v23);
  v17 = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, 0x1000uLL);
      v19 = sub_1402828F0(64, v18, 0x6C646D4Du);
      v12 = (ULONG_PTR)v19;
      v28 = v19;
      if ( !v19 )
      {
        v17 = -1073741670;
        goto LABEL_36;
      }
      *(_QWORD *)v19 = 0LL;
      v19[4] = 8 * (((unsigned __int16)((Base & 0xFFF) + 0x1FFF) >> 12) + 6);
      v19[5] = 0;
      *((_QWORD *)v19 + 4) = Base & 0xFFFFFFFFFFFFF000uLL;
      *((_DWORD *)v19 + 11) = Base & 0xFFF;
      *((_DWORD *)v19 + 10) = 4096;
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v33, v20);
      if ( a4 == 1 && (Base + 4096 > 0x7FFFFFFF0000LL || Base + 4096 < Base) )
        MEMORY[0x7FFFFFFF0000] = 0;
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v25;
      sub_1402D0930((__int64)v33, 0LL);
      if ( v17 < 0 )
        goto LABEL_36;
    }
    else
    {
      v21 = v25;
    }
    v17 = sub_1405E33F8(*(_QWORD *)(a3 + 72), a5, *v21, a10, v12);
    if ( v17 >= 0 )
    {
      *v26 = 4096LL;
LABEL_37:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)v17;
    }
LABEL_36:
    sub_1407BC9B0(a3, a5, a5 + 4095);
    goto LABEL_37;
  }
  return result;
}
