/*
 * XREFs of sub_140A1E118 @ 0x140A1E118
 * Callers:
 *     sub_140A1F9F4 @ 0x140A1F9F4 (sub_140A1F9F4.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140A1D4A4 @ 0x140A1D4A4 (sub_140A1D4A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1E118(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // r8
  int v7; // r9d
  __int64 v8; // rcx
  _OWORD *PoolWithTag; // rax
  void *v10; // rbp
  void *v11; // rdx
  __int64 v12; // r8
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  Src = 0LL;
  v14 = 0LL;
  v3 = sub_140812B74(a1, (unsigned int *)&qword_14003C210, &v14);
  if ( v3 < 0 )
    goto LABEL_17;
  v4 = sub_140A1D4A4((__int64)v14, 0x24000001u, (GUID **)&Src, &v15);
  v3 = v4;
  if ( v4 == -1073741275 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( v4 >= 0 )
  {
    v5 = v15;
LABEL_6:
    v6 = Src;
    v7 = 0;
    if ( v5 >> 4 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a2 + 16) - *v6;
        if ( !v8 )
          v8 = *(_QWORD *)(a2 + 24) - v6[1];
        if ( !v8 )
          break;
        v6 += 2;
        if ( ++v7 >= v5 >> 4 )
          goto LABEL_11;
      }
      v3 = 0;
    }
    else
    {
LABEL_11:
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5 + 16LL, 0x4B444342u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = Src;
        *PoolWithTag = *(_OWORD *)(a2 + 16);
        memmove(PoolWithTag + 1, v11, v5);
        v3 = sub_140803250(v14, 0x24000001u, v12, (__int64)v10, v5 + 16);
        ExFreePoolWithTag(v10, 0x4B444342u);
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_17:
  if ( v14 )
    sub_140812D00((__int64)v14);
  return (unsigned int)v3;
}
