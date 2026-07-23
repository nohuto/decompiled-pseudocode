/*
 * XREFs of sub_14090BC6C @ 0x14090BC6C
 * Callers:
 *     sub_1406EA1C8 @ 0x1406EA1C8 (sub_1406EA1C8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x14041E3C0 (ZwQuerySecurityObject.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     sub_14091CDE8 @ 0x14091CDE8 (sub_14091CDE8.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090BC6C(unsigned __int16 a1)
{
  unsigned int v1; // r12d
  char v2; // r13
  _QWORD *v3; // rdi
  char v4; // r14
  ULONG_PTR *v5; // rsi
  _PRIVILEGE_SET *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  struct _LOOKASIDE_LIST_EX *v11; // r9
  char v12; // r12
  int v13; // r8d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  HANDLE v32; // rcx
  unsigned __int8 *v33; // rdx
  char v35; // [rsp+48h] [rbp-C0h]
  ULONG v36; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Length[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Disposition[2]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v41[3]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  _LIST_ENTRY ListHead; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v46[3]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+118h] [rbp+10h] BYREF
  ULONG *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  char v52; // [rsp+158h] [rbp+50h] BYREF

  v1 = a1;
  Disposition[0] = 0;
  KeyHandle = 0LL;
  memset(v41, 0, sizeof(v41));
  v45 = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0LL;
  Disposition[1] = 0;
  v4 = 0;
  Handle = 0LL;
  ListHead = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  memset(v46, 0, sizeof(v46));
  v6 = 0LL;
  Length[0] = 0;
  v36 = 0;
  InitializeListHead(&ListHead);
  v35 = sub_140AB46D0(v8, v7, v9);
  if ( !v35 )
  {
    v10 = -1073741431;
    goto LABEL_31;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &stru_140D3CE18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
    {
      v6 = (_PRIVILEGE_SET *)Allocate(PagedPool, Length[0], 0x20204D43u, v11);
      if ( v6 )
      {
        if ( ZwQuerySecurityObject(KeyHandle, 4u, v6, Length[0], Length) < 0 )
        {
          SeFreePrivileges(v6);
          v6 = 0LL;
        }
      }
    }
    WORD1(v45) = 256;
    *((_QWORD *)&v45 + 1) = &v52;
    sub_1402D17BC(&v45, L"\\Registry\\Machine\\System\\ControlSet%03d", v1);
    v12 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v45;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = v6;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v10 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Disposition);
    if ( v6 )
      SeFreePrivileges(v6);
    if ( v10 >= 0 )
    {
      v10 = sub_140AB4630((_DWORD)KeyHandle, 131097, v13, 0, (__int64)v41, 0LL);
      if ( v10 >= 0 )
      {
        v10 = sub_140AB4630((_DWORD)Handle, 131078, v14, 0, (__int64)&v38, 0LL);
        if ( v10 >= 0 )
        {
          sub_14071B6EC();
          v3 = (_QWORD *)v41[0];
          v15 = sub_140AB43C0(v41[0], 0LL);
          v5 = (ULONG_PTR *)v38;
          while ( 1 )
          {
            v10 = v15;
            if ( v15 < 0 || (v10 = sub_140AB43C0(v5, 0LL), v10 < 0) )
            {
LABEL_27:
              v4 = 1;
              goto LABEL_31;
            }
            v18 = v5[1];
            LOBYTE(v16) = 1;
            v19 = sub_14069FC64(v18, v16, v17, (__int64)&v41[1]);
            v10 = v19;
            if ( v19 == -1073741267 )
            {
              v12 = 1;
            }
            else if ( v19 < 0 )
            {
              goto LABEL_27;
            }
            v20 = sub_14091D070(v18, 0LL, &v41[1]);
            v10 = v20;
            if ( v20 == -1073741267 )
            {
              v12 = 1;
            }
            else if ( v20 < 0 )
            {
              goto LABEL_27;
            }
            v21 = sub_14069E26C(v18, 0, (__int64)&v41[1]);
            v10 = v21;
            if ( v21 != -1073741267 )
            {
              if ( v21 < 0 )
                goto LABEL_27;
              if ( !v12 )
                break;
            }
            sub_1406A0070(v18, 12, &v41[1], v22);
            sub_140AB4260(v24, v23, v25, v26);
            v12 = 0;
            v10 = sub_1406A0010((__int64)&v41[1], 0LL);
            if ( v10 < 0 )
              goto LABEL_31;
            sub_14091BC2C(&v36);
            sub_140681834((__int64)&v41[1]);
            *(_OWORD *)&v41[1] = 0LL;
            sub_14071B6EC();
            v15 = sub_140AB43C0(v3, 0LL);
          }
          sub_14091CDE8(v18, 8LL, 0LL, &ListHead);
          sub_14069E21C(v18, 8LL, 0, (__int64)&ListHead, &Disposition[1]);
          sub_140AB4550(v46);
          v2 = 1;
          v10 = sub_14091EE14(
                  *(_QWORD *)(v3[1] + 32LL),
                  *(_DWORD *)(v3[1] + 40LL),
                  *(_QWORD *)(v5[1] + 32),
                  *(_DWORD *)(v5[1] + 40),
                  2,
                  Disposition[0] != 1);
          sub_14071B3F0(v5[1]);
          v4 = 1;
          goto LABEL_31;
        }
        v5 = (ULONG_PTR *)v38;
      }
      v3 = (_QWORD *)v41[0];
    }
  }
LABEL_31:
  sub_140346C60(&ListHead);
  if ( v4 )
    sub_140AB4260(v28, v27, v29, v30);
  if ( v2 )
    sub_140AB4580(v46);
  sub_140681834((__int64)&v41[1]);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v32 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    sub_140AB42A0(v32, v31);
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v36 = v10;
      v33 = (unsigned __int8 *)&dword_140028BB4;
      goto LABEL_52;
    }
  }
  else if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
  {
    v33 = (unsigned __int8 *)byte_140028BF9;
    v36 = Disposition[1];
LABEL_52:
    v38 = 0x1000000LL;
    v49 = 4LL;
    v48 = &v36;
    v51 = 8LL;
    v50 = &v38;
    sub_14020A9C4((__int64)&dword_140C03868, v33, 0LL, 0LL, 4u, &v47);
  }
  return (unsigned int)v10;
}
