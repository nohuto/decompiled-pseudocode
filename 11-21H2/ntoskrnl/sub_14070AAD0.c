/*
 * XREFs of sub_14070AAD0 @ 0x14070AAD0
 * Callers:
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

__int64 __fastcall sub_14070AAD0(
        int a1,
        char a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  int v9; // ebx
  BOOLEAN v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r15d
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  void *v23; // rdi
  int v24; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v26; // [rsp+30h] [rbp-79h]
  int v27; // [rsp+30h] [rbp-79h]
  int v28; // [rsp+38h] [rbp-71h]
  int v29; // [rsp+38h] [rbp-71h]
  BOOLEAN v30; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN v31; // [rsp+51h] [rbp-58h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-57h]
  __int64 ImpersonationLevel; // [rsp+58h] [rbp-51h] BYREF
  int v34[2]; // [rsp+60h] [rbp-49h] BYREF
  void *v35; // [rsp+68h] [rbp-41h]
  __int64 v36; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+78h] [rbp-31h] BYREF
  int *v38; // [rsp+98h] [rbp-11h]
  __int64 v39; // [rsp+A0h] [rbp-9h]

  v9 = a4;
  ImpersonationLevel = a7;
  v36 = a8;
  v35 = a9;
  *(_QWORD *)v34 = a4;
  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  EnableHardErrors = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v15 = v14 | 0x80000;
  if ( (a6 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x108000;
  if ( (a6 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v17 = v16;
  v18 = sub_1407122B0(a1, v17, v9, a3, a5, ImpersonationLevel, v26, v28, v36, v35);
  v19 = v18;
  if ( !ImpersonationLevel && a2 && (a6 & 0x20) == 0 )
  {
    if ( (v20 = v18 + 1073741724, v20 <= 0xE) && (v21 = 17473, _bittest(&v21, v20))
      || v19 == -1073741790
      || v19 == -1073741421 )
    {
      v31 = 0;
      v30 = 0;
      LODWORD(ImpersonationLevel) = 0;
      v23 = (void *)sub_14072A6B0(KeGetCurrentThread(), 1LL, 1953261124LL, &v31, &v30, &ImpersonationLevel, 0LL);
      v19 = sub_1406CB908(2, 0, 0LL);
      if ( v19 >= 0 )
      {
        v24 = sub_1407122B0(a1, v17, v34[0], a3, a5, 0LL, v27, v29, v36, v35);
        CurrentThread = KeGetCurrentThread();
        v19 = v24;
        if ( v23 )
          PsImpersonateClient(CurrentThread, v23, v31, v30, (SECURITY_IMPERSONATION_LEVEL)ImpersonationLevel);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v19 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140C03868 > 5
          && sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
        {
          *(_QWORD *)v34 = 0x1000000LL;
          v38 = v34;
          v39 = 8LL;
          sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_14002A129, 0LL, 0LL, 3u, &v37);
        }
      }
      if ( v23 )
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v19;
}
