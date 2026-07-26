/*
 * XREFs of WPP_RECORDER_SF_ZZ @ 0x1C00B9C28
 * Callers:
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B9758 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rdi
  __int64 v9; // rax
  const wchar_t *v10; // r11
  const wchar_t *v11; // r10
  __int64 v12; // rcx
  const wchar_t *v13; // r9
  const wchar_t *v14; // r8
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-78h]

  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( a7 )
  {
    v9 = *a7;
    if ( *a7 )
    {
      v10 = (const wchar_t *)*((_QWORD *)a7 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v9 = 8LL;
  }
  v10 = L"NULL";
LABEL_8:
  v11 = a7;
  if ( !a7 )
    v11 = L"\b";
  if ( !a6 )
  {
    v12 = 8LL;
    goto LABEL_14;
  }
  v12 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v13 = L"NULL";
    goto LABEL_15;
  }
  v13 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v14 = a6;
  if ( !a6 )
    v14 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_900830c1729f38670cf8e0a8f44a346b_Traceguids,
    0x10u,
    v14,
    2LL,
    v13,
    v12,
    v11,
    2LL,
    v10,
    v9,
    0LL);
LABEL_18:
  v15 = a6 == 0LL;
  if ( a6 )
    v15 = 0;
  if ( v15 )
    v7 = L"\b";
  LOWORD(v17) = 16;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_900830c1729f38670cf8e0a8f44a346b_Traceguids, v17, v7);
}
