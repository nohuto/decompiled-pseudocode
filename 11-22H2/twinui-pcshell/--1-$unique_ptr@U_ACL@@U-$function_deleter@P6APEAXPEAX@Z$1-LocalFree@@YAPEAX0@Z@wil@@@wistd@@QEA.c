/*
 * XREFs of ??1?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1801E8B08
 * Callers:
 *     _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$6 @ 0x1801EA21B (_SearchSettings--SearchSettingsHelper--AddAceToKeyRecursively_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(a1, 0LL);
}
