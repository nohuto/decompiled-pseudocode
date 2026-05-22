/*
 * XREFs of __tailMerge_ninput_dll @ 0x18004BFF3
 * Callers:
 *     __imp_load_ResetInteractionContext @ 0x18004BFE7 (__imp_load_ResetInteractionContext.c)
 *     __imp_load_DestroyInteractionContext @ 0x18004C072 (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x18004C084 (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x18004C096 (__imp_load_RegisterOutputCallbackInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x18004C0A8 (__imp_load_CreateInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x18004C0BA (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x18004C0CC (__imp_load_SetPropertyInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180048350 (__delayLoadHelper2.c)
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
