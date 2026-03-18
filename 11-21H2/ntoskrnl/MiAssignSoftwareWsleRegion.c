/*
 * XREFs of MiAssignSoftwareWsleRegion @ 0x1403C3A30
 * Callers:
 *     MiInitializeSystemVa @ 0x140B071D0 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiAssignSoftwareWsleRegion(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int i; // edi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int16 v9; // ax
  __int64 result; // rax
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-49h] BYREF
  int v12; // [rsp+30h] [rbp-39h]
  _DWORD v13[9]; // [rsp+34h] [rbp-35h] BYREF
  __int64 v14; // [rsp+58h] [rbp-11h]
  signed __int32 v15[16]; // [rsp+60h] [rbp-9h] BYREF

  memset(v13, 0, 12);
  memset(&v13[6], 0, 12);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v15, 0, sizeof(v15));
  BitMapHeader.Buffer = (unsigned int *)v15;
  if ( (MI_READ_PTE_LOCK_FREE(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0 )
  {
    v4 = (__int64)((8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
    for ( i = 0; i < 0x200; ++i )
    {
      if ( MI_READ_PTE_LOCK_FREE(v4) )
        _bittestandset(v15, i);
      v4 += 8LL;
    }
  }
  v13[5] = 1;
  v6 = a2 & 0xFFFFFF8000000000uLL;
  v7 = &v13[1];
  v12 = 0;
  *(_QWORD *)&v13[3] = 0x1000000000LL;
  v8 = 2LL;
  v14 = 0x80000000LL;
  do
  {
    v9 = ExGenRandom(1);
    *v7 = v6
        + ((unsigned __int64)RtlFindClearBitsAndSet(
                               &BitMapHeader,
                               ((unsigned __int64)(v7[1] + 0x3FFFFFFFLL) >> 30) + 1,
                               v9 & 0x1FF) << 30);
    v7 += 3;
    --v8;
  }
  while ( v8 );
  qword_140C51BB8 = *(_QWORD *)&v13[1];
  qword_140C51BC0 = *(_QWORD *)&v13[1];
  qword_140C51BC8 = *(_QWORD *)&v13[1];
  qword_140C51AD8 = v14;
  qword_140C51AD0 = *(_QWORD *)&v13[7];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2960LL) = *(_QWORD *)&v13[7];
  result = qword_140C51AD8;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2968LL) = qword_140C51AD8;
  return result;
}
