/*
 * XREFs of sub_140266074 @ 0x140266074
 * Callers:
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 * Callees:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 */

__int64 __fastcall sub_140266074(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v3; // eax
  __int64 v5; // rax
  unsigned int v6; // edx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a2;
  v3 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v3 == (_DWORD)a2 )
    return 0LL;
  if ( v3 != 1 )
  {
    if ( v3 == 3 )
    {
LABEL_5:
      sub_140267E78(a1, a2, 4LL);
      return 0LL;
    }
    v5 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL;
    if ( ((*(_QWORD *)(a1 + 24) >> 59) & 7) != 0 )
    {
      _InterlockedOr(v7, 0);
      v6 = ((_BYTE)dword_140D31080 - (_BYTE)v5) & 7;
      if ( v6 > 2 || (v5 & 1) == 0 && v6 >= 2 )
      {
        a2 = v2;
        goto LABEL_5;
      }
    }
  }
  return 1LL;
}
