/*
 * XREFs of RtlpFlsAlloc @ 0x1800741C0
 * Callers:
 *     RtlFlsAlloc @ 0x1800741A0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180071858 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x1800742E8 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax

  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  v6 = 0;
  v7 = 8LL;
  while ( 1 )
  {
    v8 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(&xmmword_180184DD8);
    v9 = v8;
    if ( v8 == -1 )
    {
      v6 = -1073741801;
      goto LABEL_20;
    }
    v10 = v8 - 16;
    if ( v8 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v17, 0x10u);
    v18 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v17 - 4) + 1);
    if ( v18 )
      v19 = v18 + 8 * (((1 << v17) ^ 0x10u) + 2 * (((1 << v17) ^ 0x10u) + 1LL));
    else
      v19 = 8LL;
    *(_QWORD *)v19 = -1LL;
  }
  if ( v10 >= 0xFF0 )
  {
    v6 = -1073741801;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree((__int64)&xmmword_180184DD8, v8);
LABEL_20:
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    return v6;
  }
  _BitScanReverse((unsigned int *)&v11, v8);
  v12 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v11 - 4) + 1);
  if ( v12 )
  {
    v13 = 3 * (v8 ^ (unsigned __int64)(unsigned int)(1 << v11));
    v14 = v12 + 8 * (v13 + 3);
    v7 = v12 + 8 * (v13 + 2);
  }
  else
  {
    v14 = 16LL;
  }
  if ( !a3 )
    a3 = -1LL;
  *(_QWORD *)v7 = a3;
  *(_QWORD *)v14 = 0LL;
  v15 = qword_180184E28;
  if ( v10 > (unsigned int)qword_180184E28 )
    v15 = v9 - 16;
  LODWORD(qword_180184E28) = v15;
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  *a5 = v10;
  return v6;
}
