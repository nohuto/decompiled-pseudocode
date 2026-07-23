/*
 * XREFs of sub_140681870 @ 0x140681870
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     sub_140208F20 @ 0x140208F20 (sub_140208F20.c)
 */

__int64 __fastcall sub_140681870(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+50h] [rbp-10h]

  v2 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a1 + 1536) )
  {
    sub_140208F20(*(_QWORD *)(a1 + 1544), &v8, &v10);
    v4 = *((_QWORD *)&v9 + 1);
    *(_QWORD *)(a2 + 24) = *((_QWORD *)&v8 + 1);
    *(_QWORD *)(a2 + 32) = v9;
    *(_QWORD *)(a2 + 40) = *((_QWORD *)&v11 + 1);
    *(_OWORD *)(a2 + 48) = v10;
    v5 = v11;
    *(_QWORD *)(a2 + 8) = v4;
    v6 = v8;
    *(_QWORD *)(a2 + 64) = v5;
    *(_QWORD *)(a2 + 16) = v6;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
