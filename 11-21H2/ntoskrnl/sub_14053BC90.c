/*
 * XREFs of sub_14053BC90 @ 0x14053BC90
 * Callers:
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14053BC90(__int64 a1)
{
  char v1; // dl
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx

  v1 = dword_140D051DC;
  v3 = *(_DWORD *)(a1 + 1272);
  if ( v3 < 0x200 )
    v3 = 512;
  if ( *(_QWORD *)(a1 + 1096) )
    *(_QWORD *)(a1 + 1096) = 0LL;
  v4 = v3 * *(_DWORD *)(a1 + 1536);
  v5 = v3 * *(_DWORD *)(a1 + 1540);
  v6 = (*(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088)) >> 1;
  v7 = (*(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088)) >> 3;
  *(_DWORD *)(a1 + 1040) = v5;
  if ( v1 )
    v7 = v6;
  v8 = 4 * v7;
  result = 0xCCCCCCCCCCCCCCCDuLL * v8;
  v10 = v8 / 5;
  if ( v4 < v8 / 5 )
    v10 = v4;
  *(_QWORD *)(a1 + 1016) = v10;
  return result;
}
