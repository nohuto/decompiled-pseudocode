/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x18008AF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int i; // r10d
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  for ( i = v2 + 128; ; ++i )
  {
    if ( v2 == *(_DWORD *)(a2 + 32) )
    {
      v10 = *(_QWORD **)a2;
      v9 = *(_QWORD **)(a2 + 24);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 8) <= 0x80u )
      {
        v8 = v2;
      }
      else
      {
        _BitScanReverse(&v7, i);
        v8 = i ^ (1 << v7);
        v6 = *(_QWORD *)(v6 + 8LL * (v7 - 7));
      }
      v9 = (_QWORD *)(v6 + 16LL * v8);
      v10 = v9;
    }
    v11 = (_QWORD *)*v10;
    if ( v11 != v9 )
      break;
LABEL_8:
    if ( ++v2 >= *(_DWORD *)(a1 + 8) )
      return 0LL;
  }
  while ( !v11[2] )
  {
    v11 = (_QWORD *)*v11;
    if ( v11 == v9 )
      goto LABEL_8;
  }
  *(_DWORD *)(a2 + 32) = v2;
  result = v11;
  *(_QWORD *)(a2 + 24) = v9;
  *(_QWORD *)a2 = v11;
  return result;
}
