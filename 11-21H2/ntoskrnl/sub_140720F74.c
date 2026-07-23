/*
 * XREFs of sub_140720F74 @ 0x140720F74
 * Callers:
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406C1694 @ 0x1406C1694 (sub_1406C1694.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

bool __fastcall sub_140720F74(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = a1;
  for ( i = 0LL; (v1 & 0x8000u) == 0LL; LOWORD(v1) = v1 - 1 )
  {
    v3 = sub_140721CE0(v2, v1);
    if ( *(_WORD *)(v3 + 66) )
    {
      if ( *(_BYTE *)(v3 + 65) == 1 )
        break;
    }
    if ( *(_DWORD *)(v3 + 40) != -1 )
    {
      if ( v4 )
      {
        v6 = *(_QWORD *)(v2 + 8);
        v7 = 32LL;
        while ( 1 )
        {
          v9 = sub_140AB4218(v6 + 208, &i, v7);
          if ( !v9 )
            break;
          v8 = *(_DWORD *)(v9 + 68);
          if ( v8 == 2 || v8 == 11 )
            return (unsigned __int8)sub_140721FD0(*(_QWORD *)(v9 + 56), v10, v7) != 0;
        }
      }
      return 0;
    }
  }
  return 1;
}
