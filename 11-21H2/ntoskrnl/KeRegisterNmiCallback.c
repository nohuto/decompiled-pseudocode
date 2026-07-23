/*
 * XREFs of KeRegisterNmiCallback @ 0x14056A870
 * Callers:
 *     sub_14054B14C @ 0x14054B14C (sub_14054B14C.c)
 *     sub_140614220 @ 0x140614220 (sub_140614220.c)
 * Callees:
 *     sub_14056ACB8 @ 0x14056ACB8 (sub_14056ACB8.c)
 *     sub_140961170 @ 0x140961170 (sub_140961170.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  void *v3; // rbx

  v3 = (void *)sub_14056ACB8(CallbackRoutine, Context);
  if ( v3 )
    sub_140961170(CallbackRoutine);
  return v3;
}
