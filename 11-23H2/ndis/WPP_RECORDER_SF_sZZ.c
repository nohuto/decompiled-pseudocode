/*
 * XREFs of WPP_RECORDER_SF_sZZ @ 0x1C007498C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0027330 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const char *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v12; // rax
  const wchar_t *v13; // r15
  const wchar_t *v14; // r11
  __int64 v15; // rdx
  const wchar_t *v16; // r10
  const wchar_t *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r9
  const char *v20; // r8
  int v22; // [rsp+20h] [rbp-88h]

  v8 = a6;
  v9 = -1LL;
  v10 = a1;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_25;
  if ( a8 )
  {
    v12 = *a8;
    if ( *a8 )
    {
      v13 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v12 = 8LL;
  }
  v13 = L"NULL";
LABEL_8:
  v14 = a8;
  if ( !a8 )
    v14 = L"\b";
  if ( !a7 )
  {
    v15 = 8LL;
    goto LABEL_14;
  }
  v15 = *a7;
  if ( !*a7 )
  {
LABEL_14:
    v16 = L"NULL";
    goto LABEL_15;
  }
  v16 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_15:
  v17 = a7;
  if ( !a7 )
    v17 = L"\b";
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  v20 = a6;
  if ( !a6 )
    v20 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_c76b8a1161053093fae3a3dbe71d858b_Traceguids,
    a4,
    v20,
    v19,
    v17,
    2LL,
    v16,
    v15,
    v14,
    2LL,
    v13,
    v12,
    0LL);
  v10 = a1;
LABEL_25:
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v22) = a4;
  return WppAutoLogTrace(v10, 4LL, 13LL, &WPP_c76b8a1161053093fae3a3dbe71d858b_Traceguids, v22, v8);
}
