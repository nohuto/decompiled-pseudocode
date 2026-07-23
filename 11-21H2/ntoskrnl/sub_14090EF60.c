/*
 * XREFs of sub_14090EF60 @ 0x14090EF60
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14023BD3C @ 0x14023BD3C (sub_14023BD3C.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeEnterCriticalRegion @ 0x1403468F0 (KeEnterCriticalRegion.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140720224 @ 0x140720224 (sub_140720224.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140915D20 @ 0x140915D20 (sub_140915D20.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090EF60(__int64 a1, _OWORD *a2)
{
  char v3; // r13
  int v4; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  signed int v11; // ebx
  char v12; // si
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // bx
  PPRIVILEGE_SET v16; // rsi
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  PVOID v27; // rcx
  char v29; // [rsp+33h] [rbp-135h]
  PVOID Object; // [rsp+38h] [rbp-130h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-128h] BYREF
  int v32; // [rsp+50h] [rbp-118h] BYREF
  int v33; // [rsp+54h] [rbp-114h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-110h]
  _QWORD v35[2]; // [rsp+60h] [rbp-108h] BYREF
  int v36; // [rsp+70h] [rbp-F8h]
  __int64 v37; // [rsp+78h] [rbp-F0h]
  __int128 v38; // [rsp+80h] [rbp-E8h]
  __int128 v39; // [rsp+90h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD v41[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-88h]
  __int128 v43; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v44[48]; // [rsp+100h] [rbp-68h] BYREF

  v37 = a1;
  v39 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(v44, 0, sizeof(v44));
  sub_140347770((__int64)&v39);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  v4 = *((char *)KeGetCurrentThread() + 562);
  v5 = 0;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v36 = -1;
  v35[1] = v35;
  v35[0] = v35;
  v32 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = sub_140AB46D0(v8, v7, v9);
  if ( !v29 )
  {
    v11 = -1073741431;
    v12 = 0;
    goto LABEL_42;
  }
  if ( (_BYTE)v4 == 1 )
  {
    v38 = 0LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a2;
    v10 = *(unsigned int *)v13;
    LODWORD(v38) = v10;
    v14 = *(_QWORD *)(v13 + 8);
    *((_QWORD *)&v38 + 1) = v14;
    *(_OWORD *)Src = v38;
    if ( (_WORD)v10 )
    {
      if ( (v14 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v14 + (unsigned __int16)v10;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v15 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v16 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v11 = -1073741811;
    v33 = -1073741811;
    v12 = 0;
    goto LABEL_42;
  }
  if ( sub_140720224(v4, (__int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)sub_140367AF0(v17, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v11 = -1073741670;
      v33 = -1073741670;
      v12 = 0;
      goto LABEL_42;
    }
    v16 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v15 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v20 = 0;
  if ( v15 >> 1 )
  {
    while ( LOWORD(v16->PrivilegeCount) != 92 )
    {
      ++v20;
      v16 = (PPRIVILEGE_SET)((char *)v16 + 2);
      if ( v20 >= v15 >> 1 )
        goto LABEL_22;
    }
    v11 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  LOBYTE(v19) = v4;
  v21 = v37;
  v11 = sub_140AB4630(v37, 131078, v18, v19, (__int64)&Object, 0LL);
  if ( v11 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !sub_14023BD3C((__int64)&SubjectContext, (__int64)&v32) )
      goto LABEL_24;
    LOBYTE(v23) = v4;
    v11 = sub_140AB4630(v21, 131097, v22, v23, (__int64)&Object, 0LL);
    if ( v11 < 0 )
      goto LABEL_26;
    if ( !(unsigned __int8)sub_140915D20(Object) )
    {
LABEL_24:
      v11 = -1073741790;
LABEL_26:
      v12 = 0;
      goto LABEL_42;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v11 < 0 )
    goto LABEL_26;
  KeEnterCriticalRegion();
  v12 = 1;
  if ( dword_140C54CA8 && !sub_1402ACD00() )
  {
    *(_QWORD *)&v41[0] = Object;
    *((_QWORD *)&v41[0] + 1) = Src;
    v25 = sub_1407C0568(4u, (__int64)v41, v24, 0x13u, (__int64)Object, (__int64)v35);
    v11 = v25;
    if ( v25 < 0 )
    {
      if ( v25 == -1073740541 )
        v11 = 0;
      goto LABEL_42;
    }
    v3 = 1;
  }
  if ( !v5 || (LOBYTE(v10) = v4, v11 = sub_14091607C(&Object, v10, 131078LL, &SubjectContext, &v32), v11 >= 0) )
  {
    sub_140AB4550(v44);
    v43 = *(_OWORD *)Src;
    LOBYTE(v26) = v4;
    v11 = sub_140912608(Object, &v43, v26);
    sub_140AB4580(v44);
    v6 = v5;
  }
LABEL_42:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = sub_1407C04B4(0x13u, (__int64)Object, v11, (__int64)v41, v35);
  if ( v12 )
    KeLeaveCriticalRegion();
  v27 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v29 )
    sub_140AB42A0(v27, v10);
  sub_14022EA30((__int64 *)&v39);
  return (unsigned int)v11;
}
