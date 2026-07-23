/*
 * XREFs of sub_14090AC50 @ 0x14090AC50
 * Callers:
 *     sub_14090A644 @ 0x14090A644 (sub_14090A644.c)
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_14090AEC4 @ 0x14090AEC4 (sub_14090AEC4.c)
 */

__int64 __fastcall sub_14090AC50(__int16 *a1, int a2, _DWORD *a3)
{
  int v5; // edx
  __int16 v6; // r10
  __int16 v7; // r11
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v11; // r8d
  _WORD *i; // rax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax

  if ( a2 != 24 )
    return (unsigned int)-1073741820;
  v6 = *a1;
  v7 = a1[1];
  v8 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 1);
  if ( v9 == 2 )
  {
    if ( v8 >= 2 )
      return (unsigned int)-1073741808;
  }
  else if ( ((v9 - 1) & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741808;
  }
  v11 = 0;
  if ( !dword_140C4A0D8 )
    return (unsigned int)-1073741275;
  for ( i = (char *)qword_140C4A0D0 + 12; *(i - 1) != v6 || *i != v7; i += 8 )
  {
    if ( ++v11 >= dword_140C4A0D8 )
      return (unsigned int)-1073741275;
  }
  if ( v9 == 2 )
  {
    if ( v8 == 1 )
      v8 = *((unsigned __int8 *)qword_140C4A0D0 + 16 * v11 + 15);
    *((_QWORD *)a1 + 2) = v8;
  }
  v5 = sub_14090AEC4(*((unsigned __int16 *)qword_140C4A0D0 + 8 * v11 + 4), a1);
  if ( v5 >= 0 )
  {
    v13 = qword_140C4A0C0;
    v14 = *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 2) = *(_DWORD *)(qword_140C4A0C0 + 4);
    switch ( v14 )
    {
      case 2:
        goto LABEL_27;
      case 1:
        *((_QWORD *)a1 + 2) = *(_DWORD *)(v13 + 8) != 0;
        goto LABEL_27;
      case 3:
        v15 = *(_QWORD *)(v13 + 24);
        break;
      case 4:
        v15 = *(_QWORD *)(v13 + 16);
        break;
      default:
        goto LABEL_27;
    }
    *((_QWORD *)a1 + 2) = v15;
LABEL_27:
    if ( a3 )
      *a3 = 24;
  }
  return (unsigned int)v5;
}
