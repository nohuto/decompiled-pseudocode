/*
 * XREFs of ??1?$CTaskWrapper@V_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1801AA214
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_27f92beab74f4884d4c93c012b588629_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801AA9D0 (--_E-$CTaskWrapper@V_lambda_27f92beab74f4884d4c93c012b588629_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_eb2c18d22b535205c554a19bae5aba9b_>::~CTaskWrapper<_lambda_eb2c18d22b535205c554a19bae5aba9b_>(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
