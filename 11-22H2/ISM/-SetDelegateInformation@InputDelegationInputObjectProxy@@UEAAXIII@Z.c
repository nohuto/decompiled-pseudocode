/*
 * XREFs of ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x1801510D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?DelegationOn@@YA_NW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180150C90 (-DelegationOn@@YA_NW4DelegateInputMode@Input@Internal@UI@Windows@@@Z.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180150D50 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 */

void __fastcall InputDelegationInputObjectProxy::SetDelegateInformation(
        InputDelegationInputObjectProxy *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  _DWORD *v8; // rdi
  bool v9; // r12

  v8 = (_DWORD *)((char *)this + 56);
  v9 = DelegationOn(a4);
  if ( v9 || DelegationOn(*v8) )
  {
    if ( IsEdition(8778LL) )
    {
      *((_BYTE *)this + 32) = 0;
      BamoInputDelegationInputObjectProxy::OnInputDelegated(
        (InputDelegationInputObjectProxy *)((char *)this - 48),
        a3,
        a2,
        v9);
    }
  }
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 12) = a3;
  *v8 = a4;
}
