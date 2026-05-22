/*
 * XREFs of ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x180024C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDelegationInputObjectProxy::SetDelegateInformation(
        InputDelegationInputObjectProxy *this,
        int a2,
        int a3,
        int a4)
{
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 10) = a4;
}
