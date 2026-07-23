/*
 * XREFs of PspQueryQuotaLimits @ 0x1407BCE64
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x14034C3F8 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryQuotaLimits(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  size_t v6; // rdi
  __int64 result; // rax
  _QWORD *v10; // rcx
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // [rsp+40h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD Src[12]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+C8h] [rbp-50h] BYREF

  v6 = a4;
  memset(Src, 0, 0x58uLL);
  Object = 0LL;
  v14 = 0;
  memset(&v20, 0, sizeof(v20));
  if ( (_DWORD)v6 != 48 && (_DWORD)v6 != 88 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a6,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)Object + 173);
    Src[0] = v10[24];
    Src[1] = v10[8];
    Src[4] = v10[40];
    Src[6] = v10[56];
    Src[5] = -1LL;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v20);
    v11 = MmQueryWorkingSetInformation(&v19, &v18, &v17, &Src[2], &Src[3], &v14);
    KiUnstackDetachProcess(&v20);
    v12 = 2 - ((v14 & 4) != 0);
    if ( (v14 & 1) != 0 )
      v13 = v12 | 4;
    else
      v13 = v12 | 8;
    LODWORD(Src[10]) = v13;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( v11 >= 0 )
    {
      memmove(a3, Src, v6);
      if ( a5 )
        *a5 = v6;
    }
    return (unsigned int)v11;
  }
  return result;
}
