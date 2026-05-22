/*
 * XREFs of ?GenerateCursorOwnerMessage@CursorProcessor@@AEAAXKUCursorId@@_N@Z @ 0x1801671BC
 * Callers:
 *     ?UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z @ 0x180167818 (-UpdateCursorOwnerAndNotifyTargets@CursorProcessor@@AEAAXKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorProcessor::GenerateCursorOwnerMessage(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        char a4)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8

  result = a2;
  if ( a2 )
  {
    v5 = a3;
    if ( a4 )
      v6 = HIDWORD(a3);
    else
      LODWORD(v6) = 0;
    return NtMITPostThreadEventMessage(a2, 0LL, 32LL, v5, v6);
  }
  return result;
}
