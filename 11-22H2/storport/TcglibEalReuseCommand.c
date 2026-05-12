/*
 * XREFs of TcglibEalReuseCommand @ 0x1C0055A48
 * Callers:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x1C007CB5C (TcglibpReinitRequestResources.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall TcglibEalReuseCommand(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  unsigned int v5; // esi
  void *v6; // rcx
  unsigned __int8 v7; // dl

  v2 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v3 = *(unsigned int *)(a2 + 120);
      v4 = *(void **)(a2 + 64);
      v5 = *(_DWORD *)(a2 + 60);
      v6 = *(void **)(v3 + a2 + 16);
      v7 = *(_BYTE *)(v3 + a2 + 9);
    }
    else
    {
      v4 = *(void **)(a2 + 24);
      v5 = *(_DWORD *)(a2 + 16);
      v6 = *(void **)(a2 + 32);
      v7 = *(_BYTE *)(a2 + 11);
    }
    if ( v6 )
      memset_0(v6, 0, v7);
    if ( v4 )
      memset_0(v4, 0, v5);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
