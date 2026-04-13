/*
 * XREFs of _StartDocked::GetStartDefaultPins_::_1_::dtor$9 @ 0x1800DCE5D
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002BABC (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall StartDocked::GetStartDefaultPins_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 184));
  }
}
