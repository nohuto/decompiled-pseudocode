/*
 * XREFs of McTemplateK0zq_EtwWriteTransfer @ 0x1C0007318
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0009508 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v11 = 0;
  v10 = v6;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 4LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWrite_EtwWriteTransfer(v6, &EXBUS_DEVICE_START_EXIT, a3, 3LL, v8);
}
