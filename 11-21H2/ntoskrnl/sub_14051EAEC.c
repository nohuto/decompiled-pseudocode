/*
 * XREFs of sub_14051EAEC @ 0x14051EAEC
 * Callers:
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_14051F094 @ 0x14051F094 (sub_14051F094.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14051EAEC(void *a1, __int64 a2, int a3)
{
  HANDLE v3; // rbx
  unsigned int *v4; // r14
  _DWORD *Pool2; // rsi
  _WORD *v6; // rdi
  int v8; // ebx
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  ULONG v11; // r15d
  size_t v12; // rax
  ULONG v13; // r12d
  unsigned int v14; // r15d
  unsigned int *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // eax
  HANDLE v20; // rbx
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  HANDLE v26; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+58h] [rbp-A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING SystemRoutineName; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v31[14]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+120h] [rbp+20h] BYREF
  int v33; // [rsp+128h] [rbp+28h]

  v26 = a1;
  v3 = a1;
  v25 = a2;
  v4 = 0LL;
  Length = 0;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v33 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a2 || a3 != 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x636C6148u);
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1668047176LL);
      if ( !Pool2 )
      {
        v8 = -1073741801;
        goto LABEL_47;
      }
      v10 = ZwQueryKey(v3, KeyFullInformation, Pool2, Length, &Length);
      ++v9;
      v8 = v10;
      if ( v10 != -1073741789 && v10 != -2147483643 )
        break;
      if ( v9 >= 0xA )
        break;
      v3 = v26;
    }
    if ( v10 >= 0 )
    {
      v11 = Pool2[5];
      v12 = (unsigned int)(Pool2[6] + 2);
      v24 = v11;
      Size = v12;
      v6 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v12, 1668047176LL);
      if ( v6 )
      {
        v13 = 0;
        Length = 24;
        if ( v11 )
        {
          while ( 2 )
          {
            v14 = 0;
            do
            {
              if ( v4 )
                ExFreePoolWithTag(v4, 0x636C6148u);
              v15 = (unsigned int *)ExAllocatePool2(256LL, Length, 1668047176LL);
              v4 = v15;
              if ( !v15 )
                goto LABEL_43;
              v16 = ZwEnumerateKey(v26, v13, KeyBasicInformation, v15, Length, &Length);
              ++v14;
              v8 = v16;
            }
            while ( (v16 == -1073741789 || v16 == -2147483643) && v14 < 0xA );
            if ( v16 >= 0 )
            {
              memset(v6, 0, Size);
              v8 = sub_140248A04(v6, Size, (__int64)(v4 + 4), v4[3]);
              if ( v8 >= 0 )
              {
                if ( !a3 )
                {
                  v32 = 0LL;
                  v33 = 0;
                  LODWORD(v32) = wcstoul(v6, 0LL, 16);
                  goto LABEL_26;
                }
                if ( a3 == 1 )
                {
                  v19 = wcstoul(v6, 0LL, 16);
                  v17 = v25;
                  *(_DWORD *)(v25 + 8) = v19;
                }
                else
                {
LABEL_26:
                  v17 = v25;
                }
                RtlInitUnicodeString(&DestinationString, v6);
                ObjectAttributes.RootDirectory = v26;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( KeyHandle )
                {
                  ZwClose(v6);
                  KeyHandle = 0LL;
                }
                v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                if ( v8 >= 0 )
                {
                  if ( !a3 )
                  {
                    v18 = sub_14051EAEC(KeyHandle, &v32, 1LL);
                    v8 = v18;
                    goto LABEL_32;
                  }
                  memset(v31, 0, sizeof(v31));
                  v20 = KeyHandle;
                  v31[2] = L"Revision";
                  LODWORD(v31[1]) = 288;
                  v31[3] = v17 + 4;
                  LODWORD(v31[4]) = 0x4000000;
                  SystemRoutineName = 0LL;
                  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
                  MmGetSystemRoutineAddress(&SystemRoutineName);
                  v8 = sub_14042A5E0(0x40000000LL, v20);
                  if ( v8 >= 0 )
                  {
                    if ( qword_140C4ABB8 )
                    {
                      v18 = sub_14042A5E0(1LL, v17);
                      v8 = v18;
                      if ( v18 == -1073741275 )
                      {
                        v8 = 0;
                        goto LABEL_33;
                      }
LABEL_32:
                      if ( v18 >= 0 )
                      {
LABEL_33:
                        if ( ++v13 < v24 )
                          continue;
                      }
                    }
                    else
                    {
                      v8 = -1073741637;
                    }
                  }
                }
              }
            }
            break;
          }
          ExFreePoolWithTag(v4, 0x636C6148u);
        }
      }
      else
      {
LABEL_43:
        v8 = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0x636C6148u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x636C6148u);
LABEL_47:
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
