/*
 * XREFs of ESM_NotifyingTransferRingsFSEReceived @ 0x1C000CD20
 * Callers:
 *     <none>
 * Callees:
 *     TR_FSEReceived @ 0x1C000D0C4 (TR_FSEReceived.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0037708 (XilEndpoint_FetchStreamContextArray.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsFSEReceived(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) && (XilEndpoint_FetchStreamContextArray(*(_QWORD *)(v1 + 136)), *(_BYTE *)(v1 + 37)) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_FSEReceived(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_FSEReceived(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
