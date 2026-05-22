/*
 * XREFs of ?OnAttachedToInputSite@InputDelegationInputObjectProxy@@UEAAXPEAVInputSite@@@Z @ 0x18002D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDelegationInputObjectProxy::OnAttachedToInputSite(
        InputDelegationInputObjectProxy *this,
        struct InputSite *a2)
{
  *((_QWORD *)this + 2) = a2;
}
