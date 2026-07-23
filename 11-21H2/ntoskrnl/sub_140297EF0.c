/*
 * XREFs of sub_140297EF0 @ 0x140297EF0
 * Callers:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_140460684 @ 0x140460684 (sub_140460684.c)
 *     sub_140460F1A @ 0x140460F1A (sub_140460F1A.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 */

_BOOL8 sub_140297EF0()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)sub_1402ABBD0() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)CurrentThread + 345) & 2) == 0
        && *((void (__fastcall __noreturn **)())CurrentThread + 164) != sub_1403CB9F0 )
      {
        if ( qword_140D06950 )
        {
          v1 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48
                                     + 8LL * *(unsigned __int16 *)(*((_QWORD *)CurrentThread + 23) + 1838LL))
                         + 16600LL);
          if ( v1 )
          {
            if ( CurrentThread != *(struct _KTHREAD **)(v1 + 88) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
