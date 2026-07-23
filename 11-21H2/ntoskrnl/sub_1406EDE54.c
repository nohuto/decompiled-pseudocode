/*
 * XREFs of sub_1406EDE54 @ 0x1406EDE54
 * Callers:
 *     sub_1406EDD54 @ 0x1406EDD54 (sub_1406EDD54.c)
 *     sub_1409E92F8 @ 0x1409E92F8 (sub_1409E92F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406EDE54(__int64 a1)
{
  int v2; // edx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 *v7; // r8
  int v8; // eax
  __int64 result; // rax
  int v10; // ecx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 96);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( byte_140C4E5A0[v5] );
    v2 = (v5 + 24) & 0xFFFFFFF8;
    do
    {
      v6 = *((_DWORD *)v4 + 5);
      v4 = (_QWORD *)*v4;
      v2 += (v6 + 19) & 0xFFFFFFF8;
    }
    while ( v4 != v3 );
  }
  v7 = *(__int64 **)(a1 + 1040);
  while ( v7 != (__int64 *)(a1 + 1040) )
  {
    v10 = *((_DWORD *)v7 + 4) + 16 * *((_DWORD *)v7 + 6) + 27;
    v7 = (__int64 *)*v7;
    v2 += v10 & 0xFFFFFFF8;
  }
  v8 = *(_DWORD *)(a1 + 120);
  if ( v8 )
    v2 += (32 * v8 + 23) & 0xFFFFFFF8;
  result = (unsigned int)(v2 + 72);
  if ( !v2 )
    return 0LL;
  return result;
}
