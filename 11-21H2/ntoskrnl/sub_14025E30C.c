/*
 * XREFs of sub_14025E30C @ 0x14025E30C
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     sub_140576640 @ 0x140576640 (sub_140576640.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall sub_14025E30C(__int64 a1)
{
  struct _KTHREAD *result; // rax
  __int64 v2; // r8

  result = KeGetCurrentThread();
  v2 = *(_QWORD *)(*((_QWORD *)result + 23) + 984LL);
  if ( v2 )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = v2;
    }
  }
  return result;
}
