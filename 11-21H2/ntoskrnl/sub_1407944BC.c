/*
 * XREFs of sub_1407944BC @ 0x1407944BC
 * Callers:
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_140794AD0 @ 0x140794AD0 (sub_140794AD0.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1407944BC(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  signed __int64 *v9; // rbx
  __int64 v10; // rdi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]

  v14 = 0;
  v9 = (signed __int64 *)(a1 + 80);
  v10 = sub_140347C10(a1 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    sub_14029F350(v9, 0, v10, (__int64)v9);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  v11 = *(_DWORD **)(a1 + 88);
  if ( !v11 )
  {
    *a2 = 0;
    goto LABEL_11;
  }
  if ( v11 == (_DWORD *)1 )
  {
    *a2 = *(_DWORD *)(a1 + 96);
LABEL_11:
    *a5 = 0;
    goto LABEL_13;
  }
  *a2 = v11[3];
  *a5 = v11[2];
  v12 = v11[2];
  if ( a4 < v12 )
  {
    v14 = -1073741789;
  }
  else
  {
    memmove(a3, v11 + 4, v12);
    v14 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  sub_1402AFC00((ULONG_PTR)v9);
  return v14;
}
