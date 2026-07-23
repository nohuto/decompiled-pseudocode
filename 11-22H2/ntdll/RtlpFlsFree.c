/*
 * XREFs of RtlpFlsFree @ 0x180071670
 * Callers:
 *     RtlFlsFree @ 0x180071660 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180071858 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rsi
  unsigned __int64 Value; // rbp
  _RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rdi
  __int64 **v11; // rdx
  __int64 *v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v19; // rax
  _QWORD *v20; // r14
  _QWORD v22[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v2 = a2 + 16,
        v3 = 0,
        _BitScanReverse((unsigned int *)&v4, a2 + 16),
        (v5 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v4 - 4) + 1)) != 0)
    && (v6 = v2 ^ (unsigned __int64)(unsigned int)(1 << v4), (v7 = (_RTL_SRWLOCK *)(v5 + 8 * (v6 + 2 * v6 + 1))) != 0LL)
    && v7[1].Value )
  {
    Value = 0LL;
    v9 = (_RTL_SRWLOCK *)(v5 + 8 * (v6 + 2 * v6 + 1));
    if ( v7[1].Value != -1LL )
      Value = v7[1].Value;
    RtlAcquireSRWLockExclusive(v9);
    while ( 1 )
    {
      v10 = 0LL;
      RtlAcquireSRWLockShared(&RtlpFlsContext);
      v11 = (__int64 **)qword_180184E18;
      if ( (__int64 *)qword_180184E18 != &qword_180184E18 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v10 >= 0x10 )
            goto LABEL_16;
          v12 = *v11;
          _BitScanReverse(&v13, v2);
          v14 = v2 ^ (1 << v13);
          v15 = v11[v13 - 2];
          v16 = v15 ? &v15[v14 + 1] : 0LL;
          if ( Value )
            break;
          if ( v16 )
            goto LABEL_22;
LABEL_15:
          v11 = (__int64 **)v12;
          if ( v12 == &qword_180184E18 )
            goto LABEL_16;
        }
        if ( !v16 )
          goto LABEL_15;
        v17 = *v16;
        if ( !*v16 )
          goto LABEL_15;
        v19 = 2LL * (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v22[v19 - 1] = Value;
        v22[v19] = v17;
LABEL_22:
        *v16 = 0LL;
        goto LABEL_15;
      }
LABEL_16:
      RtlReleaseSRWLockShared(&RtlpFlsContext);
      if ( !(_DWORD)v10 )
        break;
      v20 = v22;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v20 - 1))(*v20);
        v20 += 2;
        --v10;
      }
      while ( v10 );
    }
    v7[1].Value = -2LL;
    RtlReleaseSRWLockExclusive(v7);
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v7[1].Value = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&xmmword_180184DD8, v2);
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
