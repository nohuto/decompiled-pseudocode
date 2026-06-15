/*
 * XREFs of ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x14001AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x14001AE00 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessServerMemory::SerializeForRPC(
        CCrossProcessServerMemory *this,
        struct CP_MEMORY_METADATA_BLOB *a2)
{
  __int64 v4; // rdx
  int *v5; // rax
  struct CP_MEMORY_METADATA_BLOB *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v20[78]; // [rsp+20h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  memset_0(v20, 0, 0x128uLL);
  v4 = 2LL;
  v5 = v20;
  v6 = a2;
  do
  {
    v7 = *((_OWORD *)v5 + 1);
    *(_OWORD *)v6 = *(_OWORD *)v5;
    v8 = *((_OWORD *)v5 + 2);
    *((_OWORD *)v6 + 1) = v7;
    v9 = *((_OWORD *)v5 + 3);
    *((_OWORD *)v6 + 2) = v8;
    v10 = *((_OWORD *)v5 + 4);
    *((_OWORD *)v6 + 3) = v9;
    v11 = *((_OWORD *)v5 + 5);
    *((_OWORD *)v6 + 4) = v10;
    v12 = *((_OWORD *)v5 + 6);
    *((_OWORD *)v6 + 5) = v11;
    v13 = *((_OWORD *)v5 + 7);
    v5 += 32;
    *((_OWORD *)v6 + 6) = v12;
    v6 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v6 + 128);
    *((_OWORD *)v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *(_OWORD *)v5;
  v15 = *((_OWORD *)v5 + 1);
  v16 = *((_QWORD *)v5 + 4);
  *(_OWORD *)v6 = v14;
  *((_OWORD *)v6 + 1) = v15;
  *((_QWORD *)v6 + 4) = v16;
  v17 = CCrossProcessBaseMemory::SerializeForRPC(this, (struct CP_MEMORY_METADATA_BLOB *)((char *)a2 + 8));
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)(unsigned int)v17,
      v20[0]);
    return v18;
  }
  else
  {
    *(_DWORD *)a2 = 1;
    return 0LL;
  }
}
