/*
 * XREFs of LdrpReadMemory @ 0x180001260
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x180001120 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180001140 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList @ 0x180001640 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x1800025B0 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800D9BD0 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800D9D80 (LdrQueryNextListEntry32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800D9DB8 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    return a4 != v6 ? 0x8000000D : 0;
  return result;
}
