/*
 * XREFs of sub_140B12C84 @ 0x140B12C84
 * Callers:
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 *     sub_140B12AF0 @ 0x140B12AF0 (sub_140B12AF0.c)
 *     sub_140B130E0 @ 0x140B130E0 (sub_140B130E0.c)
 *     sub_140B13134 @ 0x140B13134 (sub_140B13134.c)
 *     sub_140B13368 @ 0x140B13368 (sub_140B13368.c)
 *     sub_140B13578 @ 0x140B13578 (sub_140B13578.c)
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 */

HANDLE *__fastcall sub_140B12C84(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r13
  UNICODE_STRING *v3; // rsi
  HANDLE *v4; // r14
  char v5; // r15
  BOOLEAN v6; // r12
  NTSTATUS v7; // eax
  const UNICODE_STRING *j; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID *i; // rbx
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // edi
  PVOID **v17; // rdi
  PVOID **v18; // rcx
  HANDLE *result; // rax
  int v20; // eax
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  PVOID *v23; // rax
  PVOID **v24; // rax
  PVOID **v25; // rcx
  PVOID *v26; // rax
  PVOID *v27; // rbx
  PVOID *v28; // rbx
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+40h] [rbp-C8h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v37; // [rsp+88h] [rbp-80h] BYREF
  ULONG v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID v39; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v40; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *PoolWithTag; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v47[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v48[8]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v49[3]; // [rsp+188h] [rbp+80h] BYREF

  v43 = a1;
  v1 = a1;
  v38 = 0;
  v37 = 0;
  v46 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(v49, 0, sizeof(v49));
  memset(v47, 0, sizeof(v47));
  LODWORD(v47[7]) = -1;
  memset(v48, 0, sizeof(v48));
  LODWORD(v48[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v3 = 0LL;
  v4 = 0LL;
  v40 = &v39;
  v5 = 0;
  v6 = 0;
  v39 = &v39;
  sub_140347770((__int64)&v46);
  v34[1] = (__int64)v34;
  v34[0] = (__int64)v34;
  if ( (int)sub_140B12AF0(&stru_140A37E58, (__int64)v47) >= 0 )
  {
    if ( !dword_140D011A8
      || (v20 = sub_140B12AF0(&stru_140A384F8, (__int64)v48), (int)(v20 + 0x80000000) < 0)
      || v20 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20204D43u);
        v3 = PoolWithTag;
        if ( PoolWithTag )
        {
          v7 = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &v38, &v37);
          if ( v7 == -2147483622 )
          {
LABEL_12:
            v6 = sub_140AB46D0();
            if ( v6 )
            {
              sub_140AB4550((__int64)v49, v9, v10, v11);
              v2 = 1;
              sub_14071B6EC();
              v5 = 1;
              if ( (int)sub_140B13368(v47) >= 0 && (!v48[4] || (int)sub_140B13368(v48) >= 0) )
              {
                for ( i = (PVOID *)P; i != &P; i = (PVOID *)*i )
                {
                  if ( (int)sub_140B13368(i) >= 0 )
                  {
                    v24 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                    v25 = v24;
                    if ( !v24 )
                      goto LABEL_29;
                    *(_OWORD *)v24 = 0LL;
                    *((_OWORD *)v24 + 1) = 0LL;
                    *((_OWORD *)v24 + 2) = 0LL;
                    *((_OWORD *)v24 + 1) = *((_OWORD *)i + 1);
                    v24[4] = (PVOID *)i[6];
                    *((_DWORD *)v24 + 10) = *((_DWORD *)i + 14);
                    v26 = v40;
                    if ( *v40 != &v39 )
                      goto LABEL_61;
                    v25[1] = v40;
                    *v25 = &v39;
                    *v26 = v25;
                    v40 = (PVOID *)v25;
                  }
                }
                if ( (unsigned __int8)sub_140B141E0(
                                        v47[6],
                                        LODWORD(v47[7]),
                                        (__int64)&v39,
                                        Context,
                                        (__int64)ReturnLength,
                                        v31,
                                        (__int64)v34,
                                        v32,
                                        v1,
                                        v33)
                  && (unsigned __int8)sub_140B13578(v47[6]) )
                {
                  sub_140AB4260();
                  v13 = (__int64 *)v34[0];
                  v14 = 0;
                  v5 = 0;
                  while ( v13 != v34 )
                  {
                    v13 = (__int64 *)*v13;
                    ++v14;
                  }
                  v4 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v14 + 1), 0x32384D43u);
                  if ( !v4 )
                    KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                  v15 = v34[0];
                  v16 = 0;
                  if ( (__int64 *)v34[0] != v34 )
                  {
                    do
                    {
                      ObjectAttributes.Length = 48;
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 32);
                      ObjectAttributes.RootDirectory = 0LL;
                      ObjectAttributes.Attributes = 576;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( ZwOpenKey(&v4[v16], 0x2001Fu, &ObjectAttributes) >= 0 )
                        ++v16;
                      v15 = *(_QWORD *)v15;
                    }
                    while ( (__int64 *)v15 != v34 );
                    v3 = PoolWithTag;
                  }
                  v4[v16] = 0LL;
                }
              }
            }
          }
          else
          {
            while ( v7 >= 0 )
            {
              for ( j = v3; j->Length; j += 2 )
              {
                if ( !RtlEqualUnicodeString(j, &stru_140D3CFA8, 1u) )
                {
                  v21 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x20204D43u);
                  v22 = v21;
                  if ( !v21 )
                    goto LABEL_29;
                  memset(v21, 0, 0x40uLL);
                  v22[14] = -1;
                  if ( (int)sub_140B12AF0(j, (__int64)v22) >= 0 )
                  {
                    v23 = p_P;
                    if ( *p_P != &P )
LABEL_61:
                      __fastfail(3u);
                    *((_QWORD *)v22 + 1) = p_P;
                    *(_QWORD *)v22 = &P;
                    *v23 = v22;
                    p_P = (PVOID *)v22;
                  }
                  else
                  {
                    ExFreePoolWithTag(v22, 0);
                  }
                }
              }
              v7 = ZwQueryDirectoryObject(DirectoryHandle, v3, 0x400u, 1u, 0, &v38, &v37);
              if ( v7 == -2147483622 )
              {
                v1 = v43;
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v34[0] != v34 )
    sub_140B13134(v47[6], v34);
  if ( v5 )
    sub_140AB4260();
  if ( v2 )
    sub_140AB4580((__int64)v49);
  if ( v6 )
    sub_140AB42A0();
  sub_140B130E0(v47);
  if ( v48[4] )
    sub_140B130E0(v48);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v17 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v27 = *v17;
      sub_140B130E0(v17);
      ExFreePoolWithTag(v17, 0);
      v17 = (PVOID **)v27;
    }
    while ( v27 != &P );
  }
  v18 = (PVOID **)v39;
  if ( v39 != &v39 )
  {
    do
    {
      v28 = *v18;
      ExFreePoolWithTag(v18, 0);
      v18 = (PVOID **)v28;
    }
    while ( v28 != &v39 );
  }
  result = v4;
  *((_QWORD *)KeGetCurrentThread() + 284) = v46;
  return result;
}
