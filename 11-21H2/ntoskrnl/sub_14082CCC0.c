/*
 * XREFs of sub_14082CCC0 @ 0x14082CCC0
 * Callers:
 *     DbgSetDebugFilterState @ 0x1403C3F10 (DbgSetDebugFilterState.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall sub_14082CCC0(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  KPROCESSOR_MODE v6; // dl
  int *v7; // rdx

  v5 = a1;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 && !SeSinglePrivilegeCheck(stru_140D3CA18, v6) )
    return 3221225506LL;
  v7 = &dword_140C0BBC8;
  if ( (unsigned int)v5 >= 0x9C )
  {
    if ( (_DWORD)v5 != -1 )
      v7 = (int *)&unk_140D01290;
  }
  else
  {
    _mm_lfence();
    v7 = (int *)*(&off_140008610 + v5);
  }
  if ( a2 <= 0x1F )
    a2 = 1 << a2;
  *v7 = (a3 != 0 ? a2 : 0) | *v7 & ~a2;
  return 0LL;
}
