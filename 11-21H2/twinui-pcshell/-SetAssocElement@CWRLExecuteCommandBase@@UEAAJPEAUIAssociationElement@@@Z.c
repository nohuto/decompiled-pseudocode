/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x180449800
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIQuerySource@@@@YAXPEAPEAUIQuerySource@@@Z @ 0x180448914 (--$SafeRelease@UIQuerySource@@@@YAXPEAPEAUIQuerySource@@@Z.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(CWRLExecuteCommandBase *this, IUnknown *a2)
{
  SafeRelease<IQuerySource>((__int64 *)this + 13);
  IUnknown_Set((IUnknown **)this + 12, a2);
  return 0LL;
}
