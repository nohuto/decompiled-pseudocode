/*
 * XREFs of sub_1406EC048 @ 0x1406EC048
 * Callers:
 *     sub_14025EA9C @ 0x14025EA9C (sub_14025EA9C.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     ObIsKernelHandle @ 0x14025E6E0 (ObIsKernelHandle.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405945DC @ 0x1405945DC (sub_1405945DC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

NTSTATUS __fastcall sub_1406EC048(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  int v6; // ebx
  PVOID v7; // r15
  void *v8; // r14
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // edi
  NTSTATUS result; // eax
  __int64 v14; // r9
  _QWORD *v15; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h]
  unsigned __int64 v19; // [rsp+58h] [rbp-31h]
  _OWORD v20[3]; // [rsp+60h] [rbp-29h] BYREF

  v18 = a3;
  v19 = a2;
  BugCheckParameter1 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    v11 = 1LL;
    goto LABEL_29;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      v10 = (_DWORD *)*((_QWORD *)CurrentThread + 23);
      if ( (v10[281] & 0x10000) == 0 )
        return -1073741799;
      v11 = sub_14027B520();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( (int)sub_140732D40((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL) >= 0 )
    {
      v10 = (_DWORD *)BugCheckParameter1;
      if ( *((_QWORD *)CurrentThread + 23) != BugCheckParameter1 )
      {
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v20, v14);
        v6 = 1;
      }
      goto LABEL_15;
    }
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, qword_140D06BB0, 0, &Object, 0LL);
    v7 = Object;
    if ( result < 0 )
      return result;
    v15 = sub_1405945DC(*((_QWORD *)Object + 3));
    v8 = v15;
    if ( !v15 )
    {
LABEL_27:
      ObfDereferenceObject(v7);
      return 0;
    }
    if ( (int)sub_1402312E0((ULONG_PTR)v15) < 0 )
    {
      ObfDereferenceObject(v8);
      goto LABEL_27;
    }
    v11 = sub_14027B520();
LABEL_29:
    v10 = (_DWORD *)BugCheckParameter1;
    goto LABEL_6;
  }
  v10 = (_DWORD *)*((_QWORD *)CurrentThread + 23);
LABEL_15:
  v11 = (__int64)(v10 + 416);
LABEL_6:
  v12 = sub_140284EB0(v19, v18, v11, a4);
  if ( v6 )
    sub_1402D0930((__int64)v20, 0LL);
  if ( v8 )
  {
    sub_140231240((__int64)v8, (__int64)v20);
    ObfDereferenceObject(v8);
  }
  if ( (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL || Handle == (char *)-2LL )
  {
    if ( v10 )
    {
      ObfDereferenceObjectWithTag(v10, 0x66506D4Du);
    }
    else if ( v7 )
    {
      ObfDereferenceObject(v7);
    }
  }
  return v12;
}
