/*
 * XREFs of sub_14065A1F0 @ 0x14065A1F0
 * Callers:
 *     sub_14065A1D0 @ 0x14065A1D0 (sub_14065A1D0.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14065A1F0(int a1, void *a2, int a3)
{
  KPROCESSOR_MODE v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v13; // rdi
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  int v20; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-79h]
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v25; // [rsp+60h] [rbp-59h] BYREF
  __int128 v26; // [rsp+70h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-39h]
  __int128 v28; // [rsp+90h] [rbp-29h]
  _OWORD v29[3]; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v24[1] = v24;
  v24[0] = v24;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  sub_140347770((__int64)&v25);
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !(unsigned __int8)sub_140AB46D0() )
  {
    v7 = -1073741431;
    goto LABEL_24;
  }
  v7 = sub_14067DE4C();
  if ( v7 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(stru_140D3CA58, v6) )
    {
      if ( ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
      {
        if ( v6 == 1 )
        {
          LOBYTE(v8) = 1;
          v11 = 0LL;
          v7 = IoConvertFileHandleToKernelHandle(a2, v8, 2LL);
          if ( v7 < 0 )
          {
LABEL_20:
            if ( v11 && v11 != a2 )
              ZwClose(v11);
            goto LABEL_23;
          }
        }
        else
        {
          v11 = a2;
          Handle = a2;
        }
        LOBYTE(v10) = v6;
        v7 = sub_140AB4630(a1, 0, v9, v10, (__int64)&Object, 0LL);
        if ( v7 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v13 = Object;
          if ( dword_140C54CA8
            && !sub_1402ACD00()
            && (*(_QWORD *)&v26 = v13,
                *((_QWORD *)&v26 + 1) = Handle,
                LOBYTE(v14) = 1,
                LODWORD(v27) = a3,
                v15 = sub_140735760(43, (unsigned int)&v26, 0, v14, 44, 0LL, (__int64)v24),
                v7 = v15,
                v15 < 0) )
          {
            if ( v15 == -1073740541 )
              v7 = 0;
          }
          else
          {
            sub_140AB4550(v29);
            if ( a3 == 4 )
            {
              LOBYTE(v16) = v6;
              v19 = sub_14090C1BC(v13, v16, Handle);
            }
            else
            {
              v18 = 5LL;
              LOBYTE(v17) = v6;
              if ( a3 != 2 )
                v18 = 3LL;
              v19 = sub_14065A44C(v13, Handle, v18, v17);
            }
            v20 = v19;
            sub_140AB4580(v29);
            v7 = sub_14067FF60(44, (_DWORD)v13, v20, (unsigned int)&v26, 0LL, (__int64)v24);
          }
          sub_1402F9540((__int64)KeGetCurrentThread());
          v11 = Handle;
        }
        if ( Object )
          ObfDereferenceObject(Object);
        goto LABEL_20;
      }
      v7 = -1073741811;
    }
    else
    {
      v7 = -1073741727;
    }
  }
LABEL_23:
  sub_140AB42A0();
LABEL_24:
  sub_14022EA30((__int64 *)&v25);
  return (unsigned int)v7;
}
