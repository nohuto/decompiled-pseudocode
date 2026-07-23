/*
 * XREFs of sub_1406BCE90 @ 0x1406BCE90
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140678970 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     sub_1406BCC20 @ 0x1406BCC20 (sub_1406BCC20.c)
 *     sub_1406BD17C @ 0x1406BD17C (sub_1406BD17C.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     sub_14074F220 @ 0x14074F220 (sub_14074F220.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BCE90(__int64 a1, ACL *a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // r14d
  char v11; // r15
  __int64 v12; // rdx
  void *v13; // r13
  int v14; // r14d
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // r12d
  void *v24; // rax
  __int64 v25; // r8
  void *v26; // r14
  void *v27; // r8
  __int64 i; // rax
  NTSTATUS OwnerSecurityDescriptor; // ebx
  _QWORD *v30; // rdx
  int v32; // r15d
  __int64 v33; // rax
  BOOLEAN SaclPresent; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-60h] BYREF
  char v36; // [rsp+42h] [rbp-5Fh]
  char v37; // [rsp+43h] [rbp-5Eh]
  unsigned int v38; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned int v39; // [rsp+48h] [rbp-59h] BYREF
  int v40; // [rsp+4Ch] [rbp-55h] BYREF
  PACL Sacl; // [rsp+50h] [rbp-51h] BYREF
  PSID Owner; // [rsp+58h] [rbp-49h] BYREF
  __int64 v43; // [rsp+60h] [rbp-41h]
  void *v44; // [rsp+68h] [rbp-39h] BYREF
  PVOID P; // [rsp+70h] [rbp-31h] BYREF
  __int64 v46; // [rsp+78h] [rbp-29h]
  _OWORD v47[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-1h]

  v43 = a4;
  v46 = a3;
  Sacl = a2;
  v6 = a3;
  SaclPresent = 0;
  v7 = (int)a2;
  v8 = *(_QWORD *)(a1 + 312);
  Owner = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)(v8 + 40);
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(v8 + 32);
  v11 = 0;
  v12 = *(_QWORD *)(v9 + 48);
  v13 = 0LL;
  P = 0LL;
  v44 = 0LL;
  v14 = v10 & 0x800;
  v39 = 0;
  v40 = 0;
  v38 = 0;
  v15 = sub_1406BD17C(26, v12, v7, a3, a4, (__int64)&v39);
  v16 = *(_QWORD *)(v9 + 48);
  v36 = v15;
  v17 = sub_1406BD17C(27, v16, v7, v6, v43, (__int64)&v40);
  v18 = *(_QWORD *)(v9 + 48);
  v37 = v17;
  sub_1406BD17C(28, v18, v7, v6, v43, (__int64)&v38);
  if ( !a5 && (v19 = *(_QWORD *)(a1 + 24)) != 0 || (v20 = 0, (v19 = a1) != 0) )
  {
    v20 = 0;
    do
    {
      v20 |= *(_DWORD *)(v19 + 52);
      v19 = *(_QWORD *)(v19 + 24);
    }
    while ( v19 );
  }
  v21 = 0;
  v22 = *(_QWORD *)(v9 + 48);
  v23 = (v38 | v20) & 0x5010F;
  v38 = 0;
  v24 = (void *)sub_1406BCC20(
                  v43 & -(__int64)(v14 != 0),
                  v22,
                  (int)Sacl,
                  v14 != 0 ? v46 : 0,
                  v43 & -(__int64)(v14 != 0));
  v26 = v24;
  if ( v24 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v24, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_42;
    v32 = 0;
    if ( Owner )
    {
      v32 = 1;
      v21 = 1;
    }
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v26, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_42;
    if ( Owner )
    {
      v21 = v32 | 2;
      v32 |= 2u;
    }
    OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_42;
    if ( SaclPresent )
    {
      v21 = v32 | 8;
      v32 |= 8u;
    }
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_42;
    if ( SaclPresent )
      v21 = v32 | 4;
    v11 = 0;
    if ( !v36 )
      goto LABEL_10;
    goto LABEL_40;
  }
  if ( v36 )
  {
    v48 = 0LL;
    memset(v47, 0, sizeof(v47));
    v33 = sub_14074F220(v39, v23, v25, v47, &P, &v44, &v38);
    v13 = v44;
    v26 = (void *)v33;
    if ( !v33 )
    {
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_22;
    }
    v21 = v38;
    v11 = 1;
LABEL_40:
    *(_DWORD *)(a1 + 72) = v39;
  }
LABEL_10:
  v27 = v26;
  if ( v37 && v40 )
    *(_DWORD *)(a1 + 48) |= 8u;
  *(_DWORD *)(a1 + 52) = v23 | *(_DWORD *)(a1 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v23;
  OwnerSecurityDescriptor = 0;
  if ( v26 )
  {
    OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v21, v26);
    v27 = v26;
  }
  v30 = (_QWORD *)a1;
  do
  {
    if ( (*(_DWORD *)(v30[1] + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) + 396LL) |= 0xC00000u;
    if ( v11 && v30[34] )
      *(_DWORD *)(v30[39] + 32LL) |= 0x800u;
    v30 = (_QWORD *)v30[3];
  }
  while ( v30 );
  v26 = v27;
  if ( v27 && !v11 )
LABEL_42:
    ExFreePoolWithTag(v26, 0);
LABEL_22:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
