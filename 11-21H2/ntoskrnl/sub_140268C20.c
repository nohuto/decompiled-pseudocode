/*
 * XREFs of sub_140268C20 @ 0x140268C20
 * Callers:
 *     sub_140268BEC @ 0x140268BEC (sub_140268BEC.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_1405BC4A4 @ 0x1405BC4A4 (sub_1405BC4A4.c)
 */

unsigned __int64 __fastcall sub_140268C20(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax
  _SLIST_HEADER **v3; // r15
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rcx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf
  unsigned __int64 v13; // r8
  struct _KPRCB *v14; // r9
  __int64 v15; // rdx

  v1 = 0LL;
  result = *(unsigned int *)(a1 + 16728);
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 16736);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (unsigned __int64)ExpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = (unsigned __int8)sub_1402F2700(v6);
            sub_1405BC4A4(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x220000000000LL) >> 4));
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            result = (unsigned int)dword_140D06B08;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v11 = *((_QWORD *)CurrentPrcb + 4375);
                  result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
                  *(_DWORD *)(v11 + 20) &= result;
                  if ( v12 )
                    result = sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
            ++v1;
            v6 = v7;
          }
          while ( v7 );
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    if ( v1 )
    {
      sub_14028CE10(a1, v1);
      result = (unsigned __int64)&StartContext;
      v13 = v1;
      if ( (ULONG_PTR *)a1 != &StartContext )
        goto LABEL_28;
      v14 = KeGetCurrentPrcb();
      v15 = *((int *)v14 + 8615);
      if ( (_DWORD)v15 == -1 )
        goto LABEL_28;
      for ( ; v1 + v15 <= 0x100; result = v1 + (int)result )
      {
        if ( v1 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v14 + 8615, v15 + v1, v15);
        v12 = (_DWORD)v15 == (_DWORD)result;
        v15 = (int)result;
        if ( v12 )
          goto LABEL_29;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)v15 > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v14 + 8615, 192, v15);
        if ( (_DWORD)v15 == (_DWORD)result )
        {
          result = (unsigned int)(v15 - 192);
          v13 = v1 + (int)result;
        }
      }
      if ( v13 )
LABEL_28:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v13);
LABEL_29:
      _InterlockedExchangeAdd64(&qword_140C53DA8, -(__int64)v1);
    }
  }
  return result;
}
