/*
 * XREFs of sub_1403925F8 @ 0x1403925F8
 * Callers:
 *     sub_140392564 @ 0x140392564 (sub_140392564.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 * Callees:
 *     sub_140392700 @ 0x140392700 (sub_140392700.c)
 *     sub_140392750 @ 0x140392750 (sub_140392750.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_1403925F8(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _DWORD **v13; // rcx
  __int64 *v14; // rdx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  if ( (unsigned int)sub_140392750(a2, 1LL, &v16) )
  {
    v6 = (__int64 *)sub_140392700(&v16, v5, 0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v4 = *v6;
    else
      v4 = sub_1405F67D0((a1 + 16) & -(__int64)(a1 != 0), v6, 2 * (*(_DWORD *)(a2 + 32) & 1u));
    if ( v4 )
    {
      v7 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
      v8 = v7[1];
      v9 = *v7;
      v10 = v8 - 8;
      v11 = v9 + 16;
      v12 = v9 + 8;
      if ( v8 <= v11 )
        v10 = v12;
      v13 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
      if ( **v13 != -1 )
        sub_1405F6710(v13, v10);
      sub_140392700(&v16, v10, a2);
      v14 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v14 = v4;
      v14[1] = v4 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return v4;
}
