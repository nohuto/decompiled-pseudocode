/*
 * XREFs of sub_1409E1200 @ 0x1409E1200
 * Callers:
 *     sub_140862888 @ 0x140862888 (sub_140862888.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_1409E101C @ 0x1409E101C (sub_1409E101C.c)
 *     sub_1409E10D8 @ 0x1409E10D8 (sub_1409E10D8.c)
 *     sub_1409E1514 @ 0x1409E1514 (sub_1409E1514.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E1200(WCHAR *KeyHandle, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  _BYTE *v8; // rcx
  __int64 *v9; // r9
  char *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  WCHAR *Pool2; // rbx
  int v15; // edi
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v22[68]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[136]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v24; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v25; // [rsp+3B8h] [rbp+2B8h]
  _QWORD v26[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v27; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v28; // [rsp+3E8h] [rbp+2E8h] BYREF
  _BYTE v29[224]; // [rsp+420h] [rbp+320h] BYREF

  v17 = 0;
  memset(KeyInformation, 0, 0x218uLL);
  v26[0] = L"Family";
  v26[1] = L"Model";
  v26[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset(&v22[2], 0, 0x100uLL);
  KeyHandlea = 0LL;
  ResultLength = 0;
  v4 = sub_140A56B08();
  sub_1409E10D8(KeyHandle, &v17, (__int64)&v24);
  memset(v29, 0, sizeof(v29));
  v5 = -1LL;
  v6 = (__int64 **)&v28;
  v24 = -1LL;
  v7 = v26;
  v25 = -1;
  v8 = &v29[24];
  v9 = &v24;
  v10 = &v27;
  v11 = 3LL;
  do
  {
    *(_QWORD *)v8 = v10;
    *((_QWORD *)v8 - 3) = sub_1408166C0;
    v10 += 16;
    v12 = *v7++;
    *v6 = v9;
    v9 = (__int64 *)((char *)v9 + 4);
    *((_QWORD *)v8 - 1) = v12;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 56;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v11;
  }
  while ( v11 );
  if ( (int)sub_140781F40(0x40000000, KeyHandle, (__int64)v29, 0LL) >= 0 && v17 == v4 )
  {
    v22[0] = 2097153;
    memset(&v22[1], 0, 0x104uLL);
    sub_1409E101C((__int64)&v24, (unsigned __int16 *)v22);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v22) )
    {
      do
        ++v5;
      while ( *(_WORD *)(a2 + 2 * v5) );
      v13 = (unsigned int)(2 * v5 + 512);
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v13, 1350005829LL);
      v15 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v15, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v16 = KeyInformation[3] >> 1;
        if ( (unsigned int)v16 <= 0xFE )
        {
          *((_WORD *)&KeyInformation[4] + v16) = 0;
          if ( (int)sub_1402E1280(Pool2, v13, L"%ws\\%ws", a2, &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, Pool2);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              sub_1409E1514(KeyHandlea, v22, &KeyInformation[4]);
              ZwClose(&KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(Pool2, 0x50777445u);
    }
  }
}
