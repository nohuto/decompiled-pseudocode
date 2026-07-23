/*
 * XREFs of sub_14069E454 @ 0x14069E454
 * Callers:
 *     sub_14069E1D0 @ 0x14069E1D0 (sub_14069E1D0.c)
 *     sub_14069E2D0 @ 0x14069E2D0 (sub_14069E2D0.c)
 *     sub_14069E320 @ 0x14069E320 (sub_14069E320.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14067DA70 @ 0x14067DA70 (sub_14067DA70.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB419C @ 0x140AB419C (sub_140AB419C.c)
 */

__int64 __fastcall sub_14069E454(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r12
  KPROCESSOR_MODE v7; // r15
  PVOID v8; // r14
  char v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Length; // ebx
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  void *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // ebx
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // r15d
  char v27; // [rsp+42h] [rbp-256h]
  PVOID v28[2]; // [rsp+50h] [rbp-248h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-238h] BYREF
  PVOID Object; // [rsp+70h] [rbp-228h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-220h]
  int v32; // [rsp+7Ch] [rbp-21Ch]
  HANDLE v33; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-210h] BYREF
  int v35; // [rsp+98h] [rbp-200h]
  HANDLE Handle; // [rsp+A0h] [rbp-1F8h]
  UNICODE_STRING v37; // [rsp+B0h] [rbp-1E8h]
  __int128 v38; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-1C8h]
  __int128 v40; // [rsp+E0h] [rbp-1B8h]
  _OWORD v41[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+110h] [rbp-188h]
  _OWORD v43[19]; // [rsp+120h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v31 = a2;
  v35 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v43, 0, 0x128uLL);
  LODWORD(v43[6]) = -1;
  *((_QWORD *)&v43[9] + 1) = &v43[9];
  *(_QWORD *)&v43[9] = &v43[9];
  memset((char *)&v43[13] + 8, 0, 0x50uLL);
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28[0] = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v9 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v27 = sub_140AB4138();
  if ( !v27 )
  {
    v19 = -1073741431;
LABEL_53:
    v13 = 0LL;
    goto LABEL_36;
  }
  if ( !SeSinglePrivilegeCheck(stru_140D3CA70, v7) )
  {
    v19 = -1073741727;
    goto LABEL_53;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_53;
  }
  if ( v7 == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v38 = *(_OWORD *)a1;
  v39 = *(_OWORD *)(a1 + 16);
  v40 = *(_OWORD *)(a1 + 32);
  if ( v7 == 1 )
  {
    v37 = 0LL;
    v15 = v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v16 = *(_DWORD *)v15;
    *(_DWORD *)&v37.Length = v16;
    v17 = *(_QWORD *)(v15 + 8);
    v37.Buffer = (wchar_t *)v17;
    DestinationString = v37;
    if ( (_WORD)v16 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v17 + (unsigned __int16)v16;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    v12 = (wchar_t *)sub_140367AF0(0x7FFFFFFF0000LL, DestinationString.Length, 0x35374D43u);
    v13 = v12;
    if ( !v12 )
    {
      v19 = -1073741670;
      v32 = -1073741670;
      goto LABEL_36;
    }
    memmove(v12, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v13;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v13 = 0LL;
  }
  *(_QWORD *)&v39 = &DestinationString;
  v40 = 0LL;
  if ( v7 == 1 )
  {
    v19 = sub_14067DA70(*((void **)&v38 + 1), v14, 1, 0, &v33);
    if ( v19 < 0 )
      goto LABEL_36;
    *((_QWORD *)&v38 + 1) = v33;
  }
  DWORD2(v43[1]) = 0;
  LODWORD(v43[0]) = 4;
  v20 = sub_1406686C8((__int64)&v38, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v43, (__int64 *)v28);
  if ( v20 == -1073741772 )
    v20 = -1073741811;
  v19 = v20;
  if ( v20 >= 0 )
  {
    if ( v4 )
    {
      Object = 0LL;
      v19 = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, v7, &Object, 0LL);
      v8 = Object;
      if ( v19 < 0 )
        goto LABEL_36;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( dword_140C54CA8 && !sub_1402ACD00() )
    {
      *(PVOID *)&v41[0] = v28[0];
      *((_QWORD *)&v41[0] + 1) = v8;
      v22 = sub_1407C0568(34, (unsigned int)v41, v21, 35, (__int64)v28[0], (__int64)v34);
      v19 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v19 = 0;
        goto LABEL_36;
      }
      v9 = 1;
    }
    LODWORD(Object) = 0;
    if ( (unsigned __int8)sub_140AB419C() )
    {
LABEL_58:
      v19 = -1073741431;
    }
    else
    {
      v24 = v31;
      while ( 1 )
      {
        LOBYTE(v23) = a3;
        v19 = sub_14069E98C(v28[0], v24, v23, v8);
        if ( v19 != -1073741267 )
          break;
        sub_14091BC2C(&Object);
        if ( (unsigned __int8)sub_140AB419C() )
          goto LABEL_58;
      }
    }
  }
LABEL_36:
  if ( v9 )
    v19 = sub_1407C04B4(35, v28[0], v19, (unsigned int)v41, (__int64)v34);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v28[0] )
    ObfDereferenceObject(v28[0]);
  if ( v13 )
    SeFreePrivileges((PPRIVILEGE_SET)v13);
  if ( v33 )
    ZwClose(v33);
  sub_14067FE98(v43, 0LL);
  if ( v27 )
    sub_140AB4178();
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
