/*
 * XREFs of _Mtxlock @ 0x18000CC04
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
