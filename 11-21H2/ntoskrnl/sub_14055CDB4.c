/*
 * XREFs of sub_14055CDB4 @ 0x14055CDB4
 * Callers:
 *     sub_140554BC4 @ 0x140554BC4 (sub_140554BC4.c)
 * Callees:
 *     sub_14055D5EC @ 0x14055D5EC (sub_14055D5EC.c)
 */

void __fastcall sub_14055CDB4(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  _DWORD *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11

  if ( qword_140C54E80 && a2 )
  {
    v4 = a1 + a2 - 1;
    if ( *(_DWORD *)qword_140C54E80 == *(_DWORD *)(qword_140C54E80 + 4) )
      sub_14055D5EC();
    v5 = (_DWORD *)qword_140C54E80;
    v6 = 0LL;
    v7 = 0LL;
    if ( *(_DWORD *)qword_140C54E80 )
    {
      v8 = *(_QWORD *)(qword_140C54E80 + 16);
      while ( 1 )
      {
        v9 = v8;
        v10 = *(_QWORD *)(qword_140C54E80 + 16LL * (unsigned int)v7 + 16);
        v11 = *(_QWORD *)(qword_140C54E80 + 16LL * (unsigned int)v7 + 8);
        v12 = v10 < v8;
        v8 = v10;
        if ( v12 )
          v6 = (unsigned int)v7;
        v13 = v10 + v11;
        if ( v10 >= v9 )
          v8 = v9;
        v14 = v13 - 1;
        if ( (v13 - 1 >= *(_QWORD *)(*(_QWORD *)(qword_140D00A80 + 8) + 48LL) || a1 <= v13) && (!v11 || v4 >= v11 - 1) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *(_DWORD *)qword_140C54E80 )
          goto LABEL_24;
      }
      if ( a1 < v11 )
      {
        *(_QWORD *)(qword_140C54E80 + 16LL * (unsigned int)v7 + 8) = a1;
        if ( v4 > v14 )
          *(_QWORD *)&v5[4 * (unsigned int)v7 + 4] = a2;
        else
          *(_QWORD *)&v5[4 * (unsigned int)v7 + 4] = v13 - a1;
      }
      else if ( v4 > v14 )
      {
        *(_QWORD *)(qword_140C54E80 + 16 * (v7 + 1)) = v4 - v11 + 1;
      }
    }
    else
    {
      v8 = 0LL;
LABEL_24:
      if ( (unsigned int)v7 >= *(_DWORD *)(qword_140C54E80 + 4) )
      {
        if ( v8 < a2 )
        {
          v16 = 2 * v6;
          *(_QWORD *)(qword_140C54E80 + 8 * v16 + 8) = a1;
          *(_QWORD *)&v5[2 * v16 + 4] = a2;
        }
      }
      else
      {
        v15 = 2LL * (unsigned int)v7;
        *(_QWORD *)(qword_140C54E80 + 8 * v15 + 8) = a1;
        *(_QWORD *)&v5[2 * v15 + 4] = a2;
        ++*v5;
      }
    }
  }
}
