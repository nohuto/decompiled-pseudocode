/*
 * XREFs of sub_140974020 @ 0x140974020
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14054DBF0 @ 0x14054DBF0 (sub_14054DBF0.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140931E28 @ 0x140931E28 (sub_140931E28.c)
 *     sub_140970F88 @ 0x140970F88 (sub_140970F88.c)
 *     sub_14097100C @ 0x14097100C (sub_14097100C.c)
 *     sub_140971650 @ 0x140971650 (sub_140971650.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_140973EA4 @ 0x140973EA4 (sub_140973EA4.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_140976F28 @ 0x140976F28 (sub_140976F28.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140974020(const void **a1, char a2, int *a3, int *a4)
{
  char v7; // r12
  _QWORD *v8; // r15
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  PVOID v12; // r14
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  UNICODE_STRING *v18; // rsi
  unsigned int *v19; // rdi
  int v20; // eax
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h]
  int v24; // [rsp+68h] [rbp-29h] BYREF
  int v25; // [rsp+6Ch] [rbp-25h]
  struct _KTHREAD *v26; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  __int128 v28; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-1h]
  __int64 v30; // [rsp+98h] [rbp+7h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  PVOID v32; // [rsp+A8h] [rbp+17h]

  v25 = 1;
  v31 = 0LL;
  v29 = 0;
  v24 = 0;
  v30 = 0LL;
  v26 = 0LL;
  Object = 0LL;
  v7 = 0;
  v32 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  v9 = sub_14097638C((_DWORD)a1, 0, (_DWORD)a3, (unsigned int)&Handle, (__int64)&Object);
  v10 = v23;
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_38;
  if ( (a2 & 8) != 0 )
  {
    if ( __PAIR64__(*a4, *a3) != v23 )
    {
      v11 = -1073740748;
LABEL_5:
      v12 = Object;
LABEL_40:
      sub_140974FBC(v10, HIDWORD(v23), (_DWORD)a1, v11, 1);
      v18 = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    v13 = HIDWORD(v23);
    *a3 = v23;
    *a4 = v13;
  }
  if ( (a2 & 1) != 0 )
  {
    v8 = sub_140970F88(*a3, *a4, a1);
    if ( !v8 )
    {
      v11 = -1073741670;
      goto LABEL_5;
    }
  }
  v26 = sub_1406F5B50();
  if ( v8 )
    sub_140973D6C((unsigned __int64 *)&qword_140C533B0, v8, 0);
  v14 = 1073741879;
  if ( (dword_140D06880 & 0x4000) == 0 )
  {
    v12 = Object;
    v19 = (unsigned int *)a3;
    goto LABEL_34;
  }
  if ( (a2 & 4) == 0 )
  {
    v11 = sub_140931E28(*a3, *a4, &v24);
    if ( v11 >= 0 )
    {
      v7 = v24;
      goto LABEL_16;
    }
LABEL_38:
    v12 = Object;
    goto LABEL_39;
  }
LABEL_16:
  v12 = Object;
  if ( (v7 & 1) != 0 )
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v32 = Object;
    if ( v11 < 0 )
      goto LABEL_39;
    v15 = sub_140287970((__int64)v12);
    v11 = sub_140976F28(v15, v17, v16, &v30);
    if ( v11 < 0 )
      goto LABEL_39;
  }
  v25 = 0;
  if ( (v7 & 2) != 0 )
  {
    v18 = sub_14097100C((PCUNICODE_STRING)a1);
    if ( v18 )
    {
      v11 = sub_14054DBF0(v30, (__int64)v12, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v28);
      v31 = v29;
    }
    else
    {
      v11 = -1073741670;
    }
    sub_140974FBC(v10, HIDWORD(v23), (_DWORD)a1, v11, 2);
    if ( v11 < 0 )
    {
LABEL_41:
      if ( v26 )
        sub_1406F5AF0((__int64)v26);
      goto LABEL_43;
    }
    *(_OWORD *)&v18[1].Buffer = v28;
    LODWORD(v18[2].Buffer) = v31;
    sub_140973EA4(v18);
    v14 = v11;
  }
  ObfDereferenceObject(v12);
  v19 = (unsigned int *)a3;
  v12 = 0LL;
  if ( (a2 & 2) != 0 )
    goto LABEL_34;
  v20 = sub_140971650(*a3, *a4, (__int64)a1, (__int64)Handle);
  if ( v20 == -1073741515 )
  {
    v20 = 1073741879;
  }
  else if ( v20 < 0 )
  {
    v14 = v20;
    goto LABEL_34;
  }
  if ( v14 == 1073741879 )
    v14 = v20;
LABEL_34:
  sub_1406F5AF0((__int64)v26);
  v26 = 0LL;
  if ( (a2 & 6) == 0 )
    sub_140973630(*v19, *a4);
  v11 = v14;
  v18 = 0LL;
  if ( v25 )
  {
LABEL_39:
    v18 = 0LL;
    if ( v11 == 1073741879 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_43:
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( v32 )
    ObfDereferenceObject(v32);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)v11;
}
