/*
 * XREFs of DnsPrint_RpcZoneInfo_0 @ 0x140701B64
 * Callers:
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     sub_1409ACDC0 @ 0x1409ACDC0 (sub_1409ACDC0.c)
 * Callees:
 *     sub_14024E388 @ 0x14024E388 (sub_14024E388.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140701EB4 @ 0x140701EB4 (sub_140701EB4.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 */

__int64 __fastcall DnsPrint_RpcZoneInfo_0(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        PVOID a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  PVOID v13; // rdi
  char v15; // r12
  struct _KTHREAD *CurrentThread; // r14
  __int64 v17; // r15
  int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // r13
  int v22; // eax
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+64h] [rbp-9Ch]
  PVOID v25; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  _QWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[400]; // [rsp+D0h] [rbp-30h] BYREF

  v13 = a5;
  v27 = a6;
  v33 = a7;
  v30 = a9;
  v31 = a11;
  v28 = a12;
  v32 = a3;
  v24 = a2;
  v34 = a1;
  v29 = a13;
  v23 = 0;
  memset(v37, 0, sizeof(v37));
  v15 = 0;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = *((_QWORD *)CurrentThread + 23);
  if ( a8 )
    v15 = *((_BYTE *)CurrentThread + 562);
  v25 = 0LL;
  Object = 0LL;
  if ( a4 )
  {
    v18 = sub_140732D40(a4, 0x72437350u, (__int64)&Object, 0LL, 0LL);
    if ( v18 < 0 )
      return (unsigned int)v18;
    v13 = Object;
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741816;
    ObfReferenceObjectWithTag(a5, 0x72437350u);
  }
  if ( v13 != (PVOID)v17 && !sub_14024E388((ULONG_PTR)v13) )
    return 3221225473LL;
  v19 = v31;
  if ( v31 && a8 )
    v19 = -(__int64)((*((_BYTE *)v13 + 992) & 1) != 0) & v31;
  if ( !v27
    && !v19
    && ((*((_DWORD *)v13 + 628) & 1) != 0
     || (*(_DWORD *)(v17 + 2512) & 1) != 0
     || _bittest((const signed __int32 *)v13 + 629, 0xEu)
     || _bittest((const signed __int32 *)(v17 + 2516), 0xEu)) )
  {
    return 3221225506LL;
  }
  if ( !v15 )
  {
LABEL_12:
    if ( (*((_DWORD *)v13 + 543) & 1) != 0 && !*((_QWORD *)v13 + 280) && a8 )
    {
      v18 = -1073741790;
      goto LABEL_30;
    }
    sub_140701EB4(a10, &v23);
    --*((_WORD *)CurrentThread + 242);
    if ( !sub_140347810((struct _EX_RUNDOWN_REF *)v13 + 139) )
    {
      sub_1402AC800((__int64)CurrentThread);
      v18 = -1073741558;
      goto LABEL_30;
    }
    ObfReferenceObjectWithTag(v13, 0x72437350u);
    v35 = (__int64)v30;
    v20 = v27;
    v18 = sub_1407A34A0((ULONG_PTR)v13, a8, (__int64)&v35, v19, v28, (__int64)&v23, (__int64)&v25, v29, (__int64)v37);
    if ( v18 < 0 )
    {
      sub_1402AD030((struct _EX_RUNDOWN_REF *)v13 + 139);
      sub_1402AC800((__int64)CurrentThread);
      goto LABEL_30;
    }
    ObfDereferenceObjectWithTag(v13, 0x72437350u);
    v18 = sub_140701218(
            (ULONG_PTR)v25,
            (ULONG_PTR)v13,
            v30,
            &v23,
            v24,
            (char *)v29,
            v20,
            v28,
            (PACCESS_STATE)v37,
            (PVOID *)v34,
            (_OWORD *)v33);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)v13 + 139);
    sub_1402AC800((__int64)CurrentThread);
    ObfDereferenceObject(v25);
    return (unsigned int)v18;
  }
  v22 = *((_DWORD *)v13 + 543);
  if ( (v22 & 0x1000) == 0 )
  {
    if ( (v22 & 1) != 0 )
    {
      v18 = -1073741816;
LABEL_30:
      ObfDereferenceObjectWithTag(v13, 0x72437350u);
      return (unsigned int)v18;
    }
    goto LABEL_12;
  }
  ObfDereferenceObjectWithTag(v13, 0x72437350u);
  return 3221225480LL;
}
