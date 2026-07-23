/*
 * XREFs of sub_14081A150 @ 0x14081A150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14081A150(
        unsigned __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4,
        int *Src,
        char a6)
{
  char v10; // bl
  int v11; // ebx
  PVOID v12; // rdi
  int v13; // edi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  _DWORD *Pool2; // rax
  _DWORD *v17; // rsi
  PVOID v18; // rbx
  __int64 v20; // rcx
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-50h] BYREF

  P = 0LL;
  v22 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  SeCaptureSubjectContext(&SubjectContext);
  if ( !sub_140724008((__int64)&SubjectContext, v10) )
  {
    v11 = -1073741727;
LABEL_30:
    SeReleaseSubjectContext(&SubjectContext);
    return (unsigned int)v11;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v10, &Object, 0LL);
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return (unsigned int)v11;
    v20 = (unsigned int)v11;
LABEL_28:
    sub_1409CF1A0(v20);
    return (unsigned int)v11;
  }
  v12 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_30;
  }
  v11 = sub_140723E0C(a1, (__int64)&P);
  if ( v11 < 0 )
  {
LABEL_16:
    v17 = v22;
    goto LABEL_19;
  }
  if ( ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = *Src;
  if ( (unsigned int)*Src >= 0x43 )
  {
    v11 = -1073741811;
    v12 = Object;
    goto LABEL_16;
  }
  v14 = 12 * v13 + 8;
  if ( 12 * v13 != -8 )
  {
    v15 = (unsigned __int64)Src + v14;
    if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v14, 1917871443LL);
  v17 = Pool2;
  v22 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, (unsigned int)(12 * v13 + 8));
    *v17 = v13;
  }
  else
  {
    v11 = -1073741670;
  }
  v12 = Object;
LABEL_19:
  if ( v11 < 0 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return (unsigned int)v11;
    v20 = 3221225626LL;
    goto LABEL_28;
  }
  v18 = P;
  sub_1407241BC(
    (const int *)P,
    0LL,
    0LL,
    a2,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    a4,
    v17,
    a6);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  SeReleaseSubjectContext(&SubjectContext);
  ObfDereferenceObject(v12);
  return 0LL;
}
