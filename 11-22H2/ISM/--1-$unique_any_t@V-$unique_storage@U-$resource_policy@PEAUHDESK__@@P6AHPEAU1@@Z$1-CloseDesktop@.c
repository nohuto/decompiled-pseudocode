/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1?CloseDesktop@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180162808
 * Callers:
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004CA60 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004CCB0 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>(
        HDESK *a1)
{
  HDESK v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseDesktop(v1);
  return result;
}
