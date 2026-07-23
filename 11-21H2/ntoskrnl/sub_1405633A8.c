/*
 * XREFs of sub_1405633A8 @ 0x1405633A8
 * Callers:
 *     sub_140A67BA0 @ 0x140A67BA0 (sub_140A67BA0.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405635D0 @ 0x1405635D0 (sub_1405635D0.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 */

__int64 __fastcall sub_1405633A8(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 i; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax

  v2 = qword_140C448A8;
  if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) && (*(_DWORD *)(qword_140C448A8 + 64) & 8) == 0 )
  {
    if ( *(int *)(qword_140C448A8 + 200) < 2 )
      *(_DWORD *)(qword_140C448A8 + 200) = 2;
    v3 = sub_140A6849C();
    if ( v3 < 0 )
    {
      v4 = qword_140C448A8;
      v5 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v5 )
        v5 = 2826;
      *(_DWORD *)(qword_140C448A8 + 33272) = v5;
      v6 = *(_DWORD *)(v4 + 33276);
      if ( !v6 )
        v6 = 1;
      *(_DWORD *)(v4 + 33276) = v6;
      goto LABEL_34;
    }
    v7 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 204) = 1;
    *(_DWORD *)(v7 + 200) = 3;
    v2 = qword_140C448A8;
    if ( *(_DWORD *)(v7 + 204) < *(_DWORD *)(qword_140C448A8 + 176) )
    {
      do
      {
        _mm_pause();
        a2 = *(unsigned int *)(qword_140C448A8 + 204);
        v2 = qword_140C448A8;
      }
      while ( (int)a2 < *(_DWORD *)(qword_140C448A8 + 176) );
    }
  }
  if ( *(_QWORD *)(v2 + 33248) && (v3 = sub_14042A5E0(*(_QWORD *)(v2 + 33168), a2), v3 < 0) )
  {
    v4 = qword_140C448A8;
    v8 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v8 )
      v8 = 2846;
    *(_DWORD *)(qword_140C448A8 + 33272) = v8;
    v9 = *(_DWORD *)(v4 + 33276);
    if ( !v9 )
      v9 = 8;
    *(_DWORD *)(v4 + 33276) = v9;
  }
  else
  {
    v10 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 204) = 1;
    *(_DWORD *)(v10 + 200) = 4;
    while ( *(_DWORD *)(v10 + 204) < *(_DWORD *)(qword_140C448A8 + 176) )
    {
      _mm_pause();
      v10 = qword_140C448A8;
    }
    v11 = sub_1405635D0();
    v4 = qword_140C448A8;
    v3 = v11;
    if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(qword_140C448A8 + 176); i = (unsigned int)(i + 1) )
      {
        v13 = *(_QWORD *)(v4 + 136) + 24 * i;
        if ( v13 )
        {
          v14 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
          {
            if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
              MmUnmapReservedMapping(*(PVOID *)(v13 + 8), 0x51706E50u, (PMDL)v14);
          }
        }
        v15 = *(_QWORD *)(qword_140C448A8 + 144) + 24 * i;
        if ( v15 )
        {
          v16 = *(_QWORD *)v15;
          if ( *(_QWORD *)v15 )
          {
            if ( (*(_BYTE *)(v16 + 10) & 1) != 0 )
              MmUnmapReservedMapping(*(PVOID *)(v15 + 8), 0x51706E50u, (PMDL)v16);
          }
        }
        v4 = qword_140C448A8;
      }
    }
  }
LABEL_34:
  result = (unsigned int)v3;
  *(_DWORD *)(v4 + 200) = 5;
  return result;
}
