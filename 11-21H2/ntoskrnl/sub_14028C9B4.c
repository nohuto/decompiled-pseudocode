/*
 * XREFs of sub_14028C9B4 @ 0x14028C9B4
 * Callers:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_14028B8B0 @ 0x14028B8B0 (sub_14028B8B0.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14028C978 @ 0x14028C978 (sub_14028C978.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

unsigned __int64 __fastcall sub_14028C9B4(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // rdx
  bool v8; // zf

  v3 = a2;
  if ( a3 )
  {
    sub_14028CE10(a1, a2);
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
LABEL_8:
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
  }
  else
  {
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
        goto LABEL_8;
      }
    }
  }
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v3);
  return result;
}
