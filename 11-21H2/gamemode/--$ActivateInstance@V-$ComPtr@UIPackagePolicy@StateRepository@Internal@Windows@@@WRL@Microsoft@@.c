/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x100059AE
 * Callers:
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackagePolicy>>(
        _DWORD **this,
        int *a2)
{
  _DWORD **v2; // eax
  int v3; // edi
  int v4; // edx
  int v5; // ecx
  int v7; // [esp+10h] [ebp-14h]
  _DWORD **v8; // [esp+14h] [ebp-10h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  v2 = this;
  v8 = this;
  v3 = 0;
  v9 = 0;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 8))(*(_DWORD *)(*(_DWORD *)v4 + 8), v4);
    v2 = v8;
  }
  v9 = -1;
  *a2 = 0;
  v5 = RoActivateInstance(v2, &v8);
  if ( v5 >= 0 )
  {
    while ( *(&_GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data1 + v3) == *(&_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
                                                                         + v3) )
    {
      if ( ++v3 == 4 )
      {
        *a2 = (int)v8;
        return v5;
      }
    }
    v7 = ((int (__thiscall *)(_DWORD, _DWORD **, GUID *, int *))**v8)(
           **v8,
           v8,
           &_GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04,
           a2);
    ((void (__thiscall *)(_DWORD, _DWORD **))(*v8)[2])((*v8)[2], v8);
    return v7;
  }
  return v5;
}
