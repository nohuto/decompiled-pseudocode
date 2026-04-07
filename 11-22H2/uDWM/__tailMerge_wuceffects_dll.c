/*
 * XREFs of __tailMerge_wuceffects_dll @ 0x18005DFCC
 * Callers:
 *     __imp_load_CreateCrossfadeEffectFactory @ 0x18005E04B (__imp_load_CreateCrossfadeEffectFactory.c)
 *     __imp_load_CreateMicaBrush @ 0x18005E05D (__imp_load_CreateMicaBrush.c)
 *     __imp_load_CreateAcrylicBrush @ 0x18005E06F (__imp_load_CreateAcrylicBrush.c)
 *     __imp_load_CrossFadeToNewBrush @ 0x18005E081 (__imp_load_CrossFadeToNewBrush.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800577A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_wuceffects_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_wuceffects_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
