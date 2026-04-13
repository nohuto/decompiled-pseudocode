/*
 * XREFs of ??$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000AEAEPEBD@Z @ 0x180099FB8
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x1800995A8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::TriggerUnregisterCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,unsigned char &>(
        const WCHAR **a1,
        const WCHAR **a2,
        const WCHAR **a3,
        const WCHAR **a4,
        const WCHAR **a5,
        const WCHAR **a6,
        _BYTE *a7,
        const unsigned __int16 *a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r15
  const WCHAR *v14; // r11
  const unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rbx
  const WCHAR *v17; // rdi
  const WCHAR *v18; // rsi
  const WCHAR *v19; // r9
  const WCHAR *v20; // r10
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // r8d
  bool v36; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v38; // [rsp+68h] [rbp-69h]
  int v39; // [rsp+70h] [rbp-61h]
  int v40; // [rsp+74h] [rbp-5Dh]
  const WCHAR *v41; // [rsp+78h] [rbp-59h]
  int v42; // [rsp+80h] [rbp-51h]
  int v43; // [rsp+84h] [rbp-4Dh]
  const WCHAR *v44; // [rsp+88h] [rbp-49h]
  int v45; // [rsp+90h] [rbp-41h]
  int v46; // [rsp+94h] [rbp-3Dh]
  const WCHAR *v47; // [rsp+98h] [rbp-39h]
  int v48; // [rsp+A0h] [rbp-31h]
  int v49; // [rsp+A4h] [rbp-2Dh]
  const WCHAR *v50; // [rsp+A8h] [rbp-29h]
  int v51; // [rsp+B0h] [rbp-21h]
  int v52; // [rsp+B4h] [rbp-1Dh]
  const WCHAR *v53; // [rsp+B8h] [rbp-19h]
  int v54; // [rsp+C0h] [rbp-11h]
  int v55; // [rsp+C4h] [rbp-Dh]
  bool *v56; // [rsp+C8h] [rbp-9h]
  __int64 v57; // [rsp+D0h] [rbp-1h]
  const unsigned __int16 *v58; // [rsp+D8h] [rbp+7h]
  int v59; // [rsp+E0h] [rbp+Fh]
  int v60; // [rsp+E4h] [rbp+13h]

  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v13 = (__int64)v12;
  if ( *(_DWORD *)v12 > 5u )
  {
    LODWORD(v12) = 0;
    if ( (*(_QWORD *)(v13 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v13 + 24) & 0x200000000000LL) == *(_QWORD *)(v13 + 24) )
    {
      v14 = *a4;
      v15 = a8;
      v16 = *a3;
      v17 = *a2;
      v36 = *a7 != 0;
      v18 = *a1;
      v19 = *a6;
      v20 = *a5;
      v21 = -1LL;
      if ( a8 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *((_BYTE *)a8 + v22) );
        v23 = v22 + 1;
      }
      else
      {
        v15 = &word_180121FC0;
        v23 = 1;
      }
      v59 = v23;
      v58 = v15;
      v56 = &v36;
      v24 = 2;
      v60 = 0;
      v57 = 1LL;
      if ( v19 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( v19[v25] );
        v26 = 2 * v25 + 2;
      }
      else
      {
        v19 = &Src;
        v26 = 2;
      }
      v53 = v19;
      v54 = v26;
      v55 = 0;
      if ( v20 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( v20[v27] );
        v28 = 2 * v27 + 2;
      }
      else
      {
        v20 = &Src;
        v28 = 2;
      }
      v50 = v20;
      v51 = v28;
      v52 = 0;
      if ( v14 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( v14[v29] );
        v30 = 2 * v29 + 2;
      }
      else
      {
        v14 = &Src;
        v30 = 2;
      }
      v47 = v14;
      v48 = v30;
      v49 = 0;
      if ( v16 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( v16[v31] );
        v32 = 2 * v31 + 2;
      }
      else
      {
        v16 = &Src;
        v32 = 2;
      }
      v44 = v16;
      v45 = v32;
      v46 = 0;
      if ( v17 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( v17[v33] );
        v34 = 2 * v33 + 2;
      }
      else
      {
        v17 = &Src;
        v34 = 2;
      }
      v41 = v17;
      v42 = v34;
      v43 = 0;
      if ( v18 )
      {
        do
          ++v21;
        while ( v18[v21] );
        v24 = 2 * v21 + 2;
      }
      else
      {
        v18 = &Src;
      }
      v39 = v24;
      v38 = v18;
      v40 = 0;
      LODWORD(v12) = tlgWriteTransfer_EventWriteTransfer(v13, (unsigned __int8 *)dword_180192BD3, 0LL, 0LL, 0xAu, &v37);
    }
  }
  return (int)v12;
}
