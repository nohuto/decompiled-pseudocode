/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C02703D4
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02AD5E0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v5; // r10
  __int64 *v6; // r8
  __int64 i; // rdx
  __int64 j; // rcx
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v12 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = 20LL;
  v6 = (__int64 *)(*this + 5);
  do
  {
    if ( v6 )
    {
      for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
      {
        for ( j = *(_QWORD *)(i + 144); j; j = *(_QWORD *)(j + 16) )
        {
          v9 = *(_DWORD *)(j + 12);
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
          {
            v10 = v1 + 1;
            if ( v9 != CurrentThreadId )
              v10 = v1;
            v1 = v10;
          }
          else if ( v9 == v3 )
          {
            ++v1;
          }
        }
      }
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v1;
}
