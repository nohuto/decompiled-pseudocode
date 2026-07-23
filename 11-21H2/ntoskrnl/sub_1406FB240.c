/*
 * XREFs of sub_1406FB240 @ 0x1406FB240
 * Callers:
 *     NtMapViewOfSection @ 0x1406FB000 (NtMapViewOfSection.c)
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406FB240(
        __int64 a1,
        void *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        KPROCESSOR_MODE a9,
        __int64 *a10)
{
  int v13; // eax
  int v14; // r8d
  ULONG_PTR v15; // r10
  PVOID *v16; // r15
  __int64 result; // rax
  ACCESS_MASK v18; // edx
  NTSTATUS v19; // r13d
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF

  *(_OWORD *)a10 = 0LL;
  *((_OWORD *)a10 + 1) = 0LL;
  *((_OWORD *)a10 + 2) = 0LL;
  v13 = sub_14032BCC0(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = v13;
  if ( v13 == -1 )
    return 3221225541LL;
  *((_DWORD *)a10 + 6) = v13 & 7;
  v16 = (PVOID *)(a10 + 5);
  if ( v14 )
  {
    *v16 = (PVOID)v15;
    a10[4] = (__int64)a2;
  }
  else
  {
    result = sub_140732D40(v15, 0x77566D4Du, (__int64)(a10 + 5), 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v18 = *((_DWORD *)qword_140015E00 + *((unsigned int *)a10 + 6));
    Object = 0LL;
    v19 = ObReferenceObjectByHandle(a2, v18, MmSectionObjectType, a9, &Object, 0LL);
    a10[4] = (__int64)Object;
    if ( v19 < 0 )
    {
      ObfDereferenceObjectWithTag(*v16, 0x77566D4Du);
      return (unsigned int)v19;
    }
  }
  if ( a9 )
  {
    v20 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    v21 = (__int64 *)a5;
    v22 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  else
  {
    v21 = (__int64 *)a5;
  }
  *a10 = *a4;
  a10[1] = *v21;
  if ( a6 )
  {
    if ( a9 )
    {
      v23 = a6;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      *(_BYTE *)(v23 + 7) = *(_BYTE *)(v23 + 7);
    }
    a10[2] = *(_QWORD *)a6;
  }
  else
  {
    a10[2] = 0LL;
  }
  v24 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v25 = a10[1];
    if ( v25 <= 0x7FFFFFFF0000LL - v24 && v24 + v25 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0LL;
  }
  if ( !a3 )
  {
    ObfDereferenceObject((PVOID)a10[4]);
    ObfDereferenceObjectWithTag((PVOID)a10[5], 0x77566D4Du);
  }
  return 3221225485LL;
}
