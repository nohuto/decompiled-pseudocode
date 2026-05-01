/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QAEPAPAUIPackage@StateRepository@Internal@Windows@@XZ @ 0x10005827
 * Callers:
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int *__thiscall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>>::operator Windows::Internal::StateRepository::IPackage * *(
        int **this)
{
  int *v1; // edi
  int v2; // eax

  v1 = *this;
  v2 = **this;
  if ( v2 )
  {
    *v1 = 0;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 8))(*(_DWORD *)(*(_DWORD *)v2 + 8), v2);
  }
  return v1;
}
