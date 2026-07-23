/*
 * XREFs of sub_140259210 @ 0x140259210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140259210(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax
  int v10; // eax
  int v11; // eax

  if ( (**(_DWORD **)a2 & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 1048);
    if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
      v4 = v3 + 1;
    else
      v4 = v3 - 1;
    *(_DWORD *)(a1 + 1048) = v4;
  }
  v5 = *(_QWORD *)a2;
  if ( (*(_DWORD *)v5 & 4) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 1056);
    if ( *(_BYTE *)(v5 + 5) )
      v11 = v10 + 1;
    else
      v11 = v10 - 1;
    *(_DWORD *)(a1 + 1056) = v11;
  }
  v6 = *(_DWORD *)(a1 + 1048);
  v7 = *(_DWORD *)(a1 + 1056) != 0 ? 2 : 0;
  v8 = v7 | 1;
  if ( !v6 )
    v8 = v7;
  result = 0LL;
  a2[2] = v8;
  return result;
}
