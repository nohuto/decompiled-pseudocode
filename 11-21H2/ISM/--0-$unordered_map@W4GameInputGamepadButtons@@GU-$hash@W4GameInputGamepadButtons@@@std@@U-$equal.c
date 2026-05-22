/*
 * XREFs of ??0?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@QEAA@XZ @ 0x180042550
 * Callers:
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001680 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int *std::unordered_map<enum GameInputGamepadButtons,unsigned short>::unordered_map<enum GameInputGamepadButtons,unsigned short>()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rcx

  ControllerProcessor::s_controllerCurrentKeyMap = 0;
  qword_180243048 = 0LL;
  qword_180243050 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_180243048 = (__int64)v0;
  qword_180243058 = 0LL;
  xmmword_180243060 = 0LL;
  qword_180243070 = 7LL;
  qword_180243078 = 8LL;
  ControllerProcessor::s_controllerCurrentKeyMap = LODWORD(FLOAT_1_0);
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  qword_180243058 = (__int64)v1;
  v2 = v1 + 16;
  *(_QWORD *)&xmmword_180243060 = v1 + 16;
  *((_QWORD *)&xmmword_180243060 + 1) = v1 + 16;
  while ( v1 != v2 )
    *v1++ = v0;
  return &ControllerProcessor::s_controllerCurrentKeyMap;
}
