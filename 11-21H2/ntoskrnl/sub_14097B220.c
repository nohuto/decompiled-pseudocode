/*
 * XREFs of sub_14097B220 @ 0x14097B220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097B220(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // r13
  PVOID v8; // rdi
  char v9; // dl
  __int64 v10; // rcx
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rsi
  __int64 v14; // r9
  PVOID v15; // rsi
  char v17; // [rsp+40h] [rbp-B8h]
  int v18; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v20; // [rsp+58h] [rbp-A0h]
  ULONG_PTR v21; // [rsp+68h] [rbp-90h]
  _DWORD *v22; // [rsp+70h] [rbp-88h]
  unsigned __int64 v23; // [rsp+78h] [rbp-80h]
  _BYTE v24[48]; // [rsp+88h] [rbp-70h] BYREF

  v5 = a4;
  v23 = a2;
  v21 = BugCheckParameter1;
  v22 = a5;
  memset(v24, 0, sizeof(v24));
  Object = 0LL;
  v18 = 0;
  v8 = 0LL;
  v20 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v17 = v9;
  if ( a5 && v9 == 1 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !a4 )
    goto LABEL_12;
  if ( a4 <= 0x1000 )
  {
    v8 = sub_1402828F0(256, a4, 0x44456D4Du);
    v20 = v8;
    if ( !v8 )
    {
      v11 = -1073741670;
      goto LABEL_17;
    }
    memmove(v8, a3, v5);
    v9 = v17;
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    v13 = *((_QWORD *)CurrentThread + 23);
    if ( BugCheckParameter1 == -1LL )
    {
      Object = (PVOID)*((_QWORD *)CurrentThread + 23);
    }
    else
    {
      v11 = sub_140732D40(BugCheckParameter1, 8, (__int64)PsProcessType, v9, 0x6D566D4Du, &Object, 0LL, 0LL);
      if ( v11 < 0 )
        goto LABEL_17;
      sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v24, v14);
    }
    v11 = sub_14097A120(v13, v23, (__int64)v8, v5, &v18);
    goto LABEL_17;
  }
  v11 = -1073741820;
LABEL_17:
  v15 = Object;
  if ( Object && BugCheckParameter1 != -1LL )
  {
    sub_1402D0930((__int64)v24, 0LL);
    ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
  }
  if ( a5 )
    *a5 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
