/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C00AA150
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8BEC (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AC73C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31)
{
  __int64 v32; // rcx
  const wchar_t *v33; // rdx
  const wchar_t *v34; // rax
  int v36; // [rsp+28h] [rbp-240h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_11;
  if ( !a7 )
  {
    v32 = 8LL;
    goto LABEL_7;
  }
  v32 = *a7;
  if ( !*a7 )
  {
LABEL_7:
    v33 = L"NULL";
    goto LABEL_8;
  }
  v33 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_8:
  v34 = a7;
  if ( !a7 )
    v34 = L"\b";
  ndisWppFastTraceMessage(
    (const struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
    0x2Cu,
    a6,
    16LL,
    v34,
    2LL,
    v33,
    v32,
    &a8,
    4LL,
    &a9,
    4LL,
    &a10,
    4LL,
    &a11,
    4LL,
    &a12,
    4LL,
    &a13,
    4LL,
    &a14,
    4LL,
    &a15,
    4LL,
    &a16,
    4LL,
    &a17,
    4LL,
    &a18,
    4LL,
    &a19,
    4LL,
    &a20,
    4LL,
    &a21,
    4LL,
    &a22,
    4LL,
    &a23,
    4LL,
    &a24,
    4LL,
    &a25,
    4LL,
    &a26,
    4LL,
    &a27,
    4LL,
    &a28,
    4LL,
    &a29,
    4LL,
    &a30,
    4LL,
    &a31,
    4LL,
    0LL);
LABEL_11:
  LOWORD(v36) = 44;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids, v36, a6);
}
