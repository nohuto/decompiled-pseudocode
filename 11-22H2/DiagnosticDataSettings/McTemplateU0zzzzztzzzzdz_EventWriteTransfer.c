/*
 * XREFs of McTemplateU0zzzzztzzzzdz_EventWriteTransfer @ 0x180003814
 * Callers:
 *     TelSetLocalTelemetrySetting @ 0x1800018B0 (TelSetLocalTelemetrySetting.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800037B0 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zzzzztzzzzdz_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        const wchar_t *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13)
{
  __int64 v13; // rcx
  __int64 v15; // rax
  int v16; // edx
  const wchar_t *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  const wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  const wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // r8d
  const wchar_t *v26; // rax
  int v27; // edx
  const wchar_t *v28; // rax
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  const wchar_t *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  const wchar_t *v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const wchar_t *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  const wchar_t *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  const wchar_t *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  const wchar_t *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  const wchar_t *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]

  v13 = -1LL;
  if ( a3 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a3[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v32 = v16;
  v33 = 0;
  v17 = L"NULL";
  if ( a3 )
    v17 = a3;
  v31 = v17;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a4 + 2 * v18) );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v20 = L"NULL";
  if ( a4 )
    v20 = (const wchar_t *)a4;
  v36 = 0;
  v34 = v20;
  v37 = L"NULL";
  v38 = 10LL;
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v40 = v22;
  v23 = L"NULL";
  v41 = 0;
  if ( a6 )
    v23 = a6;
  v39 = v23;
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v43 = v25;
  v26 = L"NULL";
  if ( a7 )
    v26 = a7;
  v44 = 0;
  v42 = v26;
  v45 = &a8;
  v46 = 4LL;
  if ( a9 )
  {
    do
      ++v13;
    while ( a9[v13] );
    v27 = 2 * v13 + 2;
  }
  else
  {
    v27 = 10;
  }
  v48 = v27;
  v28 = L"NULL";
  v49 = 0;
  if ( a9 )
    v28 = a9;
  v50 = L"NULL";
  v47 = v28;
  v51 = 10LL;
  v56 = &a13;
  v58 = L"DiagnosticData";
  v52 = L"NULL";
  v53 = 10LL;
  v54 = L"NULL";
  v55 = 10LL;
  v57 = 4LL;
  v59 = 30LL;
  return McGenEventWrite_EventWriteTransfer(v13, a2, (__int64)a9, a4, &v30);
}
