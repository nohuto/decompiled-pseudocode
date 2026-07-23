/*
 * XREFs of SepTokenFromAccessInformation @ 0x14022833C
 * Callers:
 *     SeAccessCheckFromState @ 0x1402287A0 (SeAccessCheckFromState.c)
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14035F290 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeTokenFromAccessInformation @ 0x140368770 (SeTokenFromAccessInformation.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140228520 (RtlSidHashInitialize.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SepTokenFromAccessInformation(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  __int64 result; // rax

  memset((void *)a2, 0, 0x498uLL);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 192) = v4;
  if ( v4 == 2 )
    *(_DWORD *)(a2 + 196) = *(_DWORD *)(a1 + 36);
  v5 = *(unsigned int **)(a1 + 16);
  v6 = 0;
  v7 = *v5;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( v7 )
  {
    v8 = v5 + 3;
    v9 = v7;
    do
    {
      v10 = *(v8 - 2);
      if ( (unsigned int)(v10 - 2) <= 0x22 )
      {
        *(_QWORD *)(a2 + 64) |= 1LL << v10;
        if ( (*v8 & 2) != 0 )
          *(_QWORD *)(a2 + 72) |= 1LL << v10;
        if ( (*v8 & 1) != 0 )
          *(_QWORD *)(a2 + 80) |= 1LL << v10;
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)(a2 + 124) = **(_DWORD **)a1;
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  RtlSidHashInitialize(
    *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)a1 + 8LL),
    **(_DWORD **)a1,
    (PSID_AND_ATTRIBUTES_HASH)(a2 + 232));
  *(_DWORD *)(a2 + 128) = **(_DWORD **)(a1 + 8);
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  RtlSidHashInitialize(
    *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)(a1 + 8) + 8LL),
    **(_DWORD **)(a1 + 8),
    (PSID_AND_ATTRIBUTES_HASH)(a2 + 504));
  *(_DWORD *)(a2 + 800) = **(_DWORD **)(a1 + 64);
  *(_QWORD *)(a2 + 792) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  RtlSidHashInitialize(
    *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)(a1 + 64) + 8LL),
    **(_DWORD **)(a1 + 64),
    (PSID_AND_ATTRIBUTES_HASH)(a2 + 808));
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
    *(_QWORD *)(a2 + 784) = v11;
  v12 = *(_QWORD *)(a1 + 72);
  if ( v12 )
    *(_QWORD *)(a2 + 1104) = v12;
  v13 = *(_DWORD *)(a1 + 44);
  v14 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 208) = -1;
  *(_DWORD *)(a2 + 200) = v13;
  *(_DWORD *)(a2 + 212) = *(_DWORD *)(a1 + 40);
  if ( v14 )
  {
    v15 = (_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
    do
    {
      if ( (*v15 & 0x40) != 0 && *(_DWORD *)(a2 + 208) == -1 )
        *(_DWORD *)(a2 + 208) = v6;
      ++v6;
      v15 += 4;
    }
    while ( v6 < v14 );
  }
  result = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a2 + 776) = result;
  return result;
}
