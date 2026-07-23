/*
 * XREFs of sub_140254FD8 @ 0x140254FD8
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140254FD8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 328);
  v2 = *(_QWORD *)(a2 + 320);
  *(_QWORD *)(a1 + 8) = v2;
  v3 = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a1 + 24) = v3;
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v3 >= v4 )
    v3 = v4;
  *(_QWORD *)(a1 + 24) = v3;
  result = *(_QWORD *)(a1 + 32);
  if ( result >= v2 )
    result = v2;
  if ( result < v4 )
    v4 = result;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
