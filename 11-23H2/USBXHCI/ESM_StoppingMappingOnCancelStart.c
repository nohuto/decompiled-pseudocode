/*
 * XREFs of ESM_StoppingMappingOnCancelStart @ 0x1C000F9D0
 * Callers:
 *     <none>
 * Callees:
 *     TR_StopMapping @ 0x1C000FC90 (TR_StopMapping.c)
 */

__int64 __fastcall ESM_StoppingMappingOnCancelStart(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_StopMapping(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_StopMapping(*(_QWORD *)(v1 + 88));
  }
  return 1000LL;
}
