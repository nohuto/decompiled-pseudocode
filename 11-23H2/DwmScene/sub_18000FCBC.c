/*
 * XREFs of sub_18000FCBC @ 0x18000FCBC
 * Callers:
 *     sub_18000F284 @ 0x18000F284 (sub_18000F284.c)
 *     sub_18000FE20 @ 0x18000FE20 (sub_18000FE20.c)
 * Callees:
 *     sub_18000FC20 @ 0x18000FC20 (sub_18000FC20.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 */

char __fastcall sub_18000FCBC(volatile signed __int32 **a1, __int64 a2, volatile signed __int32 *a3)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx

  if ( !a3 )
  {
    sub_18000FDB4(a1);
LABEL_7:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(a3 + 1));
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( a2 )
      sub_18000FF54(v7 + 1, a3, a2, a3);
    sub_18000FC20(a1, v8, a3);
    goto LABEL_7;
  }
  return (char)v7;
}
