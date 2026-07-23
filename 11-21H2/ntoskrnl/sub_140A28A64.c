/*
 * XREFs of sub_140A28A64 @ 0x140A28A64
 * Callers:
 *     sub_14083D8B0 @ 0x14083D8B0 (sub_14083D8B0.c)
 * Callees:
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 */

__int64 __fastcall sub_140A28A64(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        GUID *a7,
        unsigned int a8,
        _DWORD *a9)
{
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // rdx

  result = 3221225494LL;
  *a9 = 0;
  if ( a4 )
    return result;
  v11 = *(_DWORD *)(a5 + 16);
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a7 = (GUID *)(*(_QWORD *)a5 - 0x4D1C2127DB7C5747LL);
      if ( *(_QWORD *)a5 == 0x4D1C2127DB7C5747LL )
        a7 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
      if ( a7 )
        return result;
      *a6 = 7;
      *a9 = 4;
      if ( a8 < 4 )
        return 3221225507LL;
    }
    else
    {
      if ( v11 != 4 )
        return result;
      a7 = (GUID *)(*(_QWORD *)a5 - 0x4D1C2127DB7C5747LL);
      if ( *(_QWORD *)a5 == 0x4D1C2127DB7C5747LL )
        a7 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
      if ( a7 )
        return result;
      *a6 = 7;
      *a9 = 4;
      if ( a8 < 4 )
        return 3221225507LL;
    }
    return sub_140A295FC(a2, a7);
  }
  v12 = *(_QWORD *)a5 - 0x4D1C2127DB7C5747LL;
  if ( *(_QWORD *)a5 == 0x4D1C2127DB7C5747LL )
    v12 = *(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL;
  if ( !v12 )
  {
    *a6 = 13;
    *a9 = 16;
    if ( a8 < 0x10 )
      return 3221225507LL;
    return sub_140A295FC(a2, a7);
  }
  return result;
}
