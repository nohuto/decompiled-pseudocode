/*
 * XREFs of sub_140656A80 @ 0x140656A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140656A80(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax

  v3 = (unsigned __int8)a2;
  LOBYTE(a2) = a3;
  return sub_14042A5E0(*(_QWORD *)a1 + v3 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a2);
}
