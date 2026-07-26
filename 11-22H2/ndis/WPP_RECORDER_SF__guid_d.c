/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C0060BE4
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011BF1C (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C012BF90 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C012C7AC (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_d(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        __int64 a6,
        ...)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, a6, 16LL, va, 4LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, a6);
}
