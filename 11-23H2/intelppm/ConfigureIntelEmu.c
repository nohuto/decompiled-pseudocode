/*
 * XREFs of ConfigureIntelEmu @ 0x1C0026140
 * Callers:
 *     PctDiscoverPlatformCtrs @ 0x1C0025F30 (PctDiscoverPlatformCtrs.c)
 * Callees:
 *     PctPlatformCounterState @ 0x1C0001EE0 (PctPlatformCounterState.c)
 *     PctGetIntelEsuType @ 0x1C0002B40 (PctGetIntelEsuType.c)
 */

unsigned __int64 __fastcall ConfigureIntelEmu(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // r9

  v4 = PctPlatformCounterState(a1, a2);
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
