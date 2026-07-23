/*
 * XREFs of sub_1403836FC @ 0x1403836FC
 * Callers:
 *     sub_14037F42C @ 0x14037F42C (sub_14037F42C.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 * Callees:
 *     sub_140382E40 @ 0x140382E40 (sub_140382E40.c)
 *     sub_1403909DC @ 0x1403909DC (sub_1403909DC.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_1403836FC(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _DWORD **v15; // rcx
  __int64 *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  if ( (unsigned int)sub_140382E40(a2, a3 & 1, (__int64)&v17) )
  {
    v8 = (__int64 *)sub_1403909DC(&v17, a3, 0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v6 = *v8;
    else
      v6 = sub_1405F67D0((a1 + 16) & -(__int64)(a1 != 0), v8, 2 * (*(_DWORD *)(a2 + 32) & 1u));
    if ( v6 )
    {
      if ( (a3 & 2) != 0 )
      {
        v9 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
        v10 = v9[1];
        v11 = *v9;
        v12 = v10 - 8;
        v13 = v11 + 16;
        v14 = v11 + 8;
        if ( v10 <= v13 )
          v12 = v14;
        v15 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
        if ( **v15 != -1 )
          sub_1405F6710(v15, v12);
      }
      sub_1403909DC(&v17, a3, a2);
      v16 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v16 = v6;
      v16[1] = v6 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return v6;
}
