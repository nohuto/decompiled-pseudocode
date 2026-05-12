/*
 * XREFs of McTemplateK0jqzzqxtqqtt_EtwWriteTransfer @ 0x1C00320C8
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqzzqxtqqtt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        int a12,
        char a13,
        char a14)
{
  const wchar_t *v14; // rcx
  const wchar_t *v15; // r8
  int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r9d
  bool v20; // zf
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  char *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  const wchar_t *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  char *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  char *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  v14 = a6;
  v15 = a7;
  v22 = StorageD3RegistryState;
  v26 = &a5;
  v16 = 10;
  v17 = -1LL;
  v24 = a4;
  v25 = 16LL;
  v27 = 4LL;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v29 = v19;
  v30 = 0;
  if ( !a6 )
    v14 = L"NULL";
  v28 = v14;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v17;
    while ( a7[v17] );
    v16 = 2 * v17 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v15 = L"NULL";
  v32 = v16;
  v31 = v15;
  v34 = &a8;
  v33 = 0;
  v36 = &a9;
  v35 = 4LL;
  v38 = &a10;
  v37 = 8LL;
  v40 = &a11;
  v42 = &v22;
  v44 = &a13;
  v46 = &a14;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v14, &EventInitializeStorageD3, 0LL, 0xCu, &v23);
}
