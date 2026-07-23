/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x14061088C
 * Callers:
 *     WheaConfigureErrorSource @ 0x140A90410 (WheaConfigureErrorSource.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x140380E44 (WheapCallErrorSourceInitialize.c)
 *     WheapInitializeErrorSource @ 0x14081F090 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_140CF7A68; v1 < dword_140CF7A5C; ++v1 )
  {
    if ( *(_DWORD *)(i + 104) == a1
      && *(_BYTE *)(i + 88)
      && *(_DWORD *)(i + 108) == 1
      && (int)WheapInitializeErrorSource(i) >= 0 )
    {
      *(_DWORD *)(i + 108) = 2;
      if ( (int)WheapCallErrorSourceInitialize(i, 1u) >= 0 )
        *(_BYTE *)(i + 88) = 0;
      else
        *(_DWORD *)(i + 108) = 1;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
