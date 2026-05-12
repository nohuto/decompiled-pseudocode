/*
 * XREFs of PortpErrorInitRecords @ 0x1C0094274
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0094250 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitRecords(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  __int64 Pool2; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rax

  v2 = *(_DWORD *)(a2 + 12);
  v3 = 10;
  if ( v2 > 0xA || (v3 = *(_DWORD *)(a2 + 12), v2) )
  {
    Pool2 = ExAllocatePool2(64LL, 8 * v3, 1816489040LL);
    *(_QWORD *)(a1 + 56) = Pool2;
    if ( Pool2 )
    {
      v6 = 0;
      if ( v3 )
      {
        v7 = 0LL;
        do
        {
          v8 = ExAllocatePool2(64LL, 272LL, 1816489040LL);
          if ( !v8 )
            break;
          ++v6;
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 56)) = v8;
          v7 += 8LL;
        }
        while ( v6 < v3 );
      }
      *(_DWORD *)(a1 + 80) = v6;
    }
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 64));
  *(_DWORD *)(a1 + 84) = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 84));
}
