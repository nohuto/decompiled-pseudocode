/*
 * XREFs of SmProcessListRequestExtended @ 0x1409D71F8
 * Callers:
 *     SmProcessListRequest @ 0x1409D6FAC (SmProcessListRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x1403452A0 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x1409D8DAC (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rax

  v6 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v7 = 1;
    do
    {
      v8 = a2 + 4LL * v6;
      v9 = SmKmStoreReference(a1, *(_DWORD *)(v8 + 16), a3, a4);
      if ( v9 )
      {
        v10 = a2 + ((unsigned __int64)v6 << 7);
        if ( *(_BYTE *)(v9 + 6020) == 1 )
        {
          Path = SmKmFileInfoGetPath(v9 + 6216, v10 + 144, 128LL);
          if ( Path < 0 )
          {
            v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v9 + 6016) & 0x3FF);
            ExReleaseRundownProtection_0(v13 + 1);
            return (unsigned int)Path;
          }
        }
        else
        {
          *(_WORD *)(v10 + 144) = 0;
        }
        v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v9 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v12 + 1);
      }
      else
      {
        memmove((void *)(v8 + 16), (const void *)(a2 + 4 * (v7-- + 4LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v6--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < *(unsigned __int8 *)(a2 + 1) );
  }
  return 0;
}
