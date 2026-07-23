/*
 * XREFs of sub_1406A50C8 @ 0x1406A50C8
 * Callers:
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     sub_140721F88 @ 0x140721F88 (sub_140721F88.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 */

__int64 __fastcall sub_1406A50C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v7 = a1 + 208;
    while ( 1 )
    {
      v8 = sub_140721F88(v7, &v11, a3, a4);
      v10 = v8;
      if ( !v8 )
        break;
      if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(v8 + 56), a3, v9) && *(_DWORD *)(v10 + 68) == 8 )
        return *(_QWORD *)(v10 + 88);
    }
  }
  return v5;
}
