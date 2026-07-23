/*
 * XREFs of sub_14090F9B0 @ 0x14090F9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090F9B0(__int64 a1, __int64 a2, void *a3)
{
  void *v3; // rsi
  void *v4; // r14
  void *v5; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  signed int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r15
  int v14; // r8d
  int v15; // r9d
  int v17; // r8d
  int v18; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r8
  int v21; // eax
  void *v22; // [rsp+30h] [rbp-99h] BYREF
  void *v23; // [rsp+38h] [rbp-91h] BYREF
  void *v24; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v26; // [rsp+58h] [rbp-71h]
  __int64 v27; // [rsp+60h] [rbp-69h]
  __int128 v28; // [rsp+68h] [rbp-61h] BYREF
  __int128 v29; // [rsp+78h] [rbp-51h] BYREF
  __int128 v30; // [rsp+88h] [rbp-41h]
  __int128 v31; // [rsp+98h] [rbp-31h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  _OWORD v33[3]; // [rsp+B0h] [rbp-19h] BYREF

  v26 = a1;
  v27 = a2;
  v3 = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v22 = 0LL;
  memset(v33, 0, sizeof(v33));
  v7 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  sub_140347770((__int64)&v28);
  v25[0] = v25;
  v25[1] = v25;
  if ( !(unsigned __int8)sub_140AB46D0(v25, v8, v9) )
  {
    v10 = -1073741431;
    goto LABEL_14;
  }
  v10 = sub_14067DE4C();
  if ( v10 >= 0 )
  {
    v13 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( !SeSinglePrivilegeCheck(stru_140D3CA58, v13) )
    {
      v10 = -1073741727;
LABEL_6:
      v5 = v22;
      v4 = v24;
      v3 = v23;
      goto LABEL_7;
    }
    LOBYTE(v15) = v13;
    v10 = sub_140AB4630(v26, 0, v14, v15, (__int64)&v23, 0LL);
    if ( v10 < 0 )
      goto LABEL_6;
    LOBYTE(v18) = v13;
    v10 = sub_140AB4630(v27, 0, v17, v18, (__int64)&v24, 0LL);
    if ( v10 < 0 )
      goto LABEL_6;
    if ( v13 == 1 )
    {
      v10 = IoConvertFileHandleToKernelHandle(a3, 1, 2u, 0, &v22);
      if ( v10 < 0 )
        goto LABEL_6;
    }
    else
    {
      v22 = a3;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v3 = v23;
    v4 = v24;
    v5 = v22;
    if ( dword_140C54CA8 && !sub_1402ACD00() )
    {
      *(_QWORD *)&v30 = v3;
      *((_QWORD *)&v30 + 1) = v4;
      *((_QWORD *)&v29 + 1) = v5;
      v21 = sub_1407C0568(0x31u, (__int64)&v29, v20, 0x32u, 0LL, (__int64)v25);
      v10 = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          v10 = 0;
LABEL_29:
        KeLeaveCriticalRegion();
        goto LABEL_7;
      }
      v7 = 1;
    }
    sub_140AB4550(v33);
    v10 = sub_14090CFF8((__int64)v3, (__int64)v4, (__int64)v5);
    sub_140AB4580(v33);
    if ( v7 )
      v10 = sub_1407C04B4(0x32u, 0LL, v10, (__int64)&v29, v25);
    goto LABEL_29;
  }
LABEL_7:
  sub_140AB42A0(v12, v11);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 && v5 != a3 )
    ZwClose(v5);
LABEL_14:
  sub_14022EA30((__int64 *)&v28);
  return (unsigned int)v10;
}
