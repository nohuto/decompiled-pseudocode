/*
 * XREFs of sub_1409339DC @ 0x1409339DC
 * Callers:
 *     sub_14085DE38 @ 0x14085DE38 (sub_14085DE38.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1406C3EEC @ 0x1406C3EEC (sub_1406C3EEC.c)
 *     sub_140863C68 @ 0x140863C68 (sub_140863C68.c)
 */

ULONG sub_1409339DC()
{
  ULONG result; // eax
  ULONG v1; // ecx
  int v2; // r9d
  __int64 *v3; // rdx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  result = dword_140CF5F58;
  v4 = 0LL;
  v5 = 0LL;
  if ( dword_140CF5F58 < 1 )
  {
    result = _InterlockedCompareExchange(&dword_140CF5F58, 1, 0);
    if ( !result )
    {
      sub_140863C68((__int64)&v4);
      sub_1406C3EEC();
      result = KeQueryActiveProcessorCountEx(0xFFFFu);
      v1 = 0;
      if ( result )
      {
        v2 = HIDWORD(v5);
        v3 = qword_140D088C0;
        do
        {
          if ( *(_DWORD *)(*v3 + 11676) != 0x7FFFFFFF )
            break;
          ++v1;
          *(_DWORD *)(*v3++ + 11676) = v2;
        }
        while ( v1 < result );
      }
      _InterlockedAdd(&dword_140CF5F58, 1u);
    }
  }
  return result;
}
