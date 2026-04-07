/*
 * XREFs of sub_18008625A @ 0x18008625A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void sub_18008625A(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, ...)
{
  va_list va; // [rsp+148h] [rbp+40h] BYREF

  va_start(va, a7);
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)va);
  JUMPOUT(0x18002E3F7LL);
}
