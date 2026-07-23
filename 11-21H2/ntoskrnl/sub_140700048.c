/*
 * XREFs of sub_140700048 @ 0x140700048
 * Callers:
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140700048(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx

  v3 = *(_DWORD *)(a1 + 1512);
  *a2 = 0LL;
  *a3 = 0LL;
  result = v3;
  if ( (v3 & 0x800) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1048) )
    {
      v6 = *(_QWORD *)(a1 + 1136);
      *a2 = v6;
      if ( (v3 & 0x400000) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 1264);
        if ( !v7 || (*(_DWORD *)(v7 + 1512) & 0x1000) == 0 || !*(_DWORD *)(v7 + 1048) )
        {
          *a3 = v6;
          result = v3;
          if ( v7 )
          {
            _InterlockedOr((volatile signed __int32 *)(v7 + 1512), 0x400000u);
            result = *(unsigned int *)(a1 + 1512);
          }
        }
      }
    }
  }
  if ( (result & 0x400000) != 0 )
  {
    result = *(_QWORD *)(a1 + 1264);
    if ( result )
      _InterlockedOr((volatile signed __int32 *)(result + 1512), 0x400000u);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFFBFFFFF);
  }
  return result;
}
