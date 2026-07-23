/*
 * XREFs of MiInitializeCommitment @ 0x140395D74
 * Callers:
 *     MiInitializePartition @ 0x1408375A0 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140396244 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(unsigned __int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  unsigned __int16 *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 16432) = (-(__int64)(*(_QWORD *)(a1 + 17040) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 16432) = 0LL;
  *(_QWORD *)(a1 + 16424) = 0LL;
  v2 = *(_BYTE *)(a1 + 559);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 512) = 1LL;
  *(_BYTE *)(a1 + 559) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 504) = a1;
  *(_DWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 556) = -1;
  *(_QWORD *)(a1 + 544) = a1 + 536;
  *(_QWORD *)(a1 + 536) = a1 + 536;
  *(_WORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 530) = 6;
  *(_DWORD *)(a1 + 532) = 0;
  v3 = *(_QWORD *)(a1 + 17216);
  if ( dword_140C65AFC )
  {
    v4 = *(unsigned __int16 **)(a1 + 6816);
    v5 = (unsigned int)dword_140C65AFC;
    v6 = *(_QWORD *)(a1 + 6808) - (_QWORD)v4;
    do
    {
      v3 += *(unsigned __int16 *)((char *)v4 + v6) + (unsigned __int64)*v4;
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  v7 = *(_QWORD *)(a1 + 17040);
  *(_QWORD *)(a1 + 17280) = v3;
  result = MiIncreaseCommitLimits(a1, v7, v7, 0, 0LL);
  v9 = *(_QWORD *)(a1 + 17040);
  if ( v9 != v3 )
    result = MiChargeCommit(a1, v9 - v3, 2uLL);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    qword_140C699A8 = *(_QWORD *)(a1 + 17576);
    qword_140C699A8 -= qword_140C699B0;
    result = qword_140C699D8;
    qword_140C699A8 -= qword_140C699D8;
  }
  return result;
}
