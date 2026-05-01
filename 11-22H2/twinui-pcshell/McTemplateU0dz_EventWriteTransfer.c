/*
 * XREFs of McTemplateU0dz_EventWriteTransfer @ 0x180042B64
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180042AF0 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180176D28 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0dz_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  int v4; // ecx
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  int *v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  const wchar_t *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = a3;
  v9 = 4LL;
  v8 = &v13;
  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v4 = 2 * v6 + 2;
  }
  else
  {
    v4 = 10;
  }
  v11 = v4;
  v12 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = a4;
  return McGenEventWrite_EventWriteTransfer(
           &MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_WindowTitleChange,
           a3,
           3LL,
           v7);
}
