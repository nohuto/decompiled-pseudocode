/*
 * XREFs of sub_1406EB534 @ 0x1406EB534
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 */

__int64 __fastcall sub_1406EB534(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 184);
  v12 = 0LL;
  v6 = v4 & 0xF;
  if ( a2 )
  {
    v8 = a1 + 208;
    while ( 1 )
    {
      v9 = sub_140721F88(v8, &v12, a3, a4);
      v11 = v9;
      if ( !v9 )
        break;
      if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(v9 + 56), a2, v10) && *(_DWORD *)(v11 + 68) == 7 )
        return *(unsigned int *)(v11 + 88);
    }
  }
  return v6;
}
