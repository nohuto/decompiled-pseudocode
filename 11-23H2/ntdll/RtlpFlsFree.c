/*
 * XREFs of RtlpFlsFree @ 0x180071990
 * Callers:
 *     RtlFlsFree @ 0x180071980 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180071B78 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbp
  volatile signed __int64 *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  __int64 **v14; // rdx
  __int64 *v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r14
  _QWORD v25[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v2 = a2 + 16,
        v3 = 0,
        _BitScanReverse((unsigned int *)&v4, a2 + 16),
        (v5 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v4 - 4) + 1)) != 0)
    && (v6 = v2 ^ (unsigned __int64)(unsigned int)(1 << v4), (v7 = v5 + 8 * (v6 + 2 * v6 + 1)) != 0)
    && *(_QWORD *)(v7 + 8) )
  {
    v8 = 0LL;
    v9 = (volatile signed __int64 *)(v5 + 8 * (v6 + 2 * v6 + 1));
    if ( *(_QWORD *)(v7 + 8) != -1LL )
      v8 = *(_QWORD *)(v7 + 8);
    RtlAcquireSRWLockExclusive(v9);
    while ( 1 )
    {
      v13 = 0LL;
      RtlAcquireSRWLockShared((volatile signed __int64 *)&RtlpFlsContext, v10, v11, v12);
      v14 = (__int64 **)qword_180187F18;
      if ( (__int64 *)qword_180187F18 != &qword_180187F18 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v13 >= 0x10 )
            goto LABEL_16;
          v15 = *v14;
          _BitScanReverse(&v16, v2);
          v17 = v2 ^ (1 << v16);
          v18 = v14[v16 - 2];
          v19 = v18 ? &v18[v17 + 1] : 0LL;
          if ( v8 )
            break;
          if ( v19 )
            goto LABEL_22;
LABEL_15:
          v14 = (__int64 **)v15;
          if ( v15 == &qword_180187F18 )
            goto LABEL_16;
        }
        if ( !v19 )
          goto LABEL_15;
        v20 = *v19;
        if ( !*v19 )
          goto LABEL_15;
        v22 = 2LL * (unsigned int)v13;
        v13 = (unsigned int)(v13 + 1);
        v25[v22 - 1] = v8;
        v25[v22] = v20;
LABEL_22:
        *v19 = 0LL;
        goto LABEL_15;
      }
LABEL_16:
      RtlReleaseSRWLockShared((volatile signed __int64 *)&RtlpFlsContext);
      if ( !(_DWORD)v13 )
        break;
      v23 = v25;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v23 - 1))(*v23);
        v23 += 2;
        --v13;
      }
      while ( v13 );
    }
    *(_QWORD *)(v7 + 8) = -2LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v7);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    *(_QWORD *)(v7 + 8) = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&xmmword_180187ED8, v2);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
