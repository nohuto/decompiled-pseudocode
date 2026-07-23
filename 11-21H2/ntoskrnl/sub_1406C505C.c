/*
 * XREFs of sub_1406C505C @ 0x1406C505C
 * Callers:
 *     IoCreateSymbolicLink2 @ 0x1406C4C80 (IoCreateSymbolicLink2.c)
 *     sub_1406C4D40 @ 0x1406C4D40 (sub_1406C4D40.c)
 *     sub_14082BE90 @ 0x14082BE90 (sub_14082BE90.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C5404 @ 0x1406C5404 (sub_1406C5404.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406C505C(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // r12d
  PVOID *p_Object; // rcx
  int v8; // r14d
  char *v9; // rdi
  _WORD *v10; // r14
  __int16 v11; // cx
  unsigned __int16 *v12; // r12
  void *Pool2; // rax
  __int64 v14; // r13
  unsigned __int16 *v16; // rax
  REGHANDLE v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // rax
  unsigned int v20; // r9d
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-E8h] BYREF
  int v28; // [rsp+58h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-D0h]
  __int64 v31[3]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-A8h] BYREF

  v30 = a3;
  v6 = a2;
  v27 = a2;
  v32 = a1;
  v28 = a2;
  v31[1] = a3;
  v31[2] = a4;
  v31[0] = 0LL;
  Object = 0LL;
  p_Object = &Object;
  LOBYTE(p_Object) = a5;
  v8 = sub_14072B3B0((_DWORD)p_Object, (_DWORD)qword_140C24FC0, a3, a5);
  if ( v8 < 0 )
  {
    v9 = (char *)Object;
    goto LABEL_30;
  }
  v9 = (char *)Object;
  *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)v9 + 3) = 0LL;
  if ( (*(_DWORD *)a4 & 1) != 0 )
  {
    *((_DWORD *)v9 + 7) = 16;
    *((_QWORD *)v9 + 1) = *(_QWORD *)(a4 + 8);
    *((_QWORD *)v9 + 2) = *(_QWORD *)(a4 + 16);
    goto LABEL_13;
  }
  v10 = v9 + 10;
  if ( a5 )
  {
    *v10 = *(_WORD *)(a4 + 10);
  }
  else
  {
    v11 = *(_WORD *)(a4 + 8);
    *v10 = v11;
    if ( *(_WORD *)(a4 + 10) > *(_WORD *)(a4 + 8) )
      *v10 = v11 + 2;
  }
  v12 = (unsigned __int16 *)(v9 + 8);
  *((_WORD *)v9 + 4) = *(_WORD *)(a4 + 8);
  if ( (*(_DWORD *)a4 & 2) != 0 )
    *((_DWORD *)v9 + 7) |= 0x20u;
  if ( !*v10 )
  {
    *((_QWORD *)v9 + 2) = 0LL;
    goto LABEL_13;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned __int16)*v10, 1953331539LL);
  *((_QWORD *)v9 + 2) = Pool2;
  if ( Pool2 )
  {
    if ( a5 )
      v12 = (unsigned __int16 *)(v9 + 10);
    memmove(Pool2, *(const void **)(a4 + 16), *v12);
LABEL_13:
    v8 = sub_1406C5404(0LL);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
        *((_DWORD *)v9 + 7) |= 2u;
      v8 = sub_140729C30(v9, 0LL, 0, 0LL, (__int64)v31);
      v9 = 0LL;
      Object = 0LL;
      if ( v8 >= 0 )
      {
        *v32 = v31[0];
        v6 = v27;
        v14 = v30;
        v8 = 0;
        goto LABEL_18;
      }
    }
    goto LABEL_29;
  }
  v8 = -1073741801;
LABEL_29:
  v6 = v27;
LABEL_30:
  v14 = v30;
LABEL_18:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( (*(_DWORD *)a4 & 5) == 0 )
  {
    LODWORD(Object) = v8;
    v16 = *(unsigned __int16 **)(v14 + 16);
    v28 = v6;
    v17 = qword_140C15DF8;
    if ( qword_140C15DF8 )
    {
      LOWORD(v27) = 0;
      v18 = 0;
      if ( *((_QWORD *)v16 + 1) )
      {
        UserData[0].Ptr = *((_QWORD *)v16 + 1);
        UserData[0].Size = *v16;
        UserData[0].Reserved = 0;
        v18 = 1;
      }
      v19 = v18;
      UserData[v19].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&UserData[v19].Size = 2LL;
      v20 = v18 + 1;
      v21 = *(_QWORD *)(a4 + 16);
      if ( v21 )
      {
        v22 = v20;
        UserData[v22].Ptr = v21;
        UserData[v22].Size = *(unsigned __int16 *)(a4 + 8);
        *(&UserData[0].Reserved + 1 * v22) = 0;
        ++v20;
      }
      v23 = v20;
      UserData[v23].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&UserData[v23].Size = 2LL;
      v24 = v20 + 1;
      v25 = v24;
      UserData[v25].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&UserData[v25].Size = 4LL;
      v26 = ++v24;
      UserData[v26].Ptr = (ULONGLONG)&Object;
      *(_QWORD *)&UserData[v26].Size = 4LL;
      EtwWrite(v17, &stru_14000EB48, 0LL, v24 + 1, UserData);
    }
  }
  return (unsigned int)v8;
}
