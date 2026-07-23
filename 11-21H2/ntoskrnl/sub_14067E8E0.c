/*
 * XREFs of sub_14067E8E0 @ 0x14067E8E0
 * Callers:
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_14067E8E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24);
  v11 = 0LL;
  if ( a1 && a3 )
  {
    v6 = a1 + 208;
    while ( 1 )
    {
      v7 = sub_140AB4218(v6, &v11, 32LL);
      v9 = v7;
      if ( !v7 )
        break;
      if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(v7 + 56), a3, v8) )
      {
        v10 = *(_DWORD *)(v9 + 68);
        if ( v10 == 1 )
        {
          ++v4;
        }
        else if ( v10 == 3 )
        {
          --v4;
        }
      }
    }
  }
  return v4;
}
