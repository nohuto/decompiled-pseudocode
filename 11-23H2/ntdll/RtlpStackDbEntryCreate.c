/*
 * XREFs of RtlpStackDbEntryCreate @ 0x18012DF20
 * Callers:
 *     RtlStackDbStackAdd @ 0x18012D754 (RtlStackDbStackAdd.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x18012DE94 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E188 (RtlpStackDbSegmentFindOrCreate.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // esi
  __int64 *v13; // r14
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]

  v5 = (unsigned int)(*(_DWORD *)a2 + 7) >> 3;
  v7 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * v5 + 24, *(_QWORD *)(a1 + 64));
  v8 = 0LL;
  v9 = (__int64)v7;
  if ( v7 )
  {
    memset_thunk_772440563353939046(v7, 0, 8 * v5 + 24);
    v10 = *(_DWORD *)(v9 + 16) & 0xFF000001;
    *(_QWORD *)(v9 + 8) = a3;
    v11 = 0;
    *(_DWORD *)(v9 + 16) = v10 | 1;
    *(_BYTE *)(v9 + 19) = *(_BYTE *)a2;
    v12 = *(_DWORD *)a2;
    if ( v5 )
    {
      v13 = (__int64 *)(v9 + 24);
      while ( 1 )
      {
        v14 = v12;
        if ( v12 > 8 )
          v14 = 8;
        v19 = *(_QWORD *)(a2 + 8) + 64LL * v11;
        v18 = v14;
        v15 = RtlpStackDbSegmentFindOrCreate(a1, &v18);
        if ( !v15 )
          break;
        *v13++ = v15;
        v16 = v12 - 8;
        ++v11;
        if ( v12 <= 8 )
          v16 = v12;
        v12 = v16;
        if ( v11 >= v5 )
          return v9;
      }
      RtlpStackDbEntryCleanup(a1, v9);
    }
    else
    {
      return v9;
    }
  }
  return v8;
}
