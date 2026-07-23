/*
 * XREFs of sub_140697BE0 @ 0x140697BE0
 * Callers:
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 * Callees:
 *     sub_1402202AC @ 0x1402202AC (sub_1402202AC.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_140561C2C @ 0x140561C2C (sub_140561C2C.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140697BE0(int a1, void *a2, __int64 a3)
{
  const WCHAR *v3; // rdi
  NTSTATUS v6; // eax
  NTSTATUS inited; // ebx
  NTSTATUS v9; // eax
  __int64 Pool2; // rsi
  ULONG v11; // r15d
  NTSTATUS i; // eax
  int v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  int v16; // r9d
  __int64 v17; // rax
  int v18; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v27; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING v31; // [rsp+100h] [rbp+0h] BYREF
  GUID v32; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  *(_QWORD *)&v23.Length = 1441812LL;
  v30 = 0LL;
  v25 = 0LL;
  v23.Buffer = L"Interfaces";
  P = 0LL;
  ObjectAttributes.ObjectName = &v23;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v29 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  inited = v6;
  if ( v6 == -1073741772 )
  {
    inited = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v23.Length = 262146;
  v23.Buffer = (wchar_t *)asc_140868930;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v23;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  inited = v9;
  if ( v9 == -1073741772 )
    goto LABEL_10;
  if ( v9 < 0 )
    goto LABEL_3;
  *(_QWORD *)&v29 = Handle;
  *((_QWORD *)&v29 + 1) = a3;
  LODWORD(v30) = 0;
  inited = sub_140787F7C(
             qword_140D00AC0,
             0,
             a1,
             0,
             (__int64)sub_140561930,
             (__int64)&v29,
             0LL,
             0,
             (__int64)&ResultLength,
             0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( inited >= 0 )
  {
    inited = v30;
    if ( (int)v30 >= 0 )
    {
LABEL_10:
      Pool2 = ExAllocatePool2(256LL, 622LL, 1667526736LL);
      if ( !Pool2 )
      {
        inited = -1073741670;
        goto LABEL_3;
      }
      v11 = 0;
      for ( i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)Pool2, 0x26Eu, &ResultLength);
            ;
            i = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, (PVOID)Pool2, 0x26Eu, &ResultLength) )
      {
        inited = i;
        if ( i < 0 )
        {
          if ( i == -2147483622 )
          {
            inited = 0;
          }
          else if ( i == -2147483643 )
          {
            inited = -1073741773;
          }
          goto LABEL_27;
        }
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        if ( wcsicmp((const wchar_t *)(Pool2 + 16), asc_140868930) )
          break;
LABEL_24:
        ++v11;
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(Pool2 + 16));
      if ( inited < 0 )
        goto LABEL_27;
      v27 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      inited = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( inited < 0 )
        goto LABEL_27;
      LODWORD(v24) = 0;
      if ( a3 && *(_QWORD *)(a3 + 16) && sub_1402202AC(DestinationString.Buffer, &v31, &v24) )
      {
        v24 = 0LL;
        v13 = sub_14069A1F8(a3, v31.Buffer, &v24);
        inited = v13;
        if ( v13 < 0 )
        {
          if ( v13 != -1073741772 )
            goto LABEL_22;
          v27 = v31;
        }
        else
        {
          v14 = *(_DWORD *)(v24 + 32);
          if ( (unsigned int)(v14 - 1) <= 1 )
          {
            v15 = *(_WORD *)(v24 + 36);
            v27.Buffer = *(wchar_t **)(v24 + 40);
            v27.MaximumLength = v15;
            v27.Length = v15 - 2;
          }
          else
          {
            if ( v14 != 7 )
            {
LABEL_22:
              ZwClose(Handle);
              v3 = 0LL;
LABEL_23:
              Handle = 0LL;
              goto LABEL_24;
            }
            v3 = *(const WCHAR **)(v24 + 40);
          }
          if ( v3 )
          {
            if ( *v3 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v23, v3);
                if ( sub_140561C2C((__int64)&v23, &v32, &v25) )
                {
                  LOBYTE(v16) = 1;
                  inited = sub_140769C24(a1, (unsigned int)&v32, v25, v16, (__int64)&P, 0LL);
                  if ( inited < 0 )
                    break;
                  inited = sub_14094B580(P, Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( inited < 0 )
                    break;
                }
                v17 = -1LL;
                do
                  ++v17;
                while ( v3[v17] );
                v3 += v17 + 1;
                if ( !*v3 )
                {
                  v3 = 0LL;
                  goto LABEL_46;
                }
              }
LABEL_27:
              ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_3:
              if ( Handle )
                ZwClose(Handle);
              goto LABEL_5;
            }
            v3 = 0LL;
            goto LABEL_38;
          }
        }
      }
      v3 = 0LL;
      if ( sub_140561C2C((__int64)&v27, &v32, &v25) )
      {
        LOBYTE(v18) = 1;
        inited = sub_140769C24(a1, (unsigned int)&v32, v25, v18, (__int64)&P, 0LL);
        if ( inited < 0 )
          goto LABEL_27;
        inited = sub_14094B580(P, Handle, a3);
        ExFreePoolWithTag(P, 0);
LABEL_46:
        if ( inited < 0 )
          goto LABEL_27;
      }
LABEL_38:
      ZwClose(Handle);
      goto LABEL_23;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
