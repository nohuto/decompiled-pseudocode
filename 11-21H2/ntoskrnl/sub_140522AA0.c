/*
 * XREFs of sub_140522AA0 @ 0x140522AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_140522930 @ 0x140522930 (sub_140522930.c)
 */

__int64 __fastcall sub_140522AA0(__int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // r14d
  _DWORD *v5; // rdi
  int v6; // ebx
  int v7; // ebp
  unsigned int v8; // ebp
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a3;
  if ( a3 > 0xFFFFFFFF || (unsigned int)(a2 - 2) > 1 )
  {
    sub_140522930(a1, 3, 0);
    return 3221225485LL;
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 8);
    v6 = 0;
    v7 = 0;
    while ( (v5[4] & 1) != 0 )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v7 >= 0x64 )
      {
        if ( v7 == 100 )
        {
LABEL_11:
          sub_140522930(a1, 2, 0);
          return 3221225473LL;
        }
        break;
      }
    }
    v5[2] = v5[2] & 0xFFFFFFFA | 4;
    _InterlockedOr(v10, 0);
    v5[2] |= 2u;
    _InterlockedOr(v10, 0);
    *v5 = v3;
    _InterlockedOr(v10, 0);
    v5[2] = v5[2] & 0xFFFFFFFA | 1;
    _InterlockedOr(v10, 0);
    v8 = v5[1];
    while ( v8 <= v5[1] )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v6 >= 0x64 )
      {
        if ( v6 == 100 )
          goto LABEL_11;
        return 0LL;
      }
    }
    return 0LL;
  }
}
