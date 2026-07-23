/*
 * XREFs of sub_140256264 @ 0x140256264
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 * Callees:
 *     sub_1402562E0 @ 0x1402562E0 (sub_1402562E0.c)
 *     sub_1406DEFDC @ 0x1406DEFDC (sub_1406DEFDC.c)
 *     sub_1406DEFFC @ 0x1406DEFFC (sub_1406DEFFC.c)
 */

__int64 __fastcall sub_140256264(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = a3;
  result = sub_1402562E0(v5, a2);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 4112) & 1) != 0 )
    {
      sub_1406DEFFC();
      v7 = *(_QWORD **)(v3 + 4128);
      v8 = (_QWORD *)(a1 + 4120);
      if ( *v7 != v3 + 4120 )
        __fastfail(3u);
      *v8 = v3 + 4120;
      *(_QWORD *)(a1 + 4128) = v7;
      *v7 = v8;
      *(_QWORD *)(v3 + 4128) = v8;
      sub_1406DEFDC();
    }
    else
    {
      *(_DWORD *)(a1 + 4112) &= ~1u;
    }
    return 0LL;
  }
  return result;
}
