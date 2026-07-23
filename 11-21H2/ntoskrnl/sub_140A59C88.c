/*
 * XREFs of sub_140A59C88 @ 0x140A59C88
 * Callers:
 *     sub_140A69710 @ 0x140A69710 (sub_140A69710.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_14025E8C8 @ 0x14025E8C8 (sub_14025E8C8.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 */

char __fastcall sub_140A59C88(__int64 a1, int a2)
{
  int v3; // ecx
  volatile CCHAR v4; // al
  char result; // al

  word_140D05014 = sub_14025E8C8();
  _disable();
  LODWORD(dword_140D06884) = dword_140D06884 + 1;
  KeAddProcessorAffinityEx((unsigned __int16 *)dword_140D06E40, v3);
  _enable();
  if ( !a2 )
  {
    v4 = KeNumberProcessors[0];
    KeNumberProcessors[0] = v4 + 1;
  }
  ++MEMORY[0xFFFFF780000003C0];
  ++MEMORY[0xFFFFF7800000036A];
  result = word_140D05014;
  MEMORY[0xFFFFF780000003C4] = word_140D05014;
  return result;
}
