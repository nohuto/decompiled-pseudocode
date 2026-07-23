/*
 * XREFs of sub_14037A368 @ 0x14037A368
 * Callers:
 *     sub_140236F54 @ 0x140236F54 (sub_140236F54.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037C144 @ 0x14037C144 (sub_14037C144.c)
 *     sub_1405FC7D8 @ 0x1405FC7D8 (sub_1405FC7D8.c)
 * Callees:
 *     sub_14037A3E0 @ 0x14037A3E0 (sub_14037A3E0.c)
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 */

__int64 __fastcall sub_14037A368(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  int v5; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v10; // rbx
  __int128 v11; // xmm0
  int v12; // eax

  v4 = a1 + 448;
  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 == -1 || !v5 )
    v7 = a2 + 8;
  else
    v7 = *(_QWORD *)a2 + 16LL * (unsigned int)(v5 - 1);
  v8 = *a3;
  if ( *(_QWORD *)v7 == *a3 )
  {
    *(_QWORD *)(v7 + 8) = a3[1];
  }
  else
  {
    v10 = (_QWORD *)(a2 + 8);
    if ( v5 == -1 )
    {
      v11 = *(_OWORD *)a3;
      *v10 = 0LL;
      *(_OWORD *)v7 = v11;
    }
    else
    {
      *(_DWORD *)(a2 + 24) = 0;
      sub_14037CCE8(v4, *(unsigned int *)(v8 + 16), a2);
      v12 = *(_DWORD *)(a2 + 24);
      if ( v12 != -1 && v12 )
        v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v12 - 1));
      v10[1] = a3[1];
    }
  }
  return sub_14037A3E0(v4, a2);
}
