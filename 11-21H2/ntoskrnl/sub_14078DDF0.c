/*
 * XREFs of sub_14078DDF0 @ 0x14078DDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     sub_140258300 @ 0x140258300 (sub_140258300.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402ED9BC @ 0x1402ED9BC (sub_1402ED9BC.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     sub_140668444 @ 0x140668444 (sub_140668444.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     sub_14066A17C @ 0x14066A17C (sub_14066A17C.c)
 *     sub_1406962A4 @ 0x1406962A4 (sub_1406962A4.c)
 *     sub_1406965F4 @ 0x1406965F4 (sub_1406965F4.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     sub_1406E6DFC @ 0x1406E6DFC (sub_1406E6DFC.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14075563C @ 0x14075563C (sub_14075563C.c)
 *     sub_14078EC8C @ 0x14078EC8C (sub_14078EC8C.c)
 *     sub_14078ECD8 @ 0x14078ECD8 (sub_14078ECD8.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_14078DDF0(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        char *Src,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned __int64 a9)
{
  int v9; // r14d
  char v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rdi
  int v21; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  unsigned int v23; // ebx
  _QWORD *v24; // rsi
  unsigned int v25; // r14d
  void *v26; // r12
  char v27; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rax
  void *v30; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-98h]
  char v37; // [rsp+51h] [rbp-97h]
  PVOID v38; // [rsp+58h] [rbp-90h] BYREF
  __int64 v39; // [rsp+60h] [rbp-88h] BYREF
  PSID AppContainerSid; // [rsp+68h] [rbp-80h] BYREF
  __int64 v41; // [rsp+70h] [rbp-78h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+78h] [rbp-70h] BYREF
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  __int64 v44; // [rsp+88h] [rbp-60h] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v47; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-30h]

  v9 = a4;
  v41 = 0LL;
  v44 = 0x100000000LL;
  P = 0LL;
  AppContainerSid = 0LL;
  v47 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v37 = 0;
  v36 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v39) = 0;
  v48 = 0LL;
  v49 = 0LL;
  v13 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v13 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = 8LL * a8;
    if ( v15 )
    {
      if ( (a9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = a9 + v15;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < a9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !Src )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, v13, &Token, &v47);
  if ( result < 0 )
    return result;
  result = sub_14066846C(Src, v13, v18, v19, (int)Object, 1, &AppContainerSid);
  if ( result < 0 )
    return result;
  v20 = AppContainerSid;
  result = sub_1406E6DFC(AppContainerSid);
  v21 = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v47.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  if ( a7 )
    v21 = sub_140799DB0(a7, 0, (int)HandleInformation, v35, (__int64)&v41, (__int64)&v44);
  if ( v21 < 0 )
    goto LABEL_73;
  v21 = sub_140258300(a8, a9, (__int64 *)&P);
  if ( v21 < 0 )
    goto LABEL_73;
  if ( !(unsigned __int8)sub_14078ECD8(v20) )
    goto LABEL_72;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    v21 = -1073700350;
    goto LABEL_73;
  }
  v23 = 0;
  if ( a6 )
  {
    v24 = (_QWORD *)v41;
    while ( (unsigned __int8)sub_14078EC8C(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = (void *)*v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v41 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        v21 = -1073741811;
        goto LABEL_73;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_34;
      }
    }
LABEL_72:
    v21 = -1073741811;
    goto LABEL_73;
  }
LABEL_34:
  v21 = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( v21 < 0 )
  {
LABEL_73:
    v27 = v36;
    goto LABEL_55;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    v21 = sub_1409CC77C(Token, (__int64)&v39);
    if ( !(_BYTE)v39 )
    {
      v21 = -1073741790;
      goto LABEL_73;
    }
  }
  if ( v21 < 0 )
    goto LABEL_73;
  v21 = sub_1407CDED0((_DWORD)Token, v9, 0, 1, 0, v13, 0, (__int64)&v38);
  if ( v21 < 0 )
    goto LABEL_73;
  v27 = 1;
  v21 = sub_14075563C((__int64)v38, (_DWORD *)&v44 + 1);
  if ( v21 < 0 )
    goto LABEL_55;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
  _InterlockedOr(v32, 0);
  v37 = 1;
  v29 = sub_1402ED9BC((__int64)v38);
  if ( v29 )
  {
    v30 = *(void **)v29;
    v31 = *(unsigned __int8 *)(*(_QWORD *)v29 + 1LL);
    if ( (_BYTE)v31 )
      *RtlSubAuthoritySid(v30, v31 - 1) = 4096;
    *((_QWORD *)v38 + 9) &= 0x200800000uLL;
    *((_QWORD *)v38 + 10) &= 0x200800000uLL;
    *((_QWORD *)v38 + 8) &= 0x200800000uLL;
    *((_DWORD *)v38 + 50) &= ~0x2000u;
    *((_DWORD *)v38 + 50) |= 0x4000u;
  }
  else
  {
    v21 = -1073740730;
  }
  v20 = AppContainerSid;
  if ( v21 < 0 )
    goto LABEL_55;
  v21 = sub_140799BB0(v38, AppContainerSid, v41, a6);
  if ( v21 < 0 )
    goto LABEL_55;
  v21 = sub_1406965F4((__int64)v38, (__int64)v20);
  if ( v21 < 0 )
    goto LABEL_55;
  *((_QWORD *)&v48 + 1) = v20;
  v21 = sub_1406962A4(v38, &v48, a8, (HANDLE *)P);
  if ( v21 < 0 )
    goto LABEL_55;
  v21 = sub_14066A17C((__int64)v38, v20);
  if ( v21 < 0 )
    goto LABEL_55;
  v21 = sub_140257C7C((__int64)v38, v20);
  if ( v21 < 0 )
    goto LABEL_55;
  if ( sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)((char *)v38 + 808), 0LL, qword_140C1BAB8, 0, 1, 0) )
  {
    _InterlockedIncrement(&dword_140D3CAD0);
    *((_DWORD *)v38 + 50) |= 0x400000u;
  }
  else
  {
    *((_DWORD *)v38 + 50) &= ~0x400000u;
  }
  *((_QWORD *)v38 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
  sub_1402F9540((__int64)KeGetCurrentThread());
  v37 = 0;
  v21 = sub_140729C30((char *)v38, 0LL, GrantedAccess, 1, 0, 0LL, &Handle);
  v20 = AppContainerSid;
  if ( v21 < 0 )
    goto LABEL_54;
  v21 = sub_140724550((__int64)v38, 983551, AppContainerSid);
  if ( v21 >= 0 )
  {
    sub_140659D50(v38);
    ObfDereferenceObject(v38);
LABEL_54:
    v27 = 0;
  }
LABEL_55:
  if ( v37 )
  {
    if ( v21 >= 0 )
      *((_QWORD *)v38 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
    sub_1402F9540((__int64)KeGetCurrentThread());
    v20 = AppContainerSid;
  }
  if ( v21 < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v38);
    if ( Handle )
      ObCloseHandle(Handle, v13);
  }
  if ( v41 )
    sub_1406651C8((void *)v41, v13);
  if ( v20 )
    sub_140668444(v20, v13, 1);
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v21 >= 0 )
    *a1 = Handle;
  return v21;
}
