/*
 * XREFs of ??1?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1801E8B18
 * Callers:
 *     _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor$0 @ 0x1801EABD5 (_SearchSettings--SearchSettingsHelper--CreateKeyAndSetSecurityDescriptorRecursively_--_1_--dtor$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(a1, 0LL);
}
