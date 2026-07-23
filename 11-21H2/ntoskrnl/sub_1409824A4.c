/*
 * XREFs of sub_1409824A4 @ 0x1409824A4
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_14023A8F8 @ 0x14023A8F8 (sub_14023A8F8.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall sub_1409824A4(__int64 *a1, __int64 a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 *v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // r9

  v5 = 0;
  if ( SeSinglePrivilegeCheck(stru_140D3CA80, a3) )
  {
    if ( !*(_DWORD *)a2 && *(_DWORD *)(a2 + 4) < (unsigned int)(unsigned __int16)word_140D05000 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( (v6 & 0xFFF) == 0 )
      {
        v7 = v6 >> 12;
        v8 = sub_14023A8F8();
        v10 = v8;
        if ( v8 >= 3 )
        {
LABEL_11:
          v12 = v10 == 3;
        }
        else
        {
          v11 = &qword_14001C780[v8];
          while ( *v11 != v7 )
          {
            ++v10;
            ++v11;
            if ( v10 >= 3 )
              goto LABEL_11;
          }
          v12 = v10 == 0;
        }
        if ( v12 )
          return (unsigned int)-1073741637;
        v13 = *(_QWORD *)(a2 + 16);
        if ( v13 && v13 < 0xFFFFFFFFFFFFFFFFuLL / v7 )
        {
          *(_QWORD *)(a2 + 24) = sub_14045CDD6(*a1, v9, v10, v7 * v13, 1) / v7;
          return v5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741727;
  }
}
