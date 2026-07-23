/*
 * XREFs of sub_1406338CC @ 0x1406338CC
 * Callers:
 *     sub_140633468 @ 0x140633468 (sub_140633468.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406338CC(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  void *v4; // rdi
  unsigned __int64 v6; // rbp
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // r11d
  __int64 v11; // r8
  _QWORD *i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v15; // eax
  __int64 v16; // r8
  bool v17; // zf
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = ExAcquireSpinLockExclusive(&dword_140C15CF0);
  v7 = (unsigned int)dword_140C15CE4 >> 5;
  v8 = -1LL << (dword_140C15CE4 & 0x1F);
  v9 = a2 & v8;
  if ( (unsigned int)dword_140C15CE4 >> 5 )
  {
    v10 = v7 - 1;
    v19 = a2 & v8;
    v11 = qword_140C15CE8
        + 8LL
        * ((v7 - 1) & (HIBYTE(v19)
                     + 37
                     * (BYTE6(v19)
                      + 37
                      * (BYTE5(v19)
                       + 37
                       * (BYTE4(v19)
                        + 37
                        * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v9 + 11623883)))))))));
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v11 + 8)) )
      {
        if ( v11 )
        {
          v3 = *(_QWORD *)(v11 + 16);
          v4 = (void *)v11;
          if ( a1 )
            *a1 = *(_QWORD *)(v11 + 24);
          v20 = v8 & *(_QWORD *)(v11 + 8);
          for ( i = (_QWORD *)(qword_140C15CE8
                             + 8LL
                             * (v10 & (HIBYTE(v20)
                                     + 37
                                     * (BYTE6(v20)
                                      + 37
                                      * (BYTE5(v20)
                                       + 37
                                       * (BYTE4(v20)
                                        + 37
                                        * (BYTE3(v20)
                                         + 37
                                         * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883))))))))));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( *i == v11 )
            {
              *i = *(_QWORD *)v11;
              --dword_140C15CE0;
              *(_QWORD *)v11 |= 0x8000000000000002uLL;
              goto LABEL_13;
            }
          }
        }
        break;
      }
    }
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C15CF0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = (v15 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v15;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4F777445u);
  return v3;
}
