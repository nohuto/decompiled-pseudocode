/*
 * XREFs of sub_140633504 @ 0x140633504
 * Callers:
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406334C4 @ 0x1406334C4 (sub_1406334C4.c)
 *     sub_1406334E8 @ 0x1406334E8 (sub_1406334E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140633504(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  _QWORD *Pool2; // rax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  char *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // edi
  __int64 v16; // r10
  __int64 v17; // r12
  _QWORD *v18; // r9
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  __int64 v26; // r8
  bool v27; // zf
  __int64 v29; // [rsp+28h] [rbp-30h]
  __int64 v30; // [rsp+78h] [rbp+20h]

  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1333228613LL);
  v8 = Pool2;
  if ( !Pool2 )
    return (char)Pool2;
  Pool2[1] = a3;
  Pool2[2] = a2;
  Pool2[3] = a1;
  v9 = ExAcquireSpinLockExclusive(&dword_140C15CF0);
  if ( dword_140C15CE0 >= 2 * ((unsigned int)dword_140C15CE4 >> 5) )
  {
    v10 = 2 * ((unsigned int)dword_140C15CE4 >> 5);
    if ( (unsigned int)v10 < 4 )
      v10 = 4LL;
    v11 = (char *)sub_1406334C4(8LL * (unsigned int)v10);
    if ( v11 )
    {
      if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
      {
        v12 = -1;
        do
        {
          ++v12;
          LODWORD(v10) = (unsigned int)v10 >> 1;
        }
        while ( (_DWORD)v10 );
        v10 = (unsigned int)(1 << v12);
      }
      if ( (unsigned int)v10 > 0x4000000 )
        v10 = 0x4000000LL;
      v13 = (unsigned int)v10;
      if ( v11 > &v11[8 * v10] )
        v13 = 0LL;
      if ( v13 )
        memset64(v11, (unsigned __int64)&dword_140C15CE0 + 1, v13);
      v14 = dword_140C15CE4;
      v15 = 0;
      v16 = -1LL << (dword_140C15CE4 & 0x1F);
      if ( (dword_140C15CE4 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v17 = qword_140C15CE8;
          while ( 1 )
          {
            v18 = *(_QWORD **)(v17 + 8LL * v15);
            if ( ((unsigned __int8)v18 & 1) != 0 )
              break;
            *(_QWORD *)(v17 + 8LL * v15) = *v18;
            v30 = v16 & v18[1];
            v19 = (37
                 * (BYTE6(v30)
                  + 37
                  * (BYTE5(v30)
                   + 37
                   * (BYTE4(v30)
                    + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                 + HIBYTE(v30)) & (unsigned int)(v10 - 1);
            *v18 = *(_QWORD *)&v11[8 * v19];
            *(_QWORD *)&v11[8 * v19] = v18;
          }
          v14 = dword_140C15CE4;
          ++v15;
        }
        while ( v15 < (unsigned int)dword_140C15CE4 >> 5 );
      }
      v20 = (void *)qword_140C15CE8;
      qword_140C15CE8 = (__int64)v11;
      dword_140C15CE4 = (32 * v10) | v14 & 0x1F;
      if ( v20 )
        sub_1406334E8(v20);
    }
    else if ( (dword_140C15CE4 & 0xFFFFFFE0) == 0 )
    {
      goto LABEL_25;
    }
  }
  v6 = 1;
  v29 = v8[1] & (-1LL << (dword_140C15CE4 & 0x1F));
  v21 = qword_140C15CE8;
  v22 = (37
       * (BYTE6(v29)
        + 37
        * (BYTE5(v29)
         + 37
         * (BYTE4(v29)
          + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
       + HIBYTE(v29)) & (((unsigned int)dword_140C15CE4 >> 5) - 1);
  *v8 = *(_QWORD *)(qword_140C15CE8 + 8 * v22);
  *(_QWORD *)(v21 + 8 * v22) = v8;
  ++dword_140C15CE0;
LABEL_25:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C15CF0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v26 = *((_QWORD *)CurrentPrcb + 4375);
        v27 = (v25 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v25;
        if ( v27 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( !v6 )
    ExFreePoolWithTag(v8, 0x4F777445u);
  LOBYTE(Pool2) = v6;
  return (char)Pool2;
}
