/*
 * XREFs of sub_1405CD1FC @ 0x1405CD1FC
 * Callers:
 *     sub_1403B92D0 @ 0x1403B92D0 (sub_1403B92D0.c)
 * Callees:
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_1405C7DCC @ 0x1405C7DCC (sub_1405C7DCC.c)
 *     sub_1405CE144 @ 0x1405CE144 (sub_1405CE144.c)
 *     sub_1405D6C08 @ 0x1405D6C08 (sub_1405D6C08.c)
 *     sub_1405DBD2C @ 0x1405DBD2C (sub_1405DBD2C.c)
 */

__int64 __fastcall sub_1405CD1FC(unsigned int a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  sub_1405C7DCC(a1, a2);
  result = qword_140D068A8;
  if ( a1 == *(_DWORD *)qword_140D068A8 - 1 )
  {
    if ( a2 )
    {
      sub_1405CE144(0LL);
      sub_1405DBD2C(0LL);
      sub_1405D6C08(0LL);
      return sub_1402D6004(6u);
    }
    else
    {
      LOBYTE(v4) = 1;
      sub_1405CE144(v4);
      LOBYTE(v6) = 1;
      sub_1405DBD2C(v6);
      LOBYTE(v7) = 1;
      sub_1405D6C08(v7);
      return sub_1402D5F7C(6u);
    }
  }
  return result;
}
