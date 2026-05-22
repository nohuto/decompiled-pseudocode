/*
 * XREFs of ?InterceptGamepadInput@InputDelegationInputObjectProxy@@UEAAXG_N@Z @ 0x180071AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDelegationInputObjectProxy::InterceptGamepadInput(
        InputDelegationInputObjectProxy *this,
        unsigned __int16 a2,
        bool a3)
{
  BamoInputDelegationInputObjectProxy::OnGamepadInput((InputDelegationInputObjectProxy *)((char *)this - 64), a2, a3);
}
