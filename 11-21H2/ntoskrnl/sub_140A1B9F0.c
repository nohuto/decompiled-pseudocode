/*
 * XREFs of sub_140A1B9F0 @ 0x140A1B9F0
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14066B6D8 @ 0x14066B6D8 (sub_14066B6D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1B9F0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  char v6; // r14
  unsigned int v9; // esi
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  unsigned __int8 **v12; // r12
  unsigned __int8 *v13; // rcx
  unsigned int v14; // ecx
  NTSTATUS appended; // ebx
  __int64 v16; // rax
  int v17; // ecx
  wchar_t *Pool2; // rsi
  __int64 v19; // r12
  unsigned int v20; // r13d
  PSID *v21; // r12
  unsigned int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  char *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0;
  v28 = a4;
  v27 = a5;
  v29 = a6;
  UnicodeString = 0LL;
  Destination = 0LL;
  if ( a1 && (v9 = *a1) != 0 )
  {
    v10 = 0;
    v11 = 1;
    v12 = (unsigned __int8 **)(*((_QWORD *)a1 + 1) + 8LL);
    do
    {
      v13 = *v12;
      v24 = 0;
      sub_14066B6D8(v13, &v24);
      v14 = v11 + (v24 >> 1) + 7;
      if ( v14 < v11 )
      {
        appended = -1073741675;
        goto LABEL_26;
      }
      ++v10;
      v12 += 2;
      v11 += (v24 >> 1) + 7;
    }
    while ( v10 < v9 );
    if ( v14 > 0x7FFF )
    {
      appended = -1073741811;
      goto LABEL_26;
    }
    v16 = (unsigned int)*v27;
    v17 = v16 + v14;
    if ( (unsigned int)v16 + v11 >= 0x400 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v11, 1799447891LL);
      if ( !Pool2 )
      {
        appended = -1073741801;
        goto LABEL_26;
      }
      v6 = 1;
    }
    else
    {
      Pool2 = (wchar_t *)(v28 + 2 * v16);
      *v27 = v17;
    }
    v19 = *((_QWORD *)a1 + 1);
    Destination.MaximumLength = 2 * v11;
    appended = 0;
    UnicodeString.MaximumLength = 512;
    v20 = 0;
    Destination.Buffer = Pool2;
    UnicodeString.Buffer = (wchar_t *)&v30;
    if ( *a1 )
    {
      v21 = (PSID *)(v19 + 8);
      do
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
        if ( appended < 0 )
          goto LABEL_21;
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
        RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
        ++v20;
        v21 += 2;
        appended = RtlAppendUnicodeToString(&Destination, L"}");
      }
      while ( v20 < *a1 );
    }
    if ( a3 )
    {
      v22 = Destination.Length + 2;
      *(_QWORD *)a3 = Pool2;
      *(_QWORD *)(a3 + 8) = v22;
    }
    if ( appended < 0 )
    {
LABEL_21:
      if ( v6 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v6 = 0;
      }
    }
  }
  else
  {
    if ( a3 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_QWORD *)a3 = "-";
      *(_DWORD *)(a3 + 8) = 4;
    }
    appended = 0;
  }
LABEL_26:
  *v29 = v6;
  return (unsigned int)appended;
}
