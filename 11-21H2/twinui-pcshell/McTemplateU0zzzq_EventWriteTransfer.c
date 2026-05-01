/*
 * XREFs of McTemplateU0zzzq_EventWriteTransfer @ 0x1804E5EDC
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1804E4E40 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18006B42C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zzzq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-9h]
  int v17; // [rsp+48h] [rbp-1h]
  int v18; // [rsp+4Ch] [rbp+3h]
  const wchar_t *v19; // [rsp+50h] [rbp+7h]
  int v20; // [rsp+58h] [rbp+Fh]
  int v21; // [rsp+5Ch] [rbp+13h]
  const wchar_t *v22; // [rsp+60h] [rbp+17h]
  int v23; // [rsp+68h] [rbp+1Fh]
  int v24; // [rsp+6Ch] [rbp+23h]
  char *v25; // [rsp+70h] [rbp+27h]
  __int64 v26; // [rsp+78h] [rbp+2Fh]

  v6 = -1LL;
  v7 = 10;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v17 = v9;
  v18 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v16 = a3;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = (unsigned int)(2 * v10 + 2);
  }
  else
  {
    v11 = 10LL;
  }
  v12 = a5;
  v20 = v11;
  if ( !a4 )
    a4 = L"NULL";
  v21 = 0;
  v19 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v23 = v7;
  v22 = v12;
  v25 = &a6;
  v24 = 0;
  v26 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &SwitchToAppByIdWithArguments_Stop,
           v11,
           5u,
           &v15);
}
