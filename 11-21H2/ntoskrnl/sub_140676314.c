/*
 * XREFs of sub_140676314 @ 0x140676314
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     sub_1406768BC @ 0x1406768BC (sub_1406768BC.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     RtlGetControlSecurityDescriptor @ 0x140678850 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140678970 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     sub_140819FB0 @ 0x140819FB0 (sub_140819FB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

ULONG __fastcall sub_140676314(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int v8; // r13d
  unsigned int v9; // esi
  PSID v10; // r15
  PSID v11; // r12
  PACL v12; // rdi
  __int16 v13; // bx
  int OwnerSecurityDescriptor; // eax
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  void *v17; // rax
  int v18; // edx
  int v19; // r8d
  WORD v20; // bx
  char v21; // r14
  BOOLEAN v22; // cl
  PVOID v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  PVOID v26; // rdi
  __int64 v27; // rax
  PVOID v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  wchar_t *v31; // rcx
  size_t v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rax
  size_t v35; // rdx
  wchar_t *v36; // rcx
  wchar_t **v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  size_t v40; // rdx
  wchar_t *v41; // rcx
  __int64 v42; // rdi
  ULONG v44; // ebx
  __int64 v45; // [rsp+20h] [rbp-91h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v47; // [rsp+58h] [rbp-59h]
  PVOID v48; // [rsp+60h] [rbp-51h] BYREF
  PVOID v49; // [rsp+68h] [rbp-49h] BYREF
  PVOID v50; // [rsp+70h] [rbp-41h]
  PACL Sacl; // [rsp+78h] [rbp-39h] BYREF
  PVOID P; // [rsp+80h] [rbp-31h]
  PVOID v53; // [rsp+88h] [rbp-29h] BYREF
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG OwnerDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  v8 = 0;
  Owner = 0LL;
  v9 = 0;
  Group = 0LL;
  v10 = 0LL;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  LODWORD(v12) = 0;
  v50 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  P = 0LL;
  v47 = 0LL;
  v53 = 0LL;
  Src = 0LL;
  Control = 0;
  v49 = 0LL;
  v48 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v13 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
    v10 = Owner;
  }
  if ( (v13 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
    v11 = Group;
  }
  if ( (v13 & 4) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
  }
  v15 = v13 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&OwnerDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v12 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        sub_140819FB0(Sacl, 0LL, &Size, v15);
        v17 = (void *)sub_14067757C((unsigned int)Size);
        v50 = v17;
        if ( !v17 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_94;
        }
        sub_140819FB0(v12, v17, &Size, v15);
        LODWORD(v12) = (_DWORD)v50;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    if ( v10 )
    {
      v8 = sub_140676AC0(v10, v45, 1);
      if ( v8 )
        goto LABEL_74;
    }
    if ( v11 )
    {
      v8 = sub_140676AC0(v11, v45, 1);
      if ( v8 )
        goto LABEL_74;
    }
    v20 = Control;
    if ( Control )
    {
      v8 = sub_1406768BC(Control, 1LL, &v49);
      if ( v8 )
        goto LABEL_74;
      v8 = sub_1406768BC(v20, 2LL, &v48);
      if ( v8 )
        goto LABEL_74;
    }
    v21 = SaclPresent;
    if ( (_BYTE)SaclPresent )
    {
      LOBYTE(v18) = SaclPresent;
      v8 = sub_140676B80((_DWORD)v12, v18, 0, (unsigned int)&v53, (__int64)&Size, 0LL, 0LL, 0, 1);
      if ( v8 )
        goto LABEL_74;
      v9 = Size;
    }
    v22 = DaclPresent;
    if ( DaclPresent )
    {
      LOBYTE(v18) = DaclPresent;
      LOBYTE(v19) = 1;
      v8 = sub_140676B80((_DWORD)Dacl, v18, v19, (unsigned int)&Src, (__int64)&Size, 0LL, 0LL, 0, 1);
      if ( v8 )
        goto LABEL_74;
      v9 += Size;
      v22 = DaclPresent;
    }
    v23 = P;
    v24 = -1LL;
    if ( P )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *((_WORD *)P + v25) );
      v9 += 2 * v25 + 4;
    }
    v26 = v47;
    if ( v47 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *((_WORD *)v47 + v27) );
      v9 += 2 * v27 + 4;
    }
    v28 = v49;
    if ( v22 )
    {
      v9 += 4;
      if ( v49 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *((_WORD *)v49 + v29) );
        v9 += 2 * v29;
      }
    }
    if ( v21 )
    {
      v9 += 4;
      if ( v48 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( *((_WORD *)v48 + v30) );
        v9 += 2 * v30;
      }
    }
    v31 = (wchar_t *)sub_14067757C(v9 + 2LL);
    *a6 = v31;
    if ( !v31 )
    {
      v8 = 8;
      goto LABEL_75;
    }
    v32 = ((unsigned __int64)v9 + 2) >> 1;
    LODWORD(v33) = 0;
    if ( v23 )
    {
      LODWORD(v45) = 58;
      swprintf_s(v31, v32, L"%ws%wc%ws", L"O", v45, v23);
      v33 = -1LL;
      v31 = *a6;
      do
        ++v33;
      while ( v31[v33] );
    }
    if ( v47 )
    {
      LODWORD(v45) = 58;
      swprintf_s(&v31[(unsigned int)v33], v32 - (unsigned int)v33, L"%ws%wc%ws", L"G", v45, v47);
      v31 = *a6;
      v34 = -1LL;
      do
        ++v34;
      while ( (*a6)[(unsigned int)v33 + v34] );
      LODWORD(v33) = v34 + v33;
    }
    if ( DaclPresent )
    {
      v35 = v32 - (unsigned int)v33;
      v36 = &v31[(unsigned int)v33];
      LODWORD(v45) = 58;
      if ( v28 )
        swprintf_s(v36, v35, L"%ws%wc%ws", L"D", v45, v28);
      else
        swprintf_s(v36, v35, L"%ws%wc", L"D", v45);
      v37 = a6;
      v38 = -1LL;
      v31 = *a6;
      do
        ++v38;
      while ( (*a6)[(unsigned int)v33 + v38] );
      v33 = (unsigned int)(v38 + v33);
      if ( Src )
      {
        wcscpy_s(&v31[v33], v32 - (unsigned int)v33, Src);
        v31 = *v37;
        v39 = -1LL;
        do
          ++v39;
        while ( (*v37)[v33 + v39] );
        LODWORD(v33) = v39 + v33;
      }
    }
    else
    {
      v37 = a6;
    }
    if ( (_BYTE)SaclPresent )
    {
      v40 = v32 - (unsigned int)v33;
      v41 = &v31[(unsigned int)v33];
      LODWORD(v45) = 58;
      if ( v48 )
        swprintf_s(v41, v40, L"%ws%wc%ws", L"S", v45, v48);
      else
        swprintf_s(v41, v40, L"%ws%wc", L"S", v45);
      do
        ++v24;
      while ( (*v37)[(unsigned int)v33 + v24] );
      v42 = (unsigned int)(v24 + v33);
      if ( v53 )
        wcscpy_s(&(*v37)[v42], v32 - (unsigned int)v42, (const wchar_t *)v53);
    }
    if ( a7 )
      *a7 = v9 >> 1;
LABEL_74:
    v26 = v47;
LABEL_75:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v53 )
      ExFreePoolWithTag(v53, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
    if ( v50 )
      ExFreePoolWithTag(v50, 0);
    return v8;
  }
LABEL_94:
  v44 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  return v44;
}
