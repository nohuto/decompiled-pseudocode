/*
 * XREFs of sub_1408433DC @ 0x1408433DC
 * Callers:
 *     sub_140843098 @ 0x140843098 (sub_140843098.c)
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 * Callees:
 *     sub_14078F124 @ 0x14078F124 (sub_14078F124.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_1408437A4 @ 0x1408437A4 (sub_1408437A4.c)
 */

__int64 __fastcall sub_1408433DC(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  unsigned int v9; // ebx
  int v11; // r15d
  BOOL v12; // r12d
  _DWORD *v13; // rdi
  unsigned int v14; // eax
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v16 = 0;
  v11 = 1;
  v12 = sub_140792CCC(a2, a3, 4109) != 0;
  if ( (unsigned int)sub_1408436C0(a2, a3) )
  {
    if ( (unsigned int)sub_1408434E0((unsigned int)&v16, 0, a1, a2, a3, a4, 0)
      && (v9 = v16) != 0
      && (unsigned int)sub_1408437A4(a2, a3, a6) )
    {
      v13 = a5;
      if ( a5 )
      {
        v14 = sub_140792CCC(a2, a3, 12289);
        if ( v14 )
          *v13 = (unsigned __int16)sub_14078F124(a2, v14, 2u);
        else
          *v13 = 2;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  if ( !*(_DWORD *)(a4 + 80) || v12 )
    v11 = 0;
  *(_DWORD *)(a4 + 80) = v11;
  return v9;
}
