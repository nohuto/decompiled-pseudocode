/*
 * XREFs of sub_140A64A00 @ 0x140A64A00
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405313B4 @ 0x1405313B4 (sub_1405313B4.c)
 *     sub_1405323B0 @ 0x1405323B0 (sub_1405323B0.c)
 *     sub_140532C98 @ 0x140532C98 (sub_140532C98.c)
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 */

__int64 __fastcall sub_140A64A00(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 *v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rdx
  size_t v14; // r14
  bool v15; // zf
  __int64 v16; // rax
  void *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int16 v21; // r8
  __int16 v22; // ax
  int v23; // edx
  __int64 v24; // rax
  _QWORD *v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // r11
  unsigned int i; // ecx
  __int64 v29; // rdx
  __int16 v30; // r9
  char v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v39; // rcx
  signed __int32 v40[8]; // [rsp+8h] [rbp-79h] BYREF
  char v41; // [rsp+58h] [rbp-29h]
  unsigned int v42; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v43; // [rsp+60h] [rbp-21h] BYREF
  int v44; // [rsp+68h] [rbp-19h]
  __int128 v45; // [rsp+70h] [rbp-11h]
  __int128 v46; // [rsp+80h] [rbp-1h]
  _QWORD v47[4]; // [rsp+90h] [rbp+Fh] BYREF

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v41 = a3;
  v42 = 0;
  v43 = 0LL;
  v44 = v3;
  v45 = 0LL;
  v46 = 0LL;
  if ( !a2 )
  {
    result = sub_1403B38C8(a1, 0LL, 4, 8LL, &qword_140C49C78);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_38;
    if ( v4 == 2 && !qword_140D017E0 )
    {
      v7 = sub_14042A5E0(-1LL, 1LL);
      qword_140C49C98 = v7;
      if ( !v7 )
        return 3221225473LL;
      v8 = (void *)sub_1403BE7F0(v7, 4096LL, (*(unsigned __int8 *)(a1 + 16) >> 5) & 1);
      qword_140D017E0 = (__int64)v8;
      if ( !v8 )
        return 3221225473LL;
      memset(v8, 0, 0x1000uLL);
    }
    result = sub_140A64868(a1);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1 || (v9 = sub_1403BE7F0(*(_QWORD *)(a1 + 8), 8256LL, 0), (*(_QWORD *)a1 = v9) != 0LL) )
    {
      v10 = 0;
      v11 = v47;
      v12 = (_QWORD *)(a1 + 24);
      do
      {
        if ( v10 )
        {
          if ( v10 == 3 )
          {
            v13 = 2LL;
            v14 = 0x2000LL;
          }
          else
          {
            v13 = 1LL;
            v14 = 4096LL;
          }
        }
        else
        {
          v13 = 512LL;
          v14 = 0x200000LL;
        }
        v15 = *v12 == 0LL;
        v12[2] = v14;
        if ( v15 )
        {
          v16 = sub_14042A5E0(-1LL, v13);
          v12[1] = v16;
          if ( !v16 )
            return 3221225473LL;
          v17 = (void *)sub_1403BE7F0(*(_QWORD *)(a1 + 24LL * v10 + 32), v14, 0);
          *v12 = v17;
          if ( !v17 )
            return 3221225473LL;
          memset(v17, 0, v14);
          v18 = 0;
          if ( !v10 )
          {
            v19 = *(_QWORD *)(a1 + 24);
            v42 = 0;
            do
            {
              v20 = 0LL;
              v21 = 0;
              v43 = 0LL;
              if ( v4 == 2 )
              {
                v22 = sub_1405323B0(a1, (int *)&v42, (unsigned __int64 *)&v43);
                v20 = v43;
                v21 = v22;
                v23 = 2;
              }
              else
              {
                v23 = 0;
              }
              sub_1405313B4(a1, 0LL, 0, v21, v23, v20, 0LL, (__int64)&xmmword_140C49C40, v19 + 32LL * v18++);
              v42 = v18;
            }
            while ( v18 < 0x10000 );
          }
        }
        ++v10;
        v24 = v12[1] / 4096LL;
        v12 += 3;
        *v11++ = v24;
      }
      while ( v10 < 4 );
      if ( v4 != 2 || v41 || (int)sub_140532C98(a1) >= 0 )
      {
        v25 = (_QWORD *)(a1 + 64);
        v26 = 0LL;
        v27 = 3LL;
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v25 >> 4 )
              break;
          }
          v25 += 3;
          v29 = *(_QWORD *)((char *)&v45 + v26 + 8) ^ (*(_QWORD *)((char *)&v45 + v26 + 8) ^ (v47[v26 / 8 + 1] << 12)) & 0xFFFFFFFFFF000LL;
          *(_QWORD *)((char *)&v45 + v26 + 8) = v29 ^ (v29 ^ ((unsigned __int64)i << 56)) & 0xF00000000000000LL;
          v26 += 8LL;
          --v27;
        }
        while ( v27 );
        v3 = v44;
LABEL_38:
        **(_QWORD **)a1 = ((v47[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v45 + 1);
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v46;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v40, 0);
        v30 = *(_WORD *)(a1 + 18);
        if ( (v30 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v46 + 1);
          _InterlockedOr(v40, 0);
          v30 = *(_WORD *)(a1 + 18);
        }
        v31 = *(_BYTE *)(a1 + 16);
        v32 = (2LL * (v31 & 1) + 69637) | 0x100;
        if ( (v31 & 2) == 0 )
          v32 = 2LL * (*(_BYTE *)(a1 + 16) & 1) + 69637;
        v33 = v32 | 0x200;
        if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
          v33 = v32;
        v34 = v33 | 0x400;
        if ( (v31 & 0x20) == 0 )
          v34 = v33;
        v35 = v34 | 0x800;
        if ( (v31 & 8) == 0 )
          v35 = v34;
        v36 = v35 | 0x800000A000LL;
        if ( (v30 & 4) == 0 )
          v36 = v35;
        v37 = v36 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFF0000000000002LL | (8
                                                                               * ((PhysicalAddress.QuadPart >> 3) & 0x1FFFFFFFFFFFFLL)) | 0x1000000000000005LL;
        }
        v39 = v37 | 0xC000000020000LL;
        if ( !v3 )
          v39 = v37;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v39;
        _InterlockedOr(v40, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v40, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
