/*
 * XREFs of ?Thunk_Message_HandoffPrevValue_59@?$IAnimationInstance_Receive@VCAnimationInstance@DirectComposition@@@@SAJPEAXPEAPEAX@Z @ 0x18008EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationInstance_Receive<DirectComposition::CAnimationInstance>::Thunk_Message_HandoffPrevValue_59(
        __int64 a1,
        _DWORD **a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a1 + 200) = **a2;
  *(_BYTE *)(a1 + 204) = 1;
  return result;
}
