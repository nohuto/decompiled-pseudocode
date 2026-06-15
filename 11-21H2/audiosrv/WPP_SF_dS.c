/*
 * XREFs of WPP_SF_dS @ 0x1800DB760
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800DA780 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dS(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7);
}
