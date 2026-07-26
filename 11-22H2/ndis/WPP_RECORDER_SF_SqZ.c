/*
 * XREFs of WPP_RECORDER_SF_SqZ @ 0x1C009B74C
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C009416C (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  __int64 v9; // rsi
  __int64 v11; // rcx
  const wchar_t *v12; // r10
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  const wchar_t *v16; // r8
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-78h]

  v8 = a6;
  v9 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( !a8 )
  {
    v11 = 8LL;
    goto LABEL_7;
  }
  v11 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v12 = L"NULL";
    goto LABEL_8;
  }
  v12 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v13 = a8;
  if ( !a8 )
    v13 = L"\b";
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10LL;
  }
  v16 = a6;
  if ( !a6 )
    v16 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
    0x7Fu,
    v16,
    v15,
    &a7,
    8LL,
    v13,
    2LL,
    v12,
    v11,
    0LL);
LABEL_18:
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v8 = L"NULL";
  LOWORD(v19) = 127;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids, v19, v8);
}
