/*
 * XREFs of sub_14066915C @ 0x14066915C
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_140202270 @ 0x140202270 (sub_140202270.c)
 *     sub_1402022BC @ 0x1402022BC (sub_1402022BC.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140668C60 @ 0x140668C60 (sub_140668C60.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_140669694 @ 0x140669694 (sub_140669694.c)
 *     sub_140669830 @ 0x140669830 (sub_140669830.c)
 *     RtlGetControlSecurityDescriptor @ 0x140678850 (RtlGetControlSecurityDescriptor.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 */

__int64 __fastcall sub_14066915C(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        PVOID *a7)
{
  char *v11; // r13
  char *v12; // rdi
  char v13; // bl
  __int64 CurrentSilo; // rax
  int v15; // eax
  __int64 v16; // r9
  NTSTATUS DaclSecurityDescriptor; // ebx
  __int64 v18; // rcx
  __int64 v19; // r14
  BOOLEAN v20; // r12
  __int64 v21; // rax
  _OWORD *v22; // r10
  int v23; // eax
  __int64 v24; // rdx
  char *v26; // rdi
  __int64 v27; // r9
  int v28; // eax
  PVOID v29; // rdx
  ULONG_PTR v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  _QWORD *v39; // r8
  _QWORD *v40; // rcx
  int v41; // [rsp+28h] [rbp-D8h]
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  WORD Control; // [rsp+74h] [rbp-8Ch] BYREF
  int v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+7Ch] [rbp-84h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  ULONG Revision[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v49; // [rsp+90h] [rbp-70h]
  __int64 v50[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h]
  PACL Dacl; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v54; // [rsp+C0h] [rbp-40h]
  PVOID *v55; // [rsp+C8h] [rbp-38h]
  _OWORD v56[10]; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)Revision = a3;
  v49 = a2;
  v54 = BugCheckParameter1;
  v55 = a7;
  Control = 0;
  DaclPresent[0] = 0;
  Object = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  memset(v56, 0, sizeof(v56));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-byte_140C25440[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  CurrentSilo = PsGetCurrentSilo();
  v53 = (unsigned __int64)v11 >> 8;
  v15 = sub_1407CB6C0(
          *((_QWORD *)a6 + 1),
          (v13 & 2) == 0,
          0LL,
          *((_QWORD *)a6 + 5),
          v49,
          CurrentSilo,
          a4,
          (__int64)v50,
          0LL,
          (__int64)&Object);
  v16 = 0LL;
  DaclSecurityDescriptor = v15;
  if ( v15 < 0 )
  {
    v30 = BugCheckParameter1;
LABEL_46:
    sub_1407A2FA0(v30);
    return (unsigned int)DaclSecurityDescriptor;
  }
  if ( Object != v49 )
  {
    v26 = 0LL;
    if ( v50[0] )
    {
      v26 = (char *)Object - 48;
      sub_1402022BC((__int64)Object - 48);
      if ( v50[0] )
        sub_14066960C(v50);
    }
    sub_1407A2FA0(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v26 )
        sub_140202270((__int64)v26);
      DaclSecurityDescriptor = -1073741771;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v29 = Object;
      *(_DWORD *)(a4 + 16) = v28;
      LOBYTE(v27) = a5;
      DaclSecurityDescriptor = sub_140669830(1LL, v29, a4, v27, *a6, a3);
      if ( DaclSecurityDescriptor < 0 )
      {
        if ( v26 )
          sub_140202270((__int64)v26);
      }
      else
      {
        DaclSecurityDescriptor = sub_140733B40(1, Revision[0], BugCheckParameter1, (_DWORD)Object, a5, *a6, 0LL);
        if ( v26 )
          sub_140202270((__int64)v26);
        if ( DaclSecurityDescriptor >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v18 = *(_QWORD *)v12;
  v19 = 0LL;
  *(_QWORD *)Revision = 0LL;
  v20 = 0;
  DaclDefaulted = 0;
  v46 = 0;
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 336) & 8) != 0 || dword_140D01424 )
      v46 = 3;
    LOBYTE(v16) = a5;
    DaclSecurityDescriptor = sub_1407248C0(v18, Revision, &DaclDefaulted, v16);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_53;
    v19 = *(_QWORD *)Revision;
    v20 = DaclDefaulted;
  }
  v21 = *(_QWORD *)v12;
  LOBYTE(v18) = 0;
  v45 = v18;
  if ( v21 && ((*(_DWORD *)(v21 + 336) & 8) != 0 || dword_140D01424) && *(_QWORD *)(a4 + 64) )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                               *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                               DaclPresent,
                               &Dacl,
                               &DaclDefaulted);
    if ( DaclSecurityDescriptor < 0
      || (DaclSecurityDescriptor = RtlGetControlSecurityDescriptor(
                                     *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                                     &Control,
                                     Revision),
          DaclSecurityDescriptor < 0) )
    {
      if ( v19 )
        goto LABEL_16;
      goto LABEL_53;
    }
    if ( !Dacl && (Control & 0x1000) == 0 )
    {
      v31 = *(_OWORD *)(a4 + 16);
      v22 = v56;
      v56[0] = *(_OWORD *)a4;
      v32 = *(_OWORD *)(a4 + 32);
      v56[1] = v31;
      v33 = *(_OWORD *)(a4 + 48);
      v56[2] = v32;
      v34 = *(_OWORD *)(a4 + 64);
      v56[3] = v33;
      v35 = *(_OWORD *)(a4 + 80);
      v56[4] = v34;
      v36 = *(_OWORD *)(a4 + 96);
      v56[5] = v35;
      v37 = *(_OWORD *)(a4 + 128);
      v56[6] = v36;
      v56[7] = *(_OWORD *)(a4 + 112);
      v38 = *(_OWORD *)(a4 + 144);
      v56[8] = v37;
      v56[9] = v38;
      LOBYTE(v18) = v45;
      *(_QWORD *)&v56[4] = 0LL;
      goto LABEL_14;
    }
    LOBYTE(v18) = v45;
  }
  v22 = (_OWORD *)a4;
LABEL_14:
  if ( !*((_QWORD *)v22 + 8) && v46 )
    LOBYTE(v18) = 1;
  LOBYTE(v41) = v18;
  v23 = sub_140669694(
          v22,
          v19,
          v49,
          qword_140D07490[(unsigned __int8)(dword_140D06C0C ^ v53 ^ *((char *)v49 - 24))],
          v46,
          v41);
  DaclSecurityDescriptor = v23;
  if ( v19 )
  {
LABEL_16:
    LOBYTE(v24) = v20;
    sub_140722890(v19, v24, *(_QWORD *)v12, 0LL);
    if ( DaclSecurityDescriptor >= 0 )
      goto LABEL_17;
    goto LABEL_53;
  }
  if ( v23 < 0 )
  {
LABEL_53:
    v39 = (_QWORD *)v50[1];
    v40 = *(_QWORD **)v50[1];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL)
              - 48LL
              - byte_140C25440[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
    *v39 = *v40;
    *v40 = 0LL;
    sub_140668C60(v40, (void **)v50);
    if ( v50[0] )
      sub_14066960C(v50);
    v30 = v54;
    goto LABEL_46;
  }
  LOBYTE(v24) = *((_BYTE *)a6 + 16);
  SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v24, 1LL, 0LL);
  *((_QWORD *)a6 + 4) = 0LL;
  *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
  if ( v50[0] )
    sub_14066960C(v50);
LABEL_19:
  *v55 = Object;
  return (unsigned int)DaclSecurityDescriptor;
}
