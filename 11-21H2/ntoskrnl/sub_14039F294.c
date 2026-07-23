/*
 * XREFs of sub_14039F294 @ 0x14039F294
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 */

int __fastcall sub_14039F294(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned __int64 *v17; // rcx

  v3 = (a1 >> 13) & 0x3FFFF;
  v4 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v5, v3);
  v7 = v4 & 0x1FF;
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)qword_140C10DB0 + 8LL * (v5 - 2))
                                      + 8LL * (v3 ^ (1 << v5))
                                      + 8)
                          + 8 * v7);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    sub_14029F120(v9, a2, a3);
  v10 = 1;
  LODWORD(v11) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v12) = v11;
  if ( (unsigned int)v11 > 1 )
  {
    do
    {
      _BitScanReverse(&v13, v3);
      v14 = v3 ^ (1 << v13);
      v11 = *(_QWORD *)(*(_QWORD *)(qword_140C10DB0 + 8LL * v10) + 8LL * (v13 - 2));
      if ( _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v14 + 8) + 8 * v7), 0LL) )
      {
        _BitScanReverse(&v15, v3);
        v12 = (unsigned int)(v12 - 1);
        v16 = v3 ^ (1 << v15);
        v11 = *(_QWORD *)(*(_QWORD *)(qword_140C10DB0 + 8 * v12) + 8LL * (v15 - 2));
        v17 = (unsigned __int64 *)(*(_QWORD *)(v11 + 8 * v16 + 8) + 8 * v7);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
          LODWORD(v11) = sub_14029F120(v17, a2, a3);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v12 );
  }
  return v11;
}
