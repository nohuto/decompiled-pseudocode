/*
 * XREFs of McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer @ 0x1C00327B4
 * Callers:
 *     StorLogMFNDChildPFControl @ 0x1C003BEFC (StorLogMFNDChildPFControl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // r9d
  const wchar_t *v21; // rcx
  __int64 v22; // rdx
  int v23; // r9d
  const wchar_t *v24; // rcx
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  int *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  const wchar_t *v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  char *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  char *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  char *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  char *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+148h] [rbp+48h] BYREF

  v57 = a4;
  v16 = a6;
  v28 = &v57;
  v30 = a5;
  v17 = -1LL;
  v29 = 4LL;
  v31 = 16LL;
  v18 = 10;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v33 = v20;
  v34 = 0;
  if ( !a6 )
    v16 = L"NULL";
  v32 = v16;
  v21 = a7;
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v36 = v23;
  v37 = 0;
  if ( !a7 )
    v21 = L"NULL";
  v35 = v21;
  v24 = a8;
  v25 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v17;
    while ( a8[v17] );
    v18 = 2 * v17 + 2;
    v25 = a8 == 0LL;
  }
  if ( v25 )
    v24 = L"NULL";
  v39 = v18;
  v38 = v24;
  v41 = &a9;
  v40 = 0;
  v43 = &a10;
  v42 = 4LL;
  v45 = &a11;
  v44 = 4LL;
  v47 = &a12;
  v49 = &a13;
  v51 = &a14;
  v53 = &a15;
  v55 = &a16;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 1LL;
  v54 = 1LL;
  v56 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v24, &EventMFNDChildPFControl, 0LL, 0xEu, &v27);
}
