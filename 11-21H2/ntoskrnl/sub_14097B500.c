/*
 * XREFs of sub_14097B500 @ 0x14097B500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_14097A08C @ 0x14097A08C (sub_14097A08C.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097B500(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        char *Src,
        size_t Size,
        unsigned __int64 a8,
        _DWORD *a9)
{
  __int64 v9; // rdi
  ULONG_PTR v10; // r11
  char *v11; // r9
  struct _MDL *v12; // r14
  char *v13; // r15
  char v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v19; // rbx
  PVOID v20; // r12
  ULONG_PTR v21; // rax
  void *v22; // rbx
  int v23; // r12d
  ULONG_PTR v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 Tag; // [rsp+20h] [rbp-188h]
  KPROCESSOR_MODE v28; // [rsp+60h] [rbp-148h]
  int v29; // [rsp+64h] [rbp-144h] BYREF
  int v30; // [rsp+68h] [rbp-140h]
  ULONG_PTR v31; // [rsp+70h] [rbp-138h]
  int v32; // [rsp+78h] [rbp-130h]
  PVOID Object; // [rsp+80h] [rbp-128h] BYREF
  __int64 v34; // [rsp+88h] [rbp-120h] BYREF
  int v35[2]; // [rsp+90h] [rbp-118h]
  PVOID v36; // [rsp+98h] [rbp-110h]
  __int64 v37; // [rsp+A0h] [rbp-108h] BYREF
  PVOID P; // [rsp+A8h] [rbp-100h]
  __int64 v39; // [rsp+B0h] [rbp-F8h]
  PVOID Base; // [rsp+B8h] [rbp-F0h]
  __int64 v41; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v42; // [rsp+C8h] [rbp-E0h]
  _DWORD *v43; // [rsp+D0h] [rbp-D8h]
  char *v44; // [rsp+D8h] [rbp-D0h]
  ULONG_PTR v45; // [rsp+F0h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+F8h] [rbp-B0h]
  _OWORD v47[3]; // [rsp+110h] [rbp-98h] BYREF
  _BYTE v48[32]; // [rsp+140h] [rbp-68h] BYREF

  v9 = a4;
  v39 = a4;
  Base = a3;
  *(_QWORD *)v35 = a2;
  v10 = BugCheckParameter1;
  v31 = BugCheckParameter1;
  v42 = (_QWORD *)a8;
  v45 = BugCheckParameter1;
  v11 = Src;
  v44 = Src;
  v32 = Size;
  v46 = a8;
  v43 = a9;
  memset(v47, 0, sizeof(v47));
  v29 = 0;
  v37 = 0LL;
  LODWORD(v34) = 0;
  v12 = 0LL;
  v13 = 0LL;
  v30 = 0;
  LODWORD(v36) = 0;
  Object = 0LL;
  v41 = 0LL;
  v14 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = v14;
  if ( v14 == 1 )
  {
    if ( a9 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a9;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    if ( a8 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( a8 < 0x7FFFFFFF0000LL )
        v16 = a8;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( (unsigned int)Size > 0xFFFF )
    {
LABEL_12:
      v17 = -1073741820;
LABEL_41:
      v29 = v17;
      goto LABEL_42;
    }
    if ( (unsigned int)Size > 0x20 )
    {
      v12 = (struct _MDL *)sub_1402828F0(64, (unsigned int)Size, 0x49506E45u);
      P = v12;
      if ( !v12 )
      {
        v17 = -1073741670;
        goto LABEL_41;
      }
      v11 = v44;
      v14 = v28;
    }
    else
    {
      v12 = (struct _MDL *)v48;
      P = v48;
    }
    if ( v14 == 1 && ((unsigned __int64)&v11[(unsigned int)Size] > 0x7FFFFFFF0000LL || &v11[(unsigned int)Size] < v11) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v12, v11, (unsigned int)Size);
    v9 = v39;
    v14 = v28;
    v10 = v31;
  }
  if ( (v35[0] & 0xFFF) != 0 )
  {
    v17 = -1073741584;
    goto LABEL_41;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
LABEL_26:
    v17 = -1073741582;
    goto LABEL_41;
  }
  CurrentThread = KeGetCurrentThread();
  v19 = *((_QWORD *)CurrentThread + 23);
  if ( v10 == -1LL )
  {
    Object = (PVOID)*((_QWORD *)CurrentThread + 23);
    goto LABEL_31;
  }
  v17 = sub_140732D40(v10, 8, (__int64)PsProcessType, v14, 0x6D566D4Du, &Object, 0LL, 0LL);
  v29 = v17;
  if ( v17 >= 0 )
  {
    v9 = v39;
LABEL_31:
    v20 = Object;
    sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v47, (__int64)v11);
    v30 = 1;
    v21 = sub_14030E7C0(*(unsigned __int64 *)v35, 0, &v29);
    v13 = (char *)v21;
    if ( !v21 || (*(_DWORD *)(v21 + 48) & 0x6200000) != 0x4200000 )
    {
      v17 = -1073741800;
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(v21 + 64) & 1) == 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v21 + 72) + 76LL) )
      {
        v17 = sub_14097A358(
                (__int64)Object,
                v19,
                v21,
                v28,
                *(unsigned __int64 *)v35,
                v32,
                (int *)v12,
                (unsigned __int64)Base,
                v9,
                a5,
                &v37);
      }
      else
      {
        v22 = (void *)sub_140347920(v19, 0x746C6644u);
        v17 = sub_14097A714((__int64)v20, (ULONG_PTR)v13, v28, (__int64)v22, *(unsigned __int64 *)v35, v32, v12, &v41);
        v13 = 0LL;
        ObfDereferenceObject(v22);
      }
      goto LABEL_41;
    }
    if ( v32 )
      goto LABEL_12;
    if ( v9 )
    {
      sub_1402D0930((__int64)v47, 0LL);
      v23 = 0;
      v17 = sub_140979274((ULONG_PTR)Object, (__int64)v13, v28, *(unsigned __int64 *)v35, Base, v9, a5, &v37, &v34);
      v29 = v17;
      goto LABEL_43;
    }
    goto LABEL_26;
  }
LABEL_42:
  v23 = v30;
LABEL_43:
  v24 = v31;
  if ( v13 )
    sub_14032E700(v13);
  if ( v23 )
    sub_1402D0930((__int64)v47, 0LL);
  if ( Object && v24 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v12 && v12 != (struct _MDL *)v48 )
    ExFreePoolWithTag(v12, 0);
  v25 = (volatile signed __int32 *)v41;
  if ( v41 )
  {
    sub_140757090(Object, 0LL, *(void **)(v41 + 16), (__int64)v11, Tag, *(_DWORD *)(v41 + 36), *(_DWORD *)(v41 + 40));
    sub_14097A08C(v25);
  }
  if ( v42 )
    *v42 = v37;
  if ( a9 )
    *a9 = v34;
  return (unsigned int)v17;
}
