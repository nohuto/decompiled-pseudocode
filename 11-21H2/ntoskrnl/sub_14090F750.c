/*
 * XREFs of sub_14090F750 @ 0x14090F750
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
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090F750(int a1, HANDLE a2, unsigned int a3)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  signed int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  NTSTATUS v16; // eax
  HANDLE v17; // rdi
  int v18; // eax
  _QWORD *v19; // rsi
  struct _KTHREAD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  HANDLE Handle; // [rsp+30h] [rbp-79h] BYREF
  PVOID Object; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v27; // [rsp+50h] [rbp-59h] BYREF
  __int128 v28; // [rsp+60h] [rbp-49h] BYREF
  __int128 v29; // [rsp+70h] [rbp-39h]
  __int128 v30; // [rsp+80h] [rbp-29h]
  _OWORD v31[3]; // [rsp+90h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v26[1] = v26;
  v26[0] = v26;
  v27 = 0LL;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  sub_140347770((__int64)&v27);
  CurrentThread = KeGetCurrentThread();
  v8 = *((_BYTE *)CurrentThread + 562);
  if ( (unsigned __int8)sub_140AB46D0(CurrentThread, v9, v10) )
  {
    v11 = sub_14067DE4C();
    if ( v11 < 0 )
    {
LABEL_27:
      sub_140AB42A0(v13, v12);
      goto LABEL_28;
    }
    if ( !SeSinglePrivilegeCheck(stru_140D3CA70, v8) )
    {
      v11 = -1073741727;
      goto LABEL_27;
    }
    if ( v8 == 1 )
    {
      v16 = IoConvertFileHandleToKernelHandle(a2, 1, 1u, 0, &Handle);
      v17 = Handle;
      v11 = v16;
      if ( v16 < 0 )
      {
LABEL_24:
        if ( v17 && v17 != a2 )
          ZwClose(v17);
        goto LABEL_27;
      }
    }
    else
    {
      v17 = a2;
      Handle = a2;
    }
    LOBYTE(v15) = v8;
    v18 = sub_140AB4630(a1, 0, v14, v15, (__int64)&Object, 0LL);
    v19 = Object;
    v11 = v18;
    if ( v18 < 0 )
    {
LABEL_22:
      if ( v19 )
        ObfDereferenceObject(v19);
      goto LABEL_24;
    }
    v13 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
    if ( (v13 & 0x80u) != 0LL )
    {
      v11 = -1073741790;
      goto LABEL_22;
    }
    v20 = KeGetCurrentThread();
    --*((_WORD *)v20 + 242);
    v19 = Object;
    v17 = Handle;
    if ( dword_140C54CA8 && !sub_1402ACD00() )
    {
      *(_QWORD *)&v28 = v19;
      *((_QWORD *)&v28 + 1) = v17;
      LODWORD(v29) = a3;
      v22 = sub_1407C0568(0x29u, (__int64)&v28, v21, 0x2Au, 0LL, (__int64)v26);
      v11 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v11 = 0;
LABEL_21:
        KeLeaveCriticalRegion();
        goto LABEL_22;
      }
      v6 = 1;
    }
    sub_140AB4550(v31);
    v11 = sub_14090C34C(v19, (ULONG_PTR)v17, a3);
    sub_140AB4580(v31);
    if ( v6 )
      v11 = sub_1407C04B4(0x2Au, (__int64)v19, v11, (__int64)&v28, v26);
    goto LABEL_21;
  }
  v11 = -1073741431;
LABEL_28:
  sub_14022EA30((__int64 *)&v27);
  return (unsigned int)v11;
}
