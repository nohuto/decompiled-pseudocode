/*
 * XREFs of sub_18001CFB0 @ 0x18001CFB0
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

__int64 __fastcall sub_18001CFB0(volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx
  bool v2; // cc
  unsigned __int32 v3; // ebx

  v1 = _InterlockedExchangeAdd(a1 + 24, 0xFFFFFFFF);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    if ( a1 )
    {
      *(_QWORD *)a1 = &off_180020ED8;
      j_free((void *)a1);
    }
  }
  return v3;
}
