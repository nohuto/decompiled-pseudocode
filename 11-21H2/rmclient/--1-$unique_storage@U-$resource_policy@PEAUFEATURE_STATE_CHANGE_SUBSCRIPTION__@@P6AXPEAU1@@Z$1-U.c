/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?UnsubscribeProcessWideUsageFlush@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18000CD78
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18000D004 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@Z @ 0x18000CA30 (--$invoke@P6AXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUFEATUR.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v3)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = wil::details::UnsubscribeProcessWideUsageFlush;
    return wistd::invoke<void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),FEATURE_STATE_CHANGE_SUBSCRIPTION__ * &>(
             (__int64 (__fastcall **)(_QWORD))&v3,
             &v2);
  }
  return result;
}
