/*
 * XREFs of sub_140562A80 @ 0x140562A80
 * Callers:
 *     sub_14056322C @ 0x14056322C (sub_14056322C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140562E40 @ 0x140562E40 (sub_140562E40.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 */

__int64 sub_140562A80()
{
  __int64 v0; // rax
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  PHYSICAL_ADDRESS v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  size_t v26; // rbx
  char *v27; // rdi
  char *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  _QWORD v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v35[16]; // [rsp+B8h] [rbp-50h] BYREF

  v33[0] = 0LL;
  v0 = *(unsigned int *)(qword_140C448A8 + 180);
  v1 = *(_QWORD *)(qword_140C448A8 + 144);
  v2 = 3 * v0;
  v3 = *(_QWORD *)(v1 + 24 * v0);
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
  {
    MmUnmapReservedMapping(*(PVOID *)(v1 + 24 * v0 + 8), 0x51706E50u, *(PMDL *)(v1 + 24 * v0));
    v3 = *(_QWORD *)(v1 + 8 * v2);
  }
  memset(Src, 0, sizeof(Src));
  memset(v35, 0, sizeof(v35));
  v4 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(v3 & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))sub_140562E40)((PHYSICAL_ADDRESS)PhysicalAddress.QuadPart, v33) >= 0
    && v33[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 1;
    v35[0] = v33[0] >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v6 = *(_QWORD *)(v1 + 8 * v2 + 8);
  v7 = v6 + 0x10000;
  while ( v6 < v7 )
  {
    v8 = sub_14033AC10(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !v4 || v8 != Src[v4 - 1] )
    {
      v9 = v8 << 12;
      if ( (int)sub_140562E40(v9, v33) >= 0 && v33[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v10 = v4;
        v11 = v33[0] >> 12;
        ++v4;
        Src[v10] = v9 >> 12;
        v35[v10] = v11;
      }
    }
    v6 += 4096LL;
  }
  v12 = *(unsigned int *)(qword_140C448A8 + 180);
  v13 = *(_QWORD *)(qword_140C448A8 + 136);
  v14 = 3 * v12;
  v15 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v13 + 24 * v12) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))sub_140562E40)((PHYSICAL_ADDRESS)v15.QuadPart, v33) >= 0
    && v33[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v4 >= 0x10 )
      return 3221225485LL;
    v16 = v4;
    v17 = v33[0] >> 12;
    ++v4;
    Src[v16] = (unsigned __int64)v15.QuadPart >> 12;
    v35[v16] = v17;
  }
  v18 = *(_QWORD *)(v13 + 8 * v14 + 8);
  v19 = v18 + 0x10000;
  while ( v18 < v19 )
  {
    v20 = sub_14033AC10(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v4 > 0x10 )
      return 3221225485LL;
    if ( !v4 || v20 != Src[v4 - 1] )
    {
      v21 = v20 << 12;
      if ( (int)sub_140562E40(v21, v33) >= 0 && v33[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v22 = v4;
        v23 = v33[0] >> 12;
        ++v4;
        Src[v22] = v21 >> 12;
        v35[v22] = v23;
      }
    }
    v18 += 4096LL;
  }
  if ( !v4 )
    return 0LL;
  v24 = *(_QWORD *)(v1 + 8 * v2);
  v25 = v4;
  *(_DWORD *)(v24 + 40) = v4 << 13;
  *(_QWORD *)v24 = 0LL;
  *(_WORD *)(v24 + 10) = 0;
  v26 = 8LL * v4;
  *(_QWORD *)(v24 + 32) = 0LL;
  *(_DWORD *)(v24 + 44) = 0;
  *(_WORD *)(v24 + 8) = 8 * (2 * v4 + 6);
  v27 = (char *)(*(_QWORD *)(v1 + 8 * v2) + 48LL);
  memmove(v27, Src, v26);
  memmove(&v27[v26], v35, v26);
  *(_WORD *)(*(_QWORD *)(v1 + 8 * v2) + 10LL) |= *(_WORD *)(v1 + 8 * v2 + 16);
  v28 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v1 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v1 + 8 * v2),
                  MmCached);
  if ( v28 )
  {
    memmove(&v28[4096 * v25], v28, v25 << 12);
    return 0LL;
  }
  v29 = qword_140C448A8;
  v30 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v30 )
    v30 = 5980;
  *(_DWORD *)(qword_140C448A8 + 33272) = v30;
  v31 = *(_DWORD *)(v29 + 33276);
  if ( !v31 )
    v31 = 10;
  *(_DWORD *)(v29 + 33276) = v31;
  return 3221225626LL;
}
