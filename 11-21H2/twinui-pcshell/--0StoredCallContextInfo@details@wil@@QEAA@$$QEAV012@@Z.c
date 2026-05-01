/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1801494C0
 * Callers:
 *     ??0?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18019B6B4 (--0-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 * Callees:
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180048994 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(_OWORD *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  wil::details::StoredCallContextInfo::operator=((__int64)a1, a2);
  return a1;
}
