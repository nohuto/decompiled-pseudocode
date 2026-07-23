/*
 * XREFs of MiZeroAndFlushPtes @ 0x1403360EC
 * Callers:
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x14062F5F0 (MmMapMdl.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201D04 (MiWriteTopLevelPxe.c)
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  int v8; // eax
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  unsigned __int64 v21; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h]
  _QWORD v25[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v26[32]; // [rsp+118h] [rbp+10h] BYREF

  memset(v25, 0, 0xB8uLL);
  v21 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 1LL;
  v8 = MI_IS_PHYSICAL_ADDRESS(a1);
  v9 = v8;
  if ( v8 > 0 )
  {
    v19 = (unsigned int)v8;
    do
    {
      v7 <<= 9;
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v19;
    }
    while ( v19 );
  }
  LODWORD(v10) = 0;
  if ( a3 )
  {
    v25[3] = 0LL;
    LODWORD(v25[1]) = 20;
  }
  v11 = MiSwizzleInvalidPte(768LL);
  while ( 1 )
  {
    v12 = a2 % v7;
    v24 = a2 % v7;
    v23 = v6 + 8 * (a2 / v7);
    if ( v6 >= v23 )
    {
      v15 = v21;
    }
    else
    {
      v22 = v7 << 12;
      do
      {
        v13 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 == 3 )
        {
          MiWriteTopLevelPxe((_QWORD *)v6, ZeroPte);
        }
        else if ( v9 >= 1 )
        {
          *(_QWORD *)v6 = v11;
        }
        else
        {
          *(_QWORD *)v6 = ZeroPte;
        }
        if ( a3 )
        {
          if ( v9 < 1 )
            MiInsertTbFlushEntry((__int64)v25, v21, 1LL, v9);
          else
            MiInsertLargeTbFlushEntry((__int64)v25, v9, v6);
        }
        if ( v13 > qword_140C65BA0 || ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
        {
          if ( (_DWORD)v10 && (v18 = v26[2 * (unsigned int)(v10 - 1) + 1], v18 == v13) )
          {
            v26[2 * (unsigned int)(v10 - 1) + 1] = v7 + v18;
          }
          else
          {
            v14 = 2LL * (unsigned int)v10;
            LODWORD(v10) = v10 + 1;
            v26[v14] = v13;
            v26[v14 + 1] = v13 + v7;
            if ( (_DWORD)v10 == 16 )
            {
              if ( a3 )
                MiFlushTbList((int *)v25);
              v20 = v26;
              v10 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v20, v20[1] - *v20);
                v20 += 2;
                --v10;
              }
              while ( v10 );
            }
          }
        }
        v6 += 8LL;
        v15 = v22 + v21;
        v21 += v22;
      }
      while ( v6 < v23 );
      v12 = v24;
    }
    if ( !v12 )
      break;
    v7 = 1LL;
    v9 = 0;
    a2 = v12;
    v6 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( a3 )
    MiFlushTbList((int *)v25);
  v16 = (unsigned int)v10;
  if ( (_DWORD)v10 )
  {
    v17 = v26;
    do
    {
      MiDereferenceIoPages(1LL, *v17, v17[1] - *v17);
      v17 += 2;
      --v16;
    }
    while ( v16 );
  }
}
