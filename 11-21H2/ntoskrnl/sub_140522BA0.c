/*
 * XREFs of sub_140522BA0 @ 0x140522BA0
 * Callers:
 *     sub_140522CE0 @ 0x140522CE0 (sub_140522CE0.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_140522930 @ 0x140522930 (sub_140522930.c)
 */

__int64 __fastcall sub_140522BA0(_QWORD *a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // esi
  unsigned __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (_DWORD *)a1[1];
  if ( v1 || (v3 = sub_1403BE7F0(*a1, 20LL, 0), a1[1] = v3, (v1 = (_DWORD *)v3) != 0LL) )
  {
    v6 = 0;
    while ( (v1[4] & 1) != 0 )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v6 >= 0x64 )
      {
        if ( v6 == 100 )
        {
LABEL_12:
          v5 = 2;
          v4 = -1073741823;
          goto LABEL_13;
        }
        break;
      }
    }
    v1[2] = v1[2] & 0xFFFFFFFA | 4;
    _InterlockedOr(v11, 0);
    *v1 = -1;
    _InterlockedOr(v11, 0);
    v1[2] &= ~2u;
    _InterlockedOr(v11, 0);
    v1[2] |= 5u;
    _InterlockedOr(v11, 0);
    v7 = v1[1];
    v8 = 0;
    while ( v7 <= v1[1] )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v8 >= 0x64 )
      {
        if ( v8 == 100 )
          goto LABEL_12;
        return 0;
      }
    }
    return 0;
  }
  else
  {
    v4 = -1073741801;
    v5 = 1;
LABEL_13:
    sub_140522930((__int64)a1, v5, 0);
    v9 = a1[1];
    if ( v9 )
    {
      sub_1403BF310(v9, 1LL, 0LL);
      a1[1] = 0LL;
    }
  }
  return v4;
}
