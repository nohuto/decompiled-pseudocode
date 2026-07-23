/*
 * XREFs of sub_1408434E0 @ 0x1408434E0
 * Callers:
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 *     sub_140A12D00 @ 0x140A12D00 (sub_140A12D00.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140843624 @ 0x140843624 (sub_140843624.c)
 *     sub_140A12B34 @ 0x140A12B34 (sub_140A12B34.c)
 */

__int64 __fastcall sub_1408434E0(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        BOOL a8)
{
  int v10; // esi
  unsigned int i; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 result; // rax
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF

  a8 = 1;
  v21 = 0;
  v22 = 0LL;
  v20 = 0;
  v10 = 0;
  for ( i = sub_140791910(a4, a5); ; i = sub_140792D40(a4, a5, v14) )
  {
    v14 = i;
    if ( !i )
      break;
    if ( sub_140843624((unsigned int)&v22, (unsigned int)&v20, a3, a4, i) )
    {
      result = sub_14042A5E0(&a8, a3);
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      if ( v20 == 2 )
      {
        v18 = 1;
      }
      else
      {
        if ( v20 != 3 )
          continue;
        v18 = 0;
      }
      a8 = v18;
    }
    ++v10;
    if ( (unsigned int)sub_140792CCC(a4, v14, 4099) )
      a8 = !a8;
    v17 = sub_140792CCC(a4, v14, 24636);
    if ( v17 && (v19 = sub_140842A24(a4, v17), sub_140A12B34(&v21, a3, v19), v21) )
    {
      v15 = !a8;
      a8 = v15;
    }
    else
    {
      v15 = a8;
    }
    if ( v15 == a7 )
      goto LABEL_8;
  }
  v15 = a8;
LABEL_8:
  *a1 = v15;
  result = 1LL;
  if ( a2 )
    *a2 = v10;
  return result;
}
