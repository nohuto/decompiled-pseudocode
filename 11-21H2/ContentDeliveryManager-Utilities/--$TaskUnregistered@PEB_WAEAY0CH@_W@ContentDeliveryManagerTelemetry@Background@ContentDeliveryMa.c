/*
 * XREFs of ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800EB3EC
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800EA934 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        const WCHAR **a1,
        const WCHAR *a2,
        const unsigned __int16 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r10
  const WCHAR *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+68h] [rbp-30h]
  int v22; // [rsp+6Ch] [rbp-2Ch]
  const unsigned __int16 *v23; // [rsp+70h] [rbp-28h]
  int v24; // [rsp+78h] [rbp-20h]
  int v25; // [rsp+7Ch] [rbp-1Ch]

  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a1;
    v9 = -1LL;
    if ( a3 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_BYTE *)a3 + v10) );
      v11 = v10 + 1;
    }
    else
    {
      a3 = &word_180121FC0;
      v11 = 1;
    }
    v24 = v11;
    v12 = 2;
    v23 = a3;
    v25 = 0;
    if ( a2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      a2 = &Src;
      v14 = 2;
    }
    v20 = a2;
    v21 = v14;
    v22 = 0;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v12 = 2 * v9 + 2;
    }
    else
    {
      v8 = &Src;
    }
    v18 = v12;
    v17 = v8;
    v19 = 0;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180194617, 0LL, 0LL, 5u, &v16);
  }
  return (int)v6;
}
