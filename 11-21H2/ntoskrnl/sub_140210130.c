/*
 * XREFs of sub_140210130 @ 0x140210130
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140210130(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = a1 + 32560;
  v4 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 1;
    v5 = v4 ^ (v3 | 1);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8);
  }
  if ( !v5 )
    return 1;
  if ( *(_DWORD *)(v5 + 28) == a2 )
    return *(unsigned __int16 *)(v5 + 26) < a3;
  else
    return *(_DWORD *)(v5 + 28) > a2;
}
