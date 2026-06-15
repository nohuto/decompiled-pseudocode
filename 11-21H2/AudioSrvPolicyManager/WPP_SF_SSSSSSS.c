/*
 * XREFs of WPP_SF_SSSSSSS @ 0x180025780
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F894 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_SSSSSSS(
        TRACEHANDLE a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // r10
  __int64 v11; // rdx
  const wchar_t *v12; // r15
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r13
  const wchar_t *v16; // r11
  __int64 v17; // rax
  __int64 v18; // r12
  const wchar_t *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  const wchar_t *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  const wchar_t *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rsi
  const wchar_t *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf

  v10 = a10;
  v11 = -1LL;
  v12 = a4;
  v13 = 10LL;
  if ( a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a10[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10LL;
  }
  v16 = a9;
  if ( !a10 )
    v10 = L"NULL";
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10LL;
  }
  v19 = a8;
  if ( !a9 )
    v16 = L"NULL";
  if ( a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a8[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10LL;
  }
  v22 = a7;
  if ( !a8 )
    v19 = L"NULL";
  if ( a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a7[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10LL;
  }
  if ( !a7 )
    v22 = L"NULL";
  v25 = a6;
  if ( a6 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a6[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10LL;
  }
  v28 = a5;
  if ( !a6 )
    v25 = L"NULL";
  if ( a5 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a5[v29] );
    v12 = a4;
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10LL;
  }
  if ( !a5 )
    v28 = L"NULL";
  v31 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v13 = 2 * v11 + 2;
    v31 = v12 == 0LL;
  }
  if ( v31 )
    v12 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
           0x28u,
           v12,
           v13,
           v28,
           v30,
           v25,
           v27,
           v22,
           v24,
           v19,
           v21,
           v16,
           v18,
           v10,
           v15,
           0LL);
}
