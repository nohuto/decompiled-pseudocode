/*
 * XREFs of _CAudioDGProcess::GetADGProcessSD_::_1_::catch$7 @ 0x18006D095
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessSD_::_1_::catch_7(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  int v4; // [rsp+20h] [rbp-48h]

  v2 = (const char *)**(unsigned int **)(a2 + 168);
  *(_DWORD *)(a2 + 176) = (_DWORD)v2;
  if ( (int)v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 344),
      (void *)0x46,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      v2,
      v4);
  return 0LL;
}
