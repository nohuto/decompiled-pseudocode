/*
 * XREFs of sub_1403979C4 @ 0x1403979C4
 * Callers:
 *     sub_140397944 @ 0x140397944 (sub_140397944.c)
 * Callees:
 *     sub_1403AFE68 @ 0x1403AFE68 (sub_1403AFE68.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056F494 @ 0x14056F494 (sub_14056F494.c)
 */

__int64 __fastcall sub_1403979C4(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebx
  __int64 v8; // r9
  _BOOL8 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax

  v6 = sub_1403AFE68(a3);
  v7 = 0;
  LOBYTE(v8) = 0;
  v9 = v6 != 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v8);
      _m_prefetchw((const void *)(v10 + 104));
      if ( (_InterlockedAnd((volatile signed __int32 *)(v10 + 104), 0xFFFFFFFE) & 1) == 0 )
        break;
      LOBYTE(v8) = v8 + 1;
      if ( (unsigned __int8)v8 >= a2 )
        goto LABEL_4;
    }
    v12 = 295;
  }
  else
  {
LABEL_4:
    if ( *(_DWORD *)(a3 + 8) )
      return 0LL;
    v11 = *(unsigned int *)(a3 + 64);
    if ( v9 )
      v12 = sub_14056F494(*(unsigned int *)(*(_QWORD *)a1 + 88LL), (unsigned int)v11, v9, v8);
    else
      v12 = sub_14042A5E0(v11, 0LL);
  }
  if ( v12 != 296 )
    return v12;
  return v7;
}
