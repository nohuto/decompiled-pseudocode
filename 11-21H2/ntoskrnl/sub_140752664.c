/*
 * XREFs of sub_140752664 @ 0x140752664
 * Callers:
 *     sub_140751A80 @ 0x140751A80 (sub_140751A80.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140752664(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  int v4; // r14d
  REGHANDLE v5; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v7; // al
  REGHANDLE v8; // rsi
  _DWORD *v9; // rax
  bool v10; // si
  int v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-41h] BYREF
  char *v16; // [rsp+58h] [rbp-31h]
  int v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+64h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-19h] BYREF
  char *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  int *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  _DWORD *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        a1[3] = KeGetCurrentThread();
        do
        {
          v3 = (_DWORD *)a1[9];
          ++*v3;
          KeReleaseGuardedMutex(&stru_140C237C0);
          v4 = v3[1];
          v13 = a1[10];
          v12 = v4;
          if ( byte_140C5AE14 )
          {
            v5 = RegHandle;
            if ( EtwEventEnabled(RegHandle, &stru_14000FF78) )
            {
              v26 = 0;
              v23 = 4LL;
              UserData.Ptr = (ULONGLONG)&v13;
              *(_QWORD *)&UserData.Size = 8LL;
              v20 = (char *)a1 + 36;
              v21 = 16LL;
              v22 = &v12;
              v25 = v4;
              v24 = v3 + 3;
              EtwWrite(v5, &stru_14000FF78, 0LL, 4u, &UserData);
            }
          }
          CurrentIrql = KeGetCurrentIrql();
          sub_14042A5E0((char *)a1 + 52, v3 + 3);
          v7 = KeGetCurrentIrql();
          if ( v7 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v7);
          v14 = a1[10];
          if ( byte_140C5AE14 )
          {
            v8 = RegHandle;
            if ( EtwEventEnabled(RegHandle, &stru_14000FF68) )
            {
              v15.Reserved = 0;
              v18 = 0;
              v15.Ptr = (ULONGLONG)&v14;
              v15.Size = 8;
              v16 = (char *)a1 + 36;
              v17 = 16;
              EtwWrite(v8, &stru_14000FF68, 0LL, 2u, &v15);
            }
          }
          if ( *((_DWORD *)KeGetCurrentThread() + 121) )
            __fastfail(0x20u);
          ExAcquireFastMutex(&stru_140C237C0);
          v9 = (_DWORD *)a1[9];
          v10 = v9 && v3 != v9;
          if ( (*v3)-- == 1 )
            ExFreePoolWithTag(v3, 0x74655350u);
        }
        while ( v10 );
        a1[3] = 0LL;
      }
    }
  }
}
