/*
 * XREFs of sub_140571980 @ 0x140571980
 * Callers:
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_140571980(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int16 *i; // rbx
  unsigned __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  for ( i = *(unsigned __int16 **)a3; i != a3; i = *(unsigned __int16 **)i )
  {
    result = (unsigned int)(__int16)i[168];
    if ( (_DWORD)result == a2 )
    {
      if ( *(i - 4) == 17 )
      {
        result = sub_14042A5E0(a1, *((_QWORD *)i + 4));
      }
      else
      {
        result = KeCheckProcessorAffinityEx(i + 32, *((_DWORD *)CurrentPrcb + 9));
        if ( (_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 360);
          v9 = *((_QWORD *)i + 3);
          if ( result >= v9 && result < *((_QWORD *)i + 4) )
          {
            result = *((_QWORD *)i + 6) + (((result - v9) >> *((_DWORD *)i + 10)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  return result;
}
