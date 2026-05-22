/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1?DestroyInteractionContext@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1801D17B0
 * Callers:
 *     ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801D14B0 (--0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DestroyInteractionContext(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
