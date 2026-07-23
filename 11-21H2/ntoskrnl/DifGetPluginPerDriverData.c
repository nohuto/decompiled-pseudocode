/*
 * XREFs of DifGetPluginPerDriverData @ 0x140604400
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

__int64 __fastcall DifGetPluginPerDriverData(int a1, __int64 a2)
{
  _DWORD *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v3 = (_DWORD *)qword_140D049C0[a1];
  if ( !v3 )
    return 0LL;
  if ( !*v3 )
    return 0LL;
  v4 = sub_140A8ABF8(a2);
  if ( !v4 )
    return 0LL;
  v5 = (_QWORD *)(v4 + 96);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    return 0LL;
  while ( *((_DWORD *)v6 - 4) != a1 )
    ;
  return *(v6 - 1);
}
