/*
 * XREFs of ConfigureIntelEmu @ 0x1C00248C0
 * Callers:
 *     PctDiscoverPlatformCtrs @ 0x1C0024D20 (PctDiscoverPlatformCtrs.c)
 * Callees:
 *     PctGetIntelEsuType @ 0x1C00022C0 (PctGetIntelEsuType.c)
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

unsigned __int64 __fastcall ConfigureIntelEmu(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // r9

  v4 = PctPlatformCounterState();
  result = PctGetIntelEsuType();
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      result = 0xF4240uLL / (1LL << a3);
      v6 = result;
    }
  }
  else
  {
    v6 = 1LL << a3;
  }
  *(_QWORD *)(v4 + 32) = v6;
  return result;
}
