/*
 * XREFs of sub_140690198 @ 0x140690198
 * Callers:
 *     sub_140690150 @ 0x140690150 (sub_140690150.c)
 *     CmRegisterCallback @ 0x1408651C0 (CmRegisterCallback.c)
 *     CmRegisterCallbackEx @ 0x14090FD10 (CmRegisterCallbackEx.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406902B4 @ 0x1406902B4 (sub_1406902B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140690198(__int64 a1, __int64 a2, const void **a3, char a4, unsigned __int8 a5, _QWORD *a6)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  PVOID v13; // rax
  __int64 v14; // rdx
  int v15; // edi
  void *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  v18 = 0LL;
  sub_140347770((__int64)&v18);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x62634D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  v11[1] = v11;
  v11[9] = v11 + 8;
  v11[8] = v11 + 8;
  v12 = *((_DWORD *)v11 + 5) ^ a5;
  *v11 = v11;
  *((_DWORD *)v11 + 5) ^= v12 & 1;
  *((_DWORD *)v11 + 4) = 0;
  v11[4] = a2;
  v11[5] = a1;
  LOWORD(v12) = *(_WORD *)a3;
  *((_WORD *)v11 + 25) = *(_WORD *)a3;
  *((_WORD *)v11 + 24) = v12;
  v13 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3, 0x61634D43u);
  v11[7] = v13;
  if ( v13 )
  {
    memmove(v13, a3[1], *(unsigned __int16 *)a3);
    LOBYTE(v14) = a4;
    v15 = sub_1406902B4(v11, v14);
    *a6 = v11[3];
    if ( v15 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v15 = -1073741670;
  }
  v17 = (void *)v11[7];
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v11, 0);
LABEL_4:
  sub_14022EA30((__int64 *)&v18);
  return (unsigned int)v15;
}
