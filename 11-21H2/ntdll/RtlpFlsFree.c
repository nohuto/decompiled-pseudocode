/*
 * XREFs of RtlpFlsFree @ 0x18007ABF0
 * Callers:
 *     RtlFlsFree @ 0x18007ABE0 (RtlFlsFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18007ADD8 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 **v13; // rdx
  __int64 *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v24; // rax
  _QWORD *v25; // r14
  _QWORD v27[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xFEE
    && (v4 = a2 + 16,
        v5 = 0,
        _BitScanReverse((unsigned int *)&v6, a2 + 16),
        (v7 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v6 - 4) + 1)) != 0)
    && (v8 = v4 ^ (unsigned __int64)(unsigned int)(1 << v6), (v9 = v7 + 8 * (v8 + 2 * v8 + 1)) != 0)
    && *(_QWORD *)(v9 + 8) )
  {
    v10 = 0LL;
    v11 = v7 + 8 * (v8 + 2 * v8 + 1);
    if ( *(_QWORD *)(v9 + 8) != -1LL )
      v10 = *(_QWORD *)(v9 + 8);
    RtlAcquireSRWLockExclusive(v11, a2, v7, a4);
    while ( 1 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockShared((volatile signed __int64 *)&RtlpFlsContext);
      v13 = (__int64 **)qword_18017ABD8;
      if ( (__int64 *)qword_18017ABD8 != &qword_18017ABD8 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v12 >= 0x10 )
            goto LABEL_16;
          v14 = *v13;
          _BitScanReverse(&v15, v4);
          v16 = v4 ^ (1 << v15);
          v17 = v13[v15 - 2];
          v18 = v17 ? &v17[v16 + 1] : 0LL;
          if ( v10 )
            break;
          if ( v18 )
            goto LABEL_22;
LABEL_15:
          v13 = (__int64 **)v14;
          if ( v14 == &qword_18017ABD8 )
            goto LABEL_16;
        }
        if ( !v18 )
          goto LABEL_15;
        v19 = *v18;
        if ( !*v18 )
          goto LABEL_15;
        v24 = 2LL * (unsigned int)v12;
        v12 = (unsigned int)(v12 + 1);
        v27[v24 - 1] = v10;
        v27[v24] = v19;
LABEL_22:
        *v18 = 0LL;
        goto LABEL_15;
      }
LABEL_16:
      RtlReleaseSRWLockShared((volatile signed __int64 *)&RtlpFlsContext);
      if ( !(_DWORD)v12 )
        break;
      v25 = v27;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v25 - 1))(*v25);
        v25 += 2;
        --v12;
      }
      while ( v12 );
    }
    *(_QWORD *)(v9 + 8) = -2LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v9);
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, v20, v21, v22);
    *(_QWORD *)(v9 + 8) = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&xmmword_18017AB98, v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
