/*
 * XREFs of sub_1407646C0 @ 0x1407646C0
 * Callers:
 *     sub_140764604 @ 0x140764604 (sub_140764604.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140779680 @ 0x140779680 (sub_140779680.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407646C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 Pool2; // rax

  v3 = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v3 = sub_14077DE70(v6, 0x7FFFFFFFLL, 1466986064LL, a3 + 24);
    if ( v3 < 0 )
      goto LABEL_9;
  }
  v7 = *(_DWORD *)(a3 + 36);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(256LL, v7, 1466986064LL);
    *(_QWORD *)(a3 + 40) = Pool2;
    if ( !Pool2 )
    {
      v3 = -1073741670;
LABEL_9:
      sub_140779680(a3, 1466986064LL);
      *(_OWORD *)a3 = 0LL;
      *(_OWORD *)(a3 + 16) = 0LL;
      *(_OWORD *)(a3 + 32) = 0LL;
      return (unsigned int)v3;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)v3;
}
