/*
 * XREFs of sub_1406D7990 @ 0x1406D7990
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D7990(__int64 a1, __int64 a2, void *a3, unsigned int *a4, char a5)
{
  KPROCESSOR_MODE v9; // di
  __int64 v10; // rdx
  NTSTATUS v11; // edi
  PVOID v12; // r14
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned int *Pool2; // rax
  unsigned int *v17; // rsi
  PVOID v18; // rdi
  PVOID v19; // r15
  unsigned int v21; // ebx
  __int64 v22; // rcx
  NTSTATUS v23; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  unsigned int *v25; // [rsp+50h] [rbp-58h]
  PVOID v26; // [rsp+58h] [rbp-50h] BYREF
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+88h] [rbp-20h]
  unsigned int v30; // [rsp+8Ch] [rbp-1Ch]

  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v26 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v10) = v9;
  if ( !(unsigned __int8)sub_140724008(&SubjectContext, v10) )
  {
    v21 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v21;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v9, &Object, 0LL);
  v23 = v11;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return (unsigned int)v11;
    v22 = (unsigned int)v11;
LABEL_33:
    sub_1409CF1A0(v22);
    return (unsigned int)v11;
  }
  v12 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v21 = -1073741659;
    goto LABEL_36;
  }
  if ( a1 && (v11 = sub_140723E0C(a1, &P), v23 = v11, v11 < 0)
    || a2 && (v11 = sub_140723E0C(a2, &v26), v23 = v11, v11 < 0) )
  {
    v17 = v25;
  }
  else
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *a4;
    v29 = v13;
    if ( v13 >= 0x43 )
    {
      v11 = -1073741811;
      v17 = v25;
    }
    else
    {
      v14 = 12 * v13 + 8;
      v30 = v14;
      if ( 12 * v13 != -8 )
      {
        v15 = (unsigned __int64)a4 + v14;
        if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)a4 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, v14, 1917871443LL);
      v17 = Pool2;
      v25 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, a4, 12 * v13 + 8);
        *v17 = v13;
        v11 = v23;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    v12 = Object;
  }
  if ( v11 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return (unsigned int)v11;
    v22 = 3221225626LL;
    goto LABEL_33;
  }
  v18 = v26;
  v19 = P;
  sub_1407240A0(
    (unsigned int)&SubjectContext,
    (_DWORD)P,
    (_DWORD)v26,
    (_DWORD)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v17,
    a5);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ObfDereferenceObject(v12);
  SeReleaseSubjectContext(&SubjectContext);
  return 0LL;
}
