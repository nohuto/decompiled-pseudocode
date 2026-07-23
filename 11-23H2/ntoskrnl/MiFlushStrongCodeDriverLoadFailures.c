/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x140B75990
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushStrongCodeDriverLoadFailures()
{
  struct _KTHREAD *Lock; // rdi
  const CHAR **v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // [rsp+28h] [rbp-69h]
  int v7; // [rsp+30h] [rbp-61h]
  int v8; // [rsp+48h] [rbp-49h] BYREF
  int v9; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v10; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+58h] [rbp-39h] BYREF
  char v12[16]; // [rsp+78h] [rbp-19h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp-9h]
  int v14; // [rsp+90h] [rbp-1h]
  int v15; // [rsp+94h] [rbp+3h]
  const CHAR *v16; // [rsp+98h] [rbp+7h]
  _DWORD v17[2]; // [rsp+A0h] [rbp+Fh] BYREF
  int *v18; // [rsp+A8h] [rbp+17h]
  int v19; // [rsp+B0h] [rbp+1Fh]
  int v20; // [rsp+B4h] [rbp+23h]
  int *v21; // [rsp+B8h] [rbp+27h]
  int v22; // [rsp+C0h] [rbp+2Fh]
  int v23; // [rsp+C4h] [rbp+33h]
  __int64 *v24; // [rsp+C8h] [rbp+37h]
  int v25; // [rsp+D0h] [rbp+3Fh]
  int v26; // [rsp+D4h] [rbp+43h]

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (const CHAR **)qword_140C65908;
    if ( qword_140C65908 == &qword_140C65908 )
      break;
    if ( *((PVOID **)qword_140C65908 + 1) != &qword_140C65908
      || (v3 = *(_QWORD *)qword_140C65908, *(PVOID *)(*(_QWORD *)qword_140C65908 + 8LL) != qword_140C65908) )
    {
      __fastfail(3u);
    }
    qword_140C65908 = *(PVOID *)qword_140C65908;
    *(_QWORD *)(v3 + 8) = &qword_140C65908;
    if ( **(_DWORD **)&qword_140C698E8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000000LL) )
    {
      tlgCreate1Sz_char((__int64)v12, v1[2]);
      v15 = 0;
      v17[1] = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v13 = v17;
      v16 = v1[4];
      v17[0] = *((unsigned __int16 *)v1 + 12);
      v8 = *((_DWORD *)v1 + 10);
      v18 = &v8;
      v9 = *((_DWORD *)v1 + 11);
      v21 = &v9;
      v24 = &v10;
      v14 = 2;
      v19 = 4;
      v22 = 4;
      v10 = 0x1000000LL;
      v25 = 8;
      tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_14003870B, v4, 1u, v6, v7, 8u, &v11);
    }
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
