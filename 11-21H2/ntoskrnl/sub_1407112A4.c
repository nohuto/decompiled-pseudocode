/*
 * XREFs of sub_1407112A4 @ 0x1407112A4
 * Callers:
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

void __fastcall sub_1407112A4(char *a1, int a2, int a3)
{
  int v6; // eax
  __int64 Pool3; // rax
  UNICODE_STRING *v8; // rbx
  const WCHAR *v9; // rdx
  unsigned int v10; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  int v12; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+68h] [rbp-49h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp-29h]
  __int64 v17; // [rsp+90h] [rbp-21h]
  _DWORD *v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  wchar_t *Buffer; // [rsp+A8h] [rbp-9h]
  _DWORD v21[2]; // [rsp+B0h] [rbp-1h] BYREF
  int *v22; // [rsp+B8h] [rbp+7h]
  __int64 v23; // [rsp+C0h] [rbp+Fh]
  int *v24; // [rsp+C8h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+D8h] [rbp+27h]
  __int64 v27; // [rsp+E0h] [rbp+2Fh]

  v10 = 0;
  DestinationString = 0LL;
  if ( !dword_140C03958 )
    return;
  v6 = sub_1407103B0(a1, 0LL, 0, &v10);
  if ( v10 <= 0x10 || v6 != -1073741820 )
    return;
  v14[1] = 0LL;
  v14[0] = 1LL;
  Pool3 = ExAllocatePool3(256, v10, 1849975617, (unsigned int)v14, 1);
  v8 = (UNICODE_STRING *)Pool3;
  if ( Pool3 )
  {
    if ( (int)sub_1407103B0(a1, Pool3, v10, &v10) >= 0 )
    {
      DestinationString = *v8;
      goto LABEL_8;
    }
    v9 = L"Query failed";
  }
  else
  {
    v9 = L"Storage allocation failed";
  }
  RtlInitUnicodeString(&DestinationString, v9);
LABEL_8:
  if ( (unsigned int)dword_140C03958 > 5 && sub_1402A2000((__int64)&dword_140C03958, 0x200000000000LL) )
  {
    v19 = 2LL;
    v17 = 8LL;
    v14[0] = 0x80000000LL;
    v27 = 8LL;
    v16 = v14;
    v21[1] = 0;
    v18 = v21;
    Buffer = DestinationString.Buffer;
    v21[0] = DestinationString.Length;
    v22 = &v11;
    v24 = &v12;
    p_DestinationString = &DestinationString;
    v11 = a2;
    v23 = 4LL;
    v12 = a3;
    v25 = 4LL;
    *(_QWORD *)&DestinationString.Length = a1;
    sub_14020A9C4((__int64)&dword_140C03958, (unsigned __int8 *)byte_14002BA90, 0LL, 0LL, 8u, &v15);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
