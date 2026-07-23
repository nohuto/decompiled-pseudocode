/*
 * XREFs of sub_14066F980 @ 0x14066F980
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14066FCE4 @ 0x14066FCE4 (sub_14066FCE4.c)
 *     sub_14066FDE8 @ 0x14066FDE8 (sub_14066FDE8.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_1406E5CB0 @ 0x1406E5CB0 (sub_1406E5CB0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall sub_14066F980(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  char v7; // bl
  unsigned __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v13; // si
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v18; // rcx
  int v19; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v23; // [rsp+58h] [rbp-90h]
  _QWORD v24[2]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v25[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 *v26; // [rsp+78h] [rbp-70h]
  PSECURITY_DESCRIPTOR v27; // [rsp+80h] [rbp-68h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v7 = a4;
  v11 = a5;
  v24[1] = a7;
  v28 = 0LL;
  v21 = 0LL;
  v24[0] = 0LL;
  v25[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v13 = *((_BYTE *)KeGetCurrentThread() + 562);
  *(_QWORD *)v22 = 0LL;
  SecurityDescriptor = 0LL;
  v23 = (__int128 *)a5;
  if ( !v13 )
  {
    LOBYTE(a4) = 1;
    v19 = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, a4, (__int64)&SecurityDescriptor);
    if ( v19 < 0 )
      goto LABEL_18;
LABEL_3:
    sub_14066FDE8(SecurityDescriptor);
    if ( a2 > 3
      || !a2
      || a3 > 5
      || v7 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1)
      || a6 > 0x1000
      || a3 == 3 && a2 == 3
      || a3 == 5 )
    {
      v19 = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(stru_140D3CB68, v13) )
    {
      LOBYTE(a4) = v7;
      v19 = sub_14066FCE4(&v21, a2, a3, a4);
      if ( v19 >= 0 )
      {
        v15 = v21;
        *a1 = v21 ^ 0x41C64E6DA3BC0074LL;
        v25[0] = a6;
        v26 = v23;
        v27 = SecurityDescriptor;
        if ( a2 == 3 )
        {
          if ( v13 )
          {
            v16 = *((_QWORD *)KeGetCurrentThread() + 23);
            LODWORD(v15) = v21;
          }
          else
          {
            LODWORD(v16) = (_DWORD)PsInitialSystemProcess;
          }
          v19 = sub_140798334((int)v22, v16, 0, a3, 0LL);
          if ( v19 >= 0 )
          {
            v19 = sub_14066FED4(v22[0], v15, (unsigned int)v25, v16, (__int64)v24);
            if ( v19 >= 0 )
              sub_1402AD030((struct _EX_RUNDOWN_REF *)(v24[0] + 8LL));
          }
        }
        else
        {
          v19 = sub_1406E5CB0(v15, v25);
        }
      }
    }
    else
    {
      v19 = -1073741727;
    }
    goto LABEL_18;
  }
  v14 = 0x7FFFFFFF0000LL;
  v18 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v18 = (__int64)a1;
  *(_BYTE *)v18 = *(_BYTE *)v18;
  *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v14 = a5;
    v28 = *(_OWORD *)v14;
    v23 = &v28;
  }
  if ( !a7 )
  {
    v19 = -1073741819;
    goto LABEL_18;
  }
  LOBYTE(a4) = 1;
  LOBYTE(v14) = v13;
  v19 = SeCaptureSecurityDescriptor((_DWORD)a7, v14, 1, a4, (__int64)&SecurityDescriptor);
  if ( v19 >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v22 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)v22 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v14) = v13;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v14, v11, a4);
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v19;
}
