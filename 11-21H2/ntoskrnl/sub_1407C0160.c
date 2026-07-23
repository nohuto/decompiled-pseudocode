/*
 * XREFs of sub_1407C0160 @ 0x1407C0160
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407C0160(void *a1, int a2, const void *a3, int a4)
{
  char v6; // r13
  _QWORD *v7; // rdi
  char v8; // r12
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  KPROCESSOR_MODE v15; // di
  unsigned __int64 v16; // rdx
  ACCESS_MASK v17; // edx
  NTSTATUS v18; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v20; // r8d
  char v21; // r14
  KPROCESSOR_MODE v23; // r9
  KPROCESSOR_MODE v24; // r9
  int v25; // r14d
  int v26; // r14d
  int v27; // r14d
  __int64 v28; // r8
  __int64 v29; // rdx
  NTSTATUS v30; // eax
  char v31; // [rsp+40h] [rbp-128h]
  unsigned __int8 v32; // [rsp+41h] [rbp-127h]
  PVOID Object; // [rsp+48h] [rbp-120h] BYREF
  char v34; // [rsp+53h] [rbp-115h]
  __int64 v35; // [rsp+58h] [rbp-110h]
  HANDLE Handle; // [rsp+60h] [rbp-108h] BYREF
  __int64 v37; // [rsp+68h] [rbp-100h] BYREF
  int v38; // [rsp+70h] [rbp-F8h]
  int v39; // [rsp+74h] [rbp-F4h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-F0h] BYREF
  int v41; // [rsp+88h] [rbp-E0h]
  __int128 v42; // [rsp+98h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-90h]
  __int128 v46; // [rsp+E8h] [rbp-80h]
  __int64 v47; // [rsp+F8h] [rbp-70h]
  _OWORD v48[2]; // [rsp+100h] [rbp-68h] BYREF

  v38 = a4;
  Handle = a1;
  v42 = 0LL;
  v41 = 0;
  v37 = 0LL;
  memset(v48, 0, sizeof(v48));
  v35 = 0LL;
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v48, 0x20000uLL);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v8 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v40[1] = v40;
  v40[0] = v40;
  sub_140347770((__int64)&v42);
  v39 = 0;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v34 = sub_140AB46D0(v11, v10, v12);
  if ( !v34 )
  {
    v18 = -1073741431;
    goto LABEL_41;
  }
  v15 = *((_BYTE *)KeGetCurrentThread() + 562);
  v32 = v15;
  if ( a2 == 5 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 || (v14 = (unsigned int)(a2 - 3), a2 == 3) )
      {
LABEL_5:
        v31 = 0;
LABEL_6:
        v14 = 4LL;
        goto LABEL_7;
      }
      if ( a2 != 4 )
      {
        if ( qword_140D3B008 )
        {
          v14 = (__int64)Handle;
          if ( Handle )
          {
            v23 = *((_BYTE *)KeGetCurrentThread() + 562);
            Handle = 0LL;
            if ( ObReferenceObjectByHandle((HANDLE)v14, 0, (POBJECT_TYPE)CmKeyObjectType, v23, &Handle, 0LL) >= 0 )
              ObfDereferenceObject(Handle);
          }
        }
        v18 = -1073741821;
        v7 = Object;
        v21 = 0;
        goto LABEL_26;
      }
    }
    v31 = 1;
    goto LABEL_6;
  }
  v14 = 8LL;
  v31 = 1;
LABEL_7:
  if ( v38 != (_DWORD)v14 )
  {
    if ( qword_140D3B008 )
    {
      v14 = (__int64)Handle;
      if ( Handle )
      {
        v24 = *((_BYTE *)KeGetCurrentThread() + 562);
        Handle = 0LL;
        if ( ObReferenceObjectByHandle((HANDLE)v14, 0, (POBJECT_TYPE)CmKeyObjectType, v24, &Handle, 0LL) >= 0 )
          ObfDereferenceObject(Handle);
      }
    }
    v18 = -1073741820;
    v7 = Object;
    v21 = 0;
    goto LABEL_26;
  }
  if ( v15 )
  {
    v16 = (unsigned __int64)a3 + (unsigned int)v14;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v37, a3, (unsigned int)v14);
  if ( a2 == 5 )
    v17 = 0;
  else
    v17 = 2;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, v17, (POBJECT_TYPE)CmKeyObjectType, v15, &Object, 0LL);
  v7 = Object;
  if ( v18 == -1073741790 )
  {
    if ( !v31 )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v9 = 1;
    if ( !sub_14023BD3C((__int64)&SubjectContext, (__int64)&v39) )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v32, &Object, 0LL);
    v7 = Object;
    if ( v18 < 0 )
    {
LABEL_41:
      v21 = 0;
      goto LABEL_26;
    }
    if ( !(unsigned __int8)sub_140915D20(Object) )
    {
      v18 = -1073741790;
      v21 = 0;
      goto LABEL_26;
    }
    v18 = 0;
    v8 = 1;
  }
  v9 = v8;
  if ( v18 < 0 )
    goto LABEL_41;
  if ( qword_140D3B008 && v7 )
    v35 = v7[1];
  if ( a2 == 5 )
  {
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    if ( !dword_140C54CA8 || sub_1402ACD00() )
    {
      v7 = Object;
    }
    else
    {
      v7 = Object;
      *(_QWORD *)&v44 = Object;
      DWORD2(v44) = a2;
      *(_QWORD *)&v45 = &v37;
      DWORD2(v45) = v38;
      v18 = sub_1407C0568(3, (unsigned int)&v44, v20, 18, (__int64)Object, (__int64)v40);
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
          v18 = 0;
        goto LABEL_25;
      }
      v6 = 1;
    }
    if ( !v8 || (v18 = sub_14091607C(&Object, v32, 2LL, &SubjectContext, &v39), v7 = Object, v18 >= 0) )
    {
      v9 = v8;
      if ( a2 != 5 )
      {
        if ( a2 )
        {
          v25 = a2 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  goto LABEL_25;
                v28 = (unsigned int)v37;
                v29 = 4LL;
              }
              else
              {
                v28 = (unsigned int)v37;
                v29 = 3LL;
              }
            }
            else
            {
              v28 = (unsigned int)v37;
              v29 = 2LL;
            }
          }
          else
          {
            v28 = (unsigned int)v37;
            v29 = 1LL;
          }
          v30 = sub_140913964(v7, v29, v28);
        }
        else
        {
          v30 = sub_140913E28(v7, &v37);
        }
        v18 = v30;
        goto LABEL_25;
      }
      *((_WORD *)v7 + 25) = v37;
      v18 = 0;
    }
LABEL_25:
    v21 = 1;
    goto LABEL_26;
  }
  v14 = v7[1];
  if ( (*(_DWORD *)(v14 + 8) & 0x80u) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 0x100000) == 0 )
      goto LABEL_18;
    v18 = -1073741790;
    v21 = 0;
  }
  else
  {
    v18 = -1073741790;
    v21 = 0;
  }
LABEL_26:
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    v18 = sub_1407C04B4(18, (_DWORD)v7, v18, (unsigned int)&v44, (__int64)v40);
  if ( v21 )
    KeLeaveCriticalRegion();
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( qword_140D3B008 )
  {
    LOBYTE(v14) = 20;
    sub_14042A5E0(v14, v48);
  }
  if ( v34 )
    sub_140AB42A0(v14, v13);
  sub_14022EA30((__int64 *)&v42);
  return (unsigned int)v18;
}
