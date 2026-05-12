/*
 * XREFs of RaidSrbIsPowerRequired @ 0x1C0043158
 * Callers:
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidSrbIsPowerRequired(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rax
  bool v8; // zf
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v2 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v2 == 40 )
    v2 = *(_DWORD *)(a2 + 20);
  if ( v2 > 0x12 )
  {
    v10 = v2 - 19;
    if ( !v10 )
      return 1;
    v11 = v10 - 4;
    if ( !v11 )
      return 1;
    v12 = v11 - 9;
    return !v12 || v12 - 4 < 2;
  }
  if ( v2 == 18 )
    return 1;
  if ( !v2 )
    return 1;
  v3 = v2 - 2;
  if ( !v3 )
    return 1;
  v4 = v3 - 5;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) == 0;
    return !v8;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  if ( v6 == 7 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = (*(_BYTE *)(v7 + 564) & 0x10) == 0;
      return !v8;
    }
  }
  return 0;
}
