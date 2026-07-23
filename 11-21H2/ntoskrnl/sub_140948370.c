/*
 * XREFs of sub_140948370 @ 0x140948370
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange @ 0x1408395F0 (RtlDeleteRange.c)
 *     sub_140839ED4 @ 0x140839ED4 (sub_140839ED4.c)
 */

__int64 __fastcall sub_140948370(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  char v5; // al
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  for ( i = *a2; ; RtlDeleteRange(v9, i, *(_QWORD *)(v6 + 16) + i - 1, v8) )
  {
    v5 = sub_140839ED4(*(_DWORD *)(a2[5] + 36), v2, &i);
    v8 = *(_QWORD *)(v7 + 32);
    v9 = *(_QWORD *)(a1 + 48);
    if ( !v5 )
      break;
    v2 = i;
  }
  return RtlDeleteRange(v9, *a2, a2[1], v8);
}
