/*
 * XREFs of __ft_marker_array_find @ 0x18009FBBC
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x18009F5C0 (RtlGetFeatureToggleConfiguration.c)
 * Callees:
 *     __ft_marker_array_lower_bound @ 0x18009FC1C (__ft_marker_array_lower_bound.c)
 */

__int64 __fastcall _ft_marker_array_find(_QWORD *a1, int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax

  v6 = 0;
  v7 = _ft_marker_array_lower_bound();
  if ( v7 < a1[1] )
  {
    v8 = 3 * v7;
    if ( *(_DWORD *)(*a1 + 4 * v8) == a2 )
    {
      v6 = 1;
      *a3 = *(_QWORD *)(*a1 + 4 * v8 + 4);
    }
  }
  return v6;
}
