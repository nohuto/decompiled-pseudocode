/*
 * XREFs of McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer @ 0x1C0066D20
 * Callers:
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C006882C (StorEtwMiniportBugResetBrokenEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        int a15,
        __int64 a16,
        char a17)
{
  const char *v17; // r11
  __int64 v18; // rcx
  const char *v19; // rdx
  const char *v21; // r8
  __int64 v22; // rax
  unsigned int v23; // r10d
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+38h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  char *v33; // [rsp+58h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  char *v37; // [rsp+78h] [rbp-90h]
  __int64 v38; // [rsp+80h] [rbp-88h]
  char *v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  char *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  const char *v45; // [rsp+B8h] [rbp-50h]
  int v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C4h] [rbp-44h]
  const char *v48; // [rsp+C8h] [rbp-40h]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  const char *v51; // [rsp+D8h] [rbp-30h]
  int v52; // [rsp+E0h] [rbp-28h]
  int v53; // [rsp+E4h] [rbp-24h]
  char *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  int *v56; // [rsp+F8h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp-8h]
  __int64 v58; // [rsp+108h] [rbp+0h]
  int v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+114h] [rbp+Ch]
  char *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]

  v17 = a13;
  v18 = -1LL;
  v19 = a12;
  v21 = a11;
  if ( a4 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a4[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v32 = v23;
  v34 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v36 = 16LL;
  v31 = a4;
  v33 = &a5;
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v43 = a10;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 16LL;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v46 = v25;
  v47 = 0;
  if ( !a11 )
    v21 = "NULL";
  v45 = v21;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v49 = v27;
  v50 = 0;
  if ( !a12 )
    v19 = "NULL";
  v48 = v19;
  if ( a13 )
  {
    do
      ++v18;
    while ( a13[v18] );
    v28 = (unsigned int)(v18 + 1);
  }
  else
  {
    v28 = 5LL;
  }
  v52 = v28;
  v54 = &a14;
  v53 = 0;
  v56 = &a15;
  v58 = a16;
  if ( !a13 )
    v17 = "NULL";
  v59 = a15;
  v61 = &a17;
  v51 = v17;
  v55 = 4LL;
  v57 = 4LL;
  v60 = 0;
  v62 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v28, &EventMiniportBugResetBroken, a3, 0xFu, &v30);
}
