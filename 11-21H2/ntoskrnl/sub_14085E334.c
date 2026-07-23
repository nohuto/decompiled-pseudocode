/*
 * XREFs of sub_14085E334 @ 0x14085E334
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14085E448 @ 0x14085E448 (sub_14085E448.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14085E334(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx

  v4 = 0;
  if ( a2 != 8 )
    return (unsigned int)-1073741306;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
  }
  v6 = *(_QWORD *)a1;
  if ( (_BYTE)v6 != 4 )
    return (unsigned int)-1073741735;
  if ( (v6 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v7 = BYTE3(v6);
  if ( BYTE3(v6) >= 3u )
    return (unsigned int)-1073741811;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return v4;
      v12 = HIDWORD(v6);
      if ( (unsigned int)(v12 - 4) <= 0x1C && (((_DWORD)v12 - 1) & (unsigned int)v12) == 0 )
      {
        dword_140C531D4 = v12;
        return v4;
      }
    }
    else
    {
      v13 = HIDWORD(v6);
      if ( (unsigned int)v13 <= 1 )
      {
        dword_140D01434 = v13;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v8 = HIDWORD(v6);
  if ( (unsigned int)v8 >= 0x100 )
    return (unsigned int)-1073741811;
  if ( (((unsigned int)v8 >> 2) & 3) == 3 )
    return (unsigned int)-1073741811;
  v9 = v8 & 0x30;
  if ( v9 >= 0x30 )
    return (unsigned int)-1073741811;
  if ( ((((unsigned int)v8 >> 2) & 3) == 2 || v9 == 32) && !SeSinglePrivilegeCheck(stru_140D3CA80, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    dword_140D321C0 = v8 & 0xC0 | dword_140D321C0 & 0xFFFFFF00 | ((unsigned int)v8 >> 2) & 0xF | (16 * (v8 & 3));
    if ( (dword_140D321C0 & 3) != 0 )
      sub_14085E448();
  }
  return v4;
}
