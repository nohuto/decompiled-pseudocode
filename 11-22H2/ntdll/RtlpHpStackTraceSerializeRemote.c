/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x180116798
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x18011669C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  int Section; // ebx
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+60h] [rbp-29h] BYREF
  int v8; // [rsp+78h] [rbp-11h]
  unsigned __int64 v9; // [rsp+80h] [rbp-9h]
  char v10; // [rsp+B8h] [rbp+2Fh]
  signed __int64 i; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v12; // [rsp+108h] [rbp+7Fh]

  for ( i = 0x10000LL; ; i = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
  {
    memset_thunk_772440563353939046(v7, 0, 0x60uLL);
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      Section = NtCreateSection();
      if ( Section < 0 )
        return (unsigned int)Section;
      v7[0] = 0LL;
      v7[1] = i;
      v8 = 0x20000000;
    }
    else
    {
      v8 = 0x8000000;
    }
    v3 = RtlpHeapPerformCrossProcessQuery(*(_QWORD *)(a1 + 8), (__int64)v7);
    Section = v3;
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741789 )
      return (unsigned int)Section;
    NtClose(0LL);
  }
  if ( (v10 & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 1u;
  if ( *(_BYTE *)(a1 + 32) != 1 )
  {
    v12 = 0LL;
    if ( i > 0 )
    {
      v4 = 0LL;
      while ( v4 < v9 )
      {
        Section = ZwMapViewOfSection();
        if ( Section < 0 )
          return (unsigned int)Section;
        v5 = v12 + 0x10000 <= v9 ? 0x10000LL : v9 - v12;
        Section = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(0LL, v5, *(_QWORD *)(a1 + 24));
        if ( Section < 0 )
          return (unsigned int)Section;
        NtUnmapViewOfSection();
        v4 = v12 + 0x10000;
        v12 = v4;
        if ( (__int64)v4 >= i )
          break;
      }
    }
    return 0;
  }
  return (unsigned int)Section;
}
