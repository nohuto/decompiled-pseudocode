/*
 * XREFs of sub_14079D6B0 @ 0x14079D6B0
 * Callers:
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 */

__int64 __fastcall sub_14079D6B0(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbp
  int v6; // r12d
  PVOID v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  void *v11; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = (*(_DWORD *)(a1 + 16) == 3) + 1;
  v5 = -(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL;
  v6 = 0;
  while ( 1 )
  {
    v7 = sub_1402828F0(64, v5 + 136, 0x46646156u);
    v8 = (__int64)v7;
    if ( !v7 )
      break;
    v9 = sub_14079D7A8(v7);
    if ( v9 < 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 40) = 0;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v9 = sub_1406FC590(**(_QWORD ***)(v2 + 72), v3, 0);
      if ( v9 < 0 )
        goto LABEL_9;
      *(_DWORD *)(a1 + 40) |= 1u;
    }
    v9 = sub_1407B88C0(v8, v3);
    if ( v9 < 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 40) |= 2u;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v11 = *(void **)(v8 + 128);
      if ( v11 )
        ObfReferenceObject(v11);
      v9 = sub_14058C330(v8, 1);
      if ( v9 < 0 )
        goto LABEL_9;
      *(_DWORD *)(a1 + 40) |= 4u;
    }
    if ( ++v6 >= v4 )
      return (unsigned int)v9;
  }
  v9 = -1073741670;
LABEL_9:
  sub_14097ECFC(a1);
  return (unsigned int)v9;
}
