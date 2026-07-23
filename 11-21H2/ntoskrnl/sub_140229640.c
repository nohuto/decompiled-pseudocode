/*
 * XREFs of sub_140229640 @ 0x140229640
 * Callers:
 *     sub_140226A00 @ 0x140226A00 (sub_140226A00.c)
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     sub_140229590 @ 0x140229590 (sub_140229590.c)
 *     sub_14026DFF0 @ 0x14026DFF0 (sub_14026DFF0.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1403C2A18 @ 0x1403C2A18 (sub_1403C2A18.c)
 *     sub_14096DAE0 @ 0x14096DAE0 (sub_14096DAE0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140229640(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rdx

  v3 = a2;
  switch ( a3 )
  {
    case 1:
      goto LABEL_17;
    case 2:
      goto LABEL_6;
    case 11:
LABEL_17:
      v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), -(__int64)v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), -(__int64)v3);
      goto LABEL_6;
  }
  v4 = -(__int64)a2;
  if ( a3 == 4 )
    _InterlockedExchangeAdd64(&qword_140C53558, v4);
  else
    _InterlockedExchangeAdd64(&qword_140C53540, v4);
LABEL_6:
  result = (unsigned __int64)&StartContext;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v7 != -1 )
    {
      for ( ; v3 + v7 <= 0x100; result = v3 + (int)result )
      {
        if ( v3 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 + v3, v7);
        v8 = (_DWORD)v7 == (_DWORD)result;
        v7 = (int)result;
        if ( v8 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)v7 > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v7);
        if ( (_DWORD)v7 == (_DWORD)result )
        {
          result = (unsigned int)(v7 - 192);
          v3 += (int)result;
        }
      }
    }
  }
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v3);
  return result;
}
