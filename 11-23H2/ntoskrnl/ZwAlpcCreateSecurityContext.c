/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14041BD40
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x1405ED580 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSecurityContext(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
