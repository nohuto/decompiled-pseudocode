/*
 * XREFs of sub_1406E9750 @ 0x1406E9750
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E9750(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 result; // rax
  signed __int32 v7; // ett

  v2 = 0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 5 )
            return result;
          v2 = 1024;
        }
        else
        {
          v2 = 768;
        }
      }
      else
      {
        v2 = 512;
      }
    }
    else
    {
      v2 = 256;
    }
  }
  do
  {
    v7 = *(_DWORD *)(a1 + 956);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 956), v2 | v7 & 0xFFFFF8FF, v7);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
