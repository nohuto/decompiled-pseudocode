/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x140A37A2C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A34B28 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140A36350 (MiApplySingleSessionPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14028B650 (RtlSetBitsEx.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     RtlClearAllBitsEx @ 0x14033D480 (RtlClearAllBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  SIZE_T v6; // r12
  PVOID Pool; // rax
  unsigned __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int16 v11; // ax
  _RTL_BITMAP_EX *v12; // rbx
  unsigned __int64 *v13; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(**(_QWORD **)(a1 + 16) + 8LL);
  v6 = 8 * (((unsigned int)v5 >> 6) + ((v5 & 0x3F) != 0));
  Pool = MiAllocatePool(64, v6, 0x4D424450u);
  if ( !Pool )
    return 3221225626LL;
  v8 = (unsigned int)v5;
  *(_QWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = Pool;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 16) + 128LL;
  if ( *(_QWORD *)(a1 + 16) != -128LL )
  {
    do
    {
      v11 = *(_WORD *)(v10 + 32) >> 1;
      if ( (v11 & 2) == 0 && (!a2 || (v11 & 4) != 0) )
        RtlSetBitsEx(v3 + 48, v9, *(unsigned int *)(v10 + 44));
      v9 += *(_DWORD *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
  }
  v12 = *(_RTL_BITMAP_EX **)(a1 + 8);
  v13 = (unsigned __int64 *)MiAllocatePool(256, v6, 0x4D424450u);
  if ( !v13 )
    return 3221225626LL;
  v12[4].SizeOfBitMap = v8;
  v12[4].Buffer = v13;
  RtlClearAllBitsEx(v12 + 4);
  return 0LL;
}
