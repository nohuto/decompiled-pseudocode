/*
 * XREFs of sub_140790B38 @ 0x140790B38
 * Callers:
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140790C44 @ 0x140790C44 (sub_140790C44.c)
 *     sub_140797B54 @ 0x140797B54 (sub_140797B54.c)
 *     sub_14080855C @ 0x14080855C (sub_14080855C.c)
 *     sub_1409E0584 @ 0x1409E0584 (sub_1409E0584.c)
 *     sub_1409EB814 @ 0x1409EB814 (sub_1409EB814.c)
 */

char __fastcall sub_140790B38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  __int64 v9; // rdi
  int v12; // edi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v8 = *(_DWORD *)(a4 + 72);
  v9 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (*(_BYTE *)(a3 + 17) || *(_BYTE *)(a3 + 18))
    || (v8 == 2 || *(_BYTE *)(a3 + 18)) && !(unsigned __int8)sub_14080855C(a1, a4, *(_QWORD *)(a5 + 80), a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a7 == 2 || a6 || !v8 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v9 + 18) )
  {
    if ( !(unsigned int)sub_1409EB814(*(_QWORD *)(a1 + 80)) )
      return 1;
  }
  else if ( a7 != 2 || (unsigned __int8)sub_140797B54(a2, *(_QWORD *)(a1 + 32) + 40LL) )
  {
    LOBYTE(a3) = *(_BYTE *)(v9 + 16);
    v12 = sub_140790C44(a1, v9, a3);
    if ( !v12 )
      return 1;
    if ( v12 < 0 )
    {
      if ( EtwEventEnabled(qword_140C15FA8, &stru_14000E3C8) )
        sub_1409E0584(v15, v14, v16, a1, a2, v12);
    }
  }
  return 0;
}
