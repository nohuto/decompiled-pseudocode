/*
 * XREFs of sub_14059AEEC @ 0x14059AEEC
 * Callers:
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 * Callees:
 *     sub_140216D20 @ 0x140216D20 (sub_140216D20.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059CFBC @ 0x14059CFBC (sub_14059CFBC.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 */

int __fastcall sub_14059AEEC(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KIRQL v4; // al
  unsigned __int64 v5; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  int *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v17[22]; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  FileInformation = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 16LL;
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v2;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) == 0 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_12:
    sub_14059CFBC(v2, (int)v17, (int)sub_14059B0B0, (int)Object, Object);
    v12 = &Object[10];
    v13 = (__int64 *)(v2 + 16736);
    do
    {
      v11 = (unsigned int)*v12;
      if ( (_DWORD)v11 )
      {
        v14 = *v13;
        FileInformation = v11 << 12;
        LODWORD(v11) = IoSetInformation(*(PFILE_OBJECT *)(v14 + 56), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v13;
      ++v12;
      --v3;
    }
    while ( v3 );
    return v11;
  }
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1344));
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  LODWORD(v11) = sub_140216D20(*(_QWORD *)(v2 + 17256), *(_QWORD *)(v2 + 17496));
  if ( (_DWORD)v11 )
  {
    Object[8] = 16;
    goto LABEL_12;
  }
  return v11;
}
