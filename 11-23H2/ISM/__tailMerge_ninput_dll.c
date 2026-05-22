/*
 * XREFs of __tailMerge_ninput_dll @ 0x180057F0F
 * Callers:
 *     __imp_load_DestroyInteractionContext @ 0x180057F03 (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_ResetInteractionContext @ 0x180057F8E (__imp_load_ResetInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x180057FA0 (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x180057FB2 (__imp_load_RegisterOutputCallbackInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x180057FC4 (__imp_load_CreateInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x180057FD6 (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x180057FE8 (__imp_load_SetPropertyInteractionContext.c)
 *     __imp_load_BufferPointerPacketsInteractionContext @ 0x180058134 (__imp_load_BufferPointerPacketsInteractionContext.c)
 *     __imp_load_ProcessBufferedPacketsInteractionContext @ 0x180058146 (__imp_load_ProcessBufferedPacketsInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180052880 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ninput_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ninput_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
