/*
 * XREFs of sub_140B1B0B0 @ 0x140B1B0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

_BOOL8 __fastcall sub_140B1B0B0(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rbp
  char v6; // al
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // ebp
  bool v12; // zf

  v4 = a3;
  v6 = sub_140317A10((unsigned __int64)a2);
  if ( (v6 & 1) == 0 )
  {
    v8 = (unsigned __int64)a2;
    if ( (_DWORD)v4 )
      v8 = 0LL;
    v9 = sub_1402CBD10(v8, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v4), (_DWORD)v4 != 0 ? -1476395004 : 536870913);
    v10 = v9;
    if ( (dword_140D06880 & 0x4000000) == 0 && ((unsigned __int8)(1 << v4) & (unsigned __int8)byte_140C506CE) != 0 )
      v10 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
    v11 = 0;
    if ( !sub_140317A80((unsigned __int64)a2) )
      goto LABEL_18;
    if ( (unsigned int)sub_140229550() )
    {
      v11 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v12 = (v10 & 1) == 0;
        goto LABEL_16;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v12 = (v10 & 1) == 0;
LABEL_16:
      if ( !v12 )
        v10 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *a2 = v10;
    if ( v11 )
      sub_1402294F0((__int64)a2, v10);
    return 0LL;
  }
  return (_DWORD)v4 && v6 < 0;
}
