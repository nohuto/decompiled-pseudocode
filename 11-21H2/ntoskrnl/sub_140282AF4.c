/*
 * XREFs of sub_140282AF4 @ 0x140282AF4
 * Callers:
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     sub_1402590D8 @ 0x1402590D8 (sub_1402590D8.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14027FB60 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402767FC @ 0x1402767FC (sub_1402767FC.c)
 */

char __fastcall sub_140282AF4(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  _BYTE *v6; // rax
  int v7; // edx
  __int64 v8; // r11
  char v9; // r9

  v3 = *(_BYTE **)(a1 + 528);
  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  LOBYTE(v4) = byte_140C54C58;
  if ( byte_140C54C58 == 1 )
    v5 = *(_QWORD *)(a1 + 592);
  else
    v5 = 0LL;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    if ( byte_140C54C58 == 1 )
      v6 = *(_BYTE **)(a1 + 592);
    else
      v6 = v3;
    v6[986] = 1;
    v7 = *(_DWORD *)(a1 + 152);
    v4 = *(_DWORD *)(a1 + 112);
    if ( (v7 & 0x10000) != 0 )
    {
      if ( !v4 )
        sub_1402767FC(a1);
      v9 = 1;
      LOBYTE(a3) = 1;
    }
    else
    {
      if ( v4 || (v7 & 0x20) != 0 )
        return v4;
      sub_1402767FC(a1);
      LOBYTE(a3) = v8 != 0;
      v9 = 0;
    }
    LOBYTE(v4) = sub_140276758(v3, v5, a3, v9);
  }
  return v4;
}
