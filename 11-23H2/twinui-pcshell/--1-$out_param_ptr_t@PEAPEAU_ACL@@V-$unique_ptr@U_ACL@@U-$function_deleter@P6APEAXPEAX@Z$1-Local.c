/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801E89E0
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1801EB018 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_ACL@@@Z @ 0x1801F142C (-reset@-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 */

__int64 __fastcall wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
