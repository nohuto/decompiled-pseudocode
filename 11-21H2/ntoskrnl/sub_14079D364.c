/*
 * XREFs of sub_14079D364 @ 0x14079D364
 * Callers:
 *     sub_1402EBB00 @ 0x1402EBB00 (sub_1402EBB00.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402EC5B0 @ 0x1402EC5B0 (sub_1402EC5B0.c)
 *     sub_14079D40C @ 0x14079D40C (sub_14079D40C.c)
 */

__int64 __fastcall sub_14079D364(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, _DWORD *a5)
{
  char v7; // di

  v7 = (_DWORD)a2 != 1 ? 0 : 2;
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 1850) == 2 && !(_DWORD)a2;
  if ( a5 )
  {
    if ( !*(_BYTE *)(a1 + 1850) && (_DWORD)a2 == 1 )
    {
      *a5 = 1;
      goto LABEL_9;
    }
    *a5 = 0;
  }
  if ( (_DWORD)a2 != 2 )
LABEL_9:
    sub_1402EC5B0(a1, (_DWORD)a2 != 1 ? 0 : 2);
  LOBYTE(a2) = v7;
  *a3 = sub_14079D40C(a1, a2);
  return *((unsigned int *)qword_140A39638 + *(unsigned __int8 *)(a1 + 1463));
}
