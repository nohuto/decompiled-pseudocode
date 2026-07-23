/*
 * XREFs of sub_140767DF8 @ 0x140767DF8
 * Callers:
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_1409582C4 @ 0x1409582C4 (sub_1409582C4.c)
 * Callees:
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 *     sub_140767EFC @ 0x140767EFC (sub_140767EFC.c)
 */

__int64 __fastcall sub_140767DF8(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  unsigned int v7; // r11d
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( !a2 || !*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) )
    return 3221225486LL;
  if ( (unsigned __int8)sub_140767E88(*(_QWORD *)a1, a2, &v11) )
  {
    v9 = v11;
    v10 = *(_DWORD *)(v11 + 8);
    if ( (int)v7 > v10 )
      v10 = v7;
    *(_DWORD *)(v11 + 8) = v10;
    if ( a4 == 1 )
    {
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
      *(_DWORD *)(v9 + 16) |= 1u;
    }
    return 3221225525LL;
  }
  else
  {
    result = sub_140767EFC(a1, v6, v7, a4);
    if ( (int)result >= 0 )
      a1[8] = 0;
  }
  return result;
}
