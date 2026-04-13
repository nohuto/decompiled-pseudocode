/*
 * XREFs of _Mtxlock @ 0x18000C510
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180004C2C (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
