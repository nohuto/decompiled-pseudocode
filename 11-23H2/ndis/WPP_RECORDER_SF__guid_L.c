/*
 * XREFs of WPP_RECORDER_SF__guid_L @ 0x1C00B7EB8
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013F148 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B216C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_L(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        __int64 a6,
        ...)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v8 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, a6, 16LL, va, 4LL, 0LL);
  LOWORD(v10) = a4;
  return WppAutoLogTrace(a1, v8, 22LL, a5, v10, a6);
}
