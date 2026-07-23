/*
 * XREFs of sub_14027DD28 @ 0x14027DD28
 * Callers:
 *     sub_14027B6A4 @ 0x14027B6A4 (sub_14027B6A4.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x1402E28A0 (RtlInterlockedSetClearRun.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14027DD28(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // edi
  ULONG v7; // esi
  ULONG v8; // r8d
  ULONG v9; // edx
  int v10; // r9d
  char *v11; // r10
  unsigned int v12; // r11d
  ULONG v13; // ecx
  __int64 *v14; // rdi
  __int64 i; // rax
  int v16; // ebx
  int v17; // edx
  unsigned int v18; // edx
  int v19; // r8d
  int v20; // esi
  unsigned __int64 v21; // rax
  char *v22; // rdx
  unsigned __int8 v23; // cl
  __int64 v24; // r9
  ULONG SizeOfBitMap; // edx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+88h] [rbp+20h]

  v31 = a2;
  v4 = a3;
  if ( !byte_140C22260 && (dword_140C31E20 & 3) == 0 && !KdEnteredDebugger )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && v23 <= 0xFu )
        {
          v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v24 + 20) |= (-1 << (v23 + 1)) & 4;
        }
      }
    }
    v6 = -1;
    if ( (word_140C296D2 & 1) != 0 )
    {
      while ( 1 )
      {
        v7 = v6 + 1;
        v8 = v7 < stru_140C29560.SizeOfBitMap ? v7 : 0;
        v9 = stru_140C29560.SizeOfBitMap - 1;
        v10 = ((__int64)stru_140C29560.Buffer & 4) != 0LL ? 0x20 : 0;
        v11 = (char *)stru_140C29560.Buffer - (((__int64)stru_140C29560.Buffer & 4) != 0LL ? 4 : 0);
        while ( 1 )
        {
          v32 = 0;
          v12 = v10 + v9;
          v13 = v10 + v8;
          if ( v9 - v8 != -1 )
            break;
          v6 = -1;
LABEL_41:
          if ( !v8 )
            goto LABEL_15;
          SizeOfBitMap = v7 + 1;
          if ( v7 + 1 > stru_140C29560.SizeOfBitMap )
            SizeOfBitMap = stru_140C29560.SizeOfBitMap;
          v9 = SizeOfBitMap - 1;
          v8 = 0;
        }
        v14 = (__int64 *)&v11[8 * ((unsigned __int64)v13 >> 6)];
        for ( i = ((1LL << (v13 & 0x3F)) - 1) | *v14; i == -1; i = *v14 )
        {
          if ( ++v14 > (__int64 *)&v11[8 * ((unsigned __int64)v12 >> 6)] )
            goto LABEL_40;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v6 = i + ((unsigned int)(((char *)v14 - v11) >> 3) << 6);
        v32 = i;
        if ( v6 > v12 )
        {
LABEL_40:
          v6 = -1;
          goto LABEL_41;
        }
        if ( v6 == -1 )
          goto LABEL_41;
        v6 -= v10;
LABEL_15:
        if ( v6 == -1 )
          break;
        if ( (unsigned int)RtlInterlockedSetClearRun(&stru_140C29560, v6, 1LL) )
        {
          if ( v6 >= 0x800 )
            break;
          v16 = dword_140D06880;
          v30 = a1 & 0xFFFFFFFFFFFFF000uLL;
          if ( (((unsigned int)dword_140D06880 >> 4) & 3) != 0 )
          {
            if ( (((unsigned int)dword_140D06880 >> 4) & 3) == 1 )
              v17 = (v30 ^ (v30 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x101;
            else
              v17 = (v30 ^ (v30 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x201;
          }
          else
          {
            v17 = (v30 ^ (v30 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 1;
          }
          if ( CurrentIrql < 2u )
          {
            v18 = v17 & 0xFFFFFF3F;
          }
          else if ( CurrentIrql == 2 )
          {
            v18 = v17 & 0xFFFFFF3F | 0x40;
          }
          else
          {
            v18 = v17 & 0xFFFFFF3F | 0x80;
          }
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( (_BYTE)KdDebuggerNotPresent )
              v18 = v18 & 0xFFFFF3FF | 0x400;
            else
              v18 = v18 & 0xFFFFF3FF | 0x800;
          }
          if ( (v31 & 1) != 0 )
          {
            v19 = v18 | 8;
            if ( (v31 & 0x800) == 0 )
              v19 = v18;
            LODWORD(v30) = v19;
            if ( v31 >= 0 )
              LODWORD(v30) = v19 | 0x10;
            v20 = v19 | 0x10;
            if ( v31 < 0 )
              v20 = v19;
            v21 = ((unsigned __int64)sub_140317A10(&v31) >> 12) & 0xFFFFFFFFFFLL;
            if ( (v16 & 0x40000000) != 0
              && v21 <= qword_140C50840
              && (*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
              && *(_WORD *)(48 * v21 - 0x21FFFFFFFFE0LL) > 1u )
            {
              LODWORD(v30) = v20 | 0x20;
            }
          }
          else
          {
            LODWORD(v30) = v18 | 4;
          }
          qword_140C25560[v6] = v30;
          goto LABEL_38;
        }
      }
    }
    v22 = (char *)&unk_140C29678;
    if ( !(_BYTE)KdDebuggerEnabled )
      v22 = (char *)&unk_140C29670;
    _InterlockedAdd((volatile signed __int32 *)&v22[32 * v4 + (CurrentIrql > 2u ? 0x10 : 0)], 1u);
LABEL_38:
    if ( CurrentIrql < 2u )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v29 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
