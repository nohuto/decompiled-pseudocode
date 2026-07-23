/*
 * XREFs of MiFreeListPageContentsChanged @ 0x14064DC34
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // edi
  unsigned int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r8
  int v11; // esi
  unsigned __int64 v12; // rcx

  v2 = 48 * a1;
  v3 = v2 - 0x220000000000LL;
  v4 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) + 2);
  v5 = ((unsigned int)MiGetPfnChannel(v3) << byte_140C65A8E) | dword_140C65AF8 & a1 | (v4 << byte_140C65A8D);
  v6 = *(unsigned __int8 *)(v3 + 34) >> 6;
  if ( v6 == 3 )
    v6 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)) + 2504LL)
     + 88 * (v5 + (unsigned __int64)(unsigned int)(dword_140C65AFC * v6));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  if ( dword_140C67E4C == 1 )
  {
    v8 = a1 & 0x1F;
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67EA0 + 1) + 4 * (a1 >> 5));
    if ( (unsigned __int64)(v8 + 1) > 0x20 )
    {
      if ( (a1 & 0x1F) == 0 )
        goto LABEL_11;
      v11 = a1 & 0x1F;
      _InterlockedOr(v10++, ((1 << (32 - v11)) - 1) << v8);
      v9 = 1LL - (unsigned int)(32 - v11);
      if ( v9 >= 0x20 )
      {
        v12 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v10++ = -1;
          --v12;
        }
        while ( v12 );
      }
      if ( v9 )
LABEL_11:
        _InterlockedOr(v10, (1 << v9) - 1);
    }
    else
    {
      _InterlockedOr(v10, 1 << v8);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
}
