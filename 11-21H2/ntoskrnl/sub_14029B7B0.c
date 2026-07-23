/*
 * XREFs of sub_14029B7B0 @ 0x14029B7B0
 * Callers:
 *     sub_14029B270 @ 0x14029B270 (sub_14029B270.c)
 * Callees:
 *     sub_140342694 @ 0x140342694 (sub_140342694.c)
 */

__int64 __fastcall sub_14029B7B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = sub_140342694(a1, a2, a3, a1);
  if ( dword_140D068FC )
    v6 = *(_BYTE *)(v4 + 34056);
  else
    v6 = *(_BYTE *)(v4 + 34059);
  v7 = v3;
  result = v6;
  *(_QWORD *)(v4 + 8 * (v6 + 2 * v7) + 33408) += v5;
  return result;
}
