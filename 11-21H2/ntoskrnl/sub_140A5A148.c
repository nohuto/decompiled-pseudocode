/*
 * XREFs of sub_140A5A148 @ 0x140A5A148
 * Callers:
 *     sub_140A59A7C @ 0x140A59A7C (sub_140A59A7C.c)
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D6F40 @ 0x1402D6F40 (sub_1402D6F40.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 */

__int64 __fastcall sub_140A5A148(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  PIMAGE_NT_HEADERS v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

  if ( !byte_140E01840 )
    return 1LL;
  if ( (unsigned int)sub_14082A644(a2, 20480LL) )
  {
    v4 = 0;
    if ( !(unsigned int)sub_14082A644(a1 + 40576, 4096LL) )
      goto LABEL_11;
    v4 = 1;
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = (_DWORD *)sub_1402D6F40((unsigned __int64)v6, 0x140000000LL, (unsigned int)sub_140AB5100 - 0x40000000);
      v8 = v7[2];
      if ( v8 <= v7[4] )
        v8 = v7[4];
      if ( !(unsigned int)sub_14082A644(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
      {
LABEL_11:
        sub_140978B04(a2, 0x5000uLL);
        if ( v4 )
          sub_140978B04(a1 + 40576, 0x1000uLL);
        return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
