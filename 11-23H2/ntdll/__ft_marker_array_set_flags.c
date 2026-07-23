/*
 * XREFs of __ft_marker_array_set_flags @ 0x18009FD38
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x18009F5C0 (RtlGetFeatureToggleConfiguration.c)
 * Callees:
 *     __ft_array_insert @ 0x18009FA9C (__ft_array_insert.c)
 *     __ft_marker_array_lower_bound @ 0x18009FC1C (__ft_marker_array_lower_bound.c)
 */

__int64 __fastcall _ft_marker_array_set_flags(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edi
  signed __int64 v7; // rax
  _DWORD *v8; // r8
  char *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+18h]

  v11 = a3;
  v6 = 0;
  v7 = _ft_marker_array_lower_bound(a1, a2);
  if ( v7 < a1[1] )
  {
    v8 = (_DWORD *)*a1;
    if ( *(_DWORD *)(*a1 + 12 * v7) == a2 )
    {
      LODWORD(v11) = (v8[3 * v7 + 1] ^ v11) & 0xE0000 ^ v11;
      *(_QWORD *)&v8[3 * v7 + 1] = v11;
      return 1;
    }
  }
  v9 = (char *)_ft_array_insert((const void **)a1, a1 + 1, a1 + 2, 12LL, v7);
  if ( v9 )
  {
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 4) = a3;
    return 1;
  }
  return v6;
}
