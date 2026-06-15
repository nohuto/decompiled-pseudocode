/*
 * XREFs of ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x14002EA5C
 * Callers:
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x14002E55C (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetEffectPackRegistryPath(struct _GUID *a1, __int64 a2, unsigned __int16 *a3)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  unsigned int Data1; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Data1 = a1->Data1;
  v3 = StringCchPrintfW(
         a3,
         0x104uLL,
         (size_t *)L"%s\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\EffectsPacks");
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
    (const char *)(unsigned int)v3,
    Data1);
  return v4;
}
