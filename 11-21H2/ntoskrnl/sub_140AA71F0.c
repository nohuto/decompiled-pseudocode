/*
 * XREFs of sub_140AA71F0 @ 0x140AA71F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DB870 @ 0x1402DB870 (sub_1402DB870.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 */

void __fastcall sub_140AA71F0(__int64 a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( *(int *)(a1 + 48) >= 0 )
  {
    v2 = sub_140A90660(
           NonPagedPool,
           576LL,
           0x20uLL,
           0x73556656u,
           LowPoolPriority,
           (__int64)&byte_140C5B0E0,
           1u,
           retaddr);
    if ( v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 184LL);
      v4 = *(_QWORD *)(v3 - 8);
      *v2 = *(_OWORD *)v4;
      v2[1] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v3 - 8) = v2;
      sub_1402DB870((_SLIST_ENTRY *)v4);
    }
  }
}
