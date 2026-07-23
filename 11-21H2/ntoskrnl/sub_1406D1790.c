/*
 * XREFs of sub_1406D1790 @ 0x1406D1790
 * Callers:
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 */

char __fastcall sub_1406D1790(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  char v3; // bl
  unsigned __int64 v4; // rax

  v1 = (volatile signed __int32 *)(a1 + 48);
  v3 = 1;
  v4 = sub_140347C10(a1 + 48, 0LL);
  if ( _interlockedbittestandset64(v1, 0LL) )
  {
    if ( v4 )
      sub_140353BB0((ULONG_PTR)v1, v4);
    return 0;
  }
  else
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  }
  return v3;
}
