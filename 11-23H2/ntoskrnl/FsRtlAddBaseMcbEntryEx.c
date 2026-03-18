/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14033A510
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x140339F00 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x14033A4F0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x14033AA28 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x14033AAB0 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x14033ABC8 (FsRtlRemoveLargeEntry.c)
 *     Feature_1714623801__private_IsEnabledDeviceUsage @ 0x14040FB34 (Feature_1714623801__private_IsEnabledDeviceUsage.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // ebx
  _DWORD *Mapping; // r14
  ULONG v11; // edi
  unsigned int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  ULONG PairCount; // r10d
  ULONG v21; // edi
  _DWORD *v22; // r14
  __int64 v23; // rdi
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // edx
  int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // eax
  ULONG v40; // r8d
  int v41; // eax
  int v42; // edx
  __int64 v43; // r8
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  int v47; // edx
  _DWORD *v48; // r8
  __int64 v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edx
  int v53; // eax
  __int64 v54; // rdx
  ULONG v55; // [rsp+20h] [rbp-38h] BYREF
  int v56; // [rsp+24h] [rbp-34h]
  ULONG v57; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v57 = 0;
  if ( (unsigned int)Feature_1714623801__private_IsEnabledDeviceUsage() && (Vbn < 0 || Lbn < 0 || SectorCount <= 0) )
    return -1073741811;
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)Vbn, &v57) )
    goto LABEL_30;
  Mapping = Mcb->Mapping;
  v11 = v57;
  v12 = SectorCount + Vbn - 1;
  v55 = 0;
  v13 = Mapping[2 * v57 + 1];
  if ( v13 == -1 )
  {
    if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v12, &v55) )
    {
      v17 = v55 - 1;
      if ( v11 == (_DWORD)v17 )
      {
        v18 = 0;
        if ( v55 )
          v18 = Mapping[2 * v17];
        if ( Mapping[2 * v55 + 1] != (_DWORD)Lbn + v18 - (_DWORD)Vbn )
          return -1073741823;
        if ( v55 )
          v19 = Mapping[2 * v17];
        else
          v19 = 0;
        LODWORD(SectorCount) = v19 - Vbn;
      }
    }
LABEL_30:
    PairCount = Mcb->PairCount;
    v21 = PairCount;
    v55 = PairCount;
    v57 = PairCount;
    if ( PairCount )
    {
      v22 = Mcb->Mapping;
      if ( v22[2 * PairCount - 2] > (unsigned int)Vbn )
      {
        if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)Vbn, &v57) )
        {
          v23 = v57;
          v56 = SectorCount + Vbn;
          v24 = SectorCount + Vbn - 1;
          if ( v22[2 * v57 + 1] == -1 && (!v57 || v22[2 * v57 - 2] <= (unsigned int)Vbn) )
          {
            v25 = v22[2 * v57];
            v26 = v25 - 1;
            if ( v24 <= v25 - 1 )
            {
              if ( v57 )
                v27 = v22[2 * v57 - 2];
              else
                v27 = 0;
              if ( v27 < (unsigned int)Vbn && v24 < v26 )
              {
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 2LL) )
                {
                  v28 = (unsigned int)(v23 + 1);
                  v29 = v56;
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = -1;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = Vbn;
                  *((_DWORD *)Mcb->Mapping + 2 * v28 + 1) = Lbn;
                  *((_DWORD *)Mcb->Mapping + 2 * v28) = v29;
                  return 0;
                }
                return -1073741670;
              }
              if ( v57 )
                v30 = v22[2 * v57 - 2];
              else
                v30 = 0;
              if ( v30 == (_DWORD)Vbn && v24 < v26 )
              {
                if ( v57 && (v31 = v22[2 * v57 - 1], v31 != -1) )
                {
                  if ( v57 == 1 )
                    v33 = 0;
                  else
                    v33 = v22[2 * v57 - 4];
                  v32 = v22[2 * v57 - 2] + v31 - v33;
                }
                else
                {
                  v32 = 0;
                }
                if ( v32 == (_DWORD)Lbn )
                {
                  if ( v57 )
                  {
                    v22[2 * v57 - 2] += SectorCount;
                    return 0;
                  }
                  if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                  {
                    *((_DWORD *)Mcb->Mapping + 1) = Lbn;
                    *(_DWORD *)Mcb->Mapping = SectorCount;
                    return 0;
                  }
                }
                else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
                {
                  v34 = v56;
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = Lbn;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = v34;
                  return 0;
                }
                return -1073741670;
              }
              if ( v57 )
                v35 = v22[2 * v57 - 2];
              else
                v35 = 0;
              if ( v35 < (unsigned int)Vbn && v24 == v26 )
              {
                if ( v57 < v55 - 1 )
                  v36 = v22[2 * v57 + 3];
                else
                  v36 = -1;
                if ( v36 == (_DWORD)SectorCount + (_DWORD)Lbn )
                {
                  v22[2 * v57] = Vbn;
                }
                else
                {
                  if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
                    return -1073741670;
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = -1;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = Vbn;
                }
                *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v23 + 1) + 1) = Lbn;
                return 0;
              }
              if ( v57 && (v37 = v22[2 * v57 - 1], v37 != -1) )
              {
                if ( v57 == 1 )
                  v39 = 0;
                else
                  v39 = v22[2 * v57 - 4];
                v38 = v22[2 * v57 - 2] + v37 - v39;
              }
              else
              {
                v38 = 0;
              }
              v40 = v55 - 1;
              if ( v38 == (_DWORD)Lbn )
              {
                if ( v57 < v40 )
                  v41 = v22[2 * v57 + 3];
                else
                  v41 = -1;
                v42 = SectorCount + Lbn;
                if ( v41 == (_DWORD)SectorCount + (_DWORD)Lbn )
                {
                  if ( !v57 )
                  {
                    v22[3] = Lbn;
                    v43 = 1LL;
                    v44 = 0LL;
LABEL_90:
                    FsRtlRemoveLargeEntry(Mcb, v44, v43);
                    return 0;
                  }
                  v43 = 2LL;
                  v22[2 * v57 - 2] = v22[2 * v57 + 2];
LABEL_92:
                  v44 = (unsigned int)v23;
                  goto LABEL_90;
                }
              }
              else
              {
                v42 = SectorCount + Lbn;
              }
              if ( v57 < v40 )
                v45 = v22[2 * v57 + 3];
              else
                v45 = -1;
              if ( v45 == v42 )
              {
                v22[2 * v57 + 3] = Lbn;
              }
              else
              {
                if ( !v57 )
                  goto LABEL_107;
                v46 = v57 - 1;
                v47 = v22[2 * v46 + 1];
                if ( v47 != -1 )
                {
                  if ( (_DWORD)v46 )
                    v4 = v22[2 * v57 - 4];
                  v4 = v22[2 * v46] + v47 - v4;
                }
                if ( v4 != (_DWORD)Lbn )
                {
LABEL_107:
                  v22[2 * v57 + 1] = Lbn;
                  return 0;
                }
                v22[2 * v46] = v25;
              }
              v43 = 1LL;
              goto LABEL_92;
            }
          }
          return -1073741823;
        }
        v21 = v57;
        PairCount = v55;
      }
    }
    if ( v21 )
    {
      v48 = Mcb->Mapping;
      v49 = v21 - 1;
      v50 = v48[2 * v49];
      if ( v50 == (_DWORD)Vbn )
      {
        v51 = v48[2 * v49 + 1];
        if ( v51 == -1 )
        {
          v52 = 0;
        }
        else
        {
          v53 = v21 == 1 ? 0 : v48[2 * v21 - 4];
          v52 = v50 + v51 - v53;
        }
        if ( v52 == (_DWORD)Lbn )
        {
          v48[2 * PairCount - 2] += SectorCount;
          return 0;
        }
      }
    }
    if ( !(_DWORD)Vbn || v21 && *((_DWORD *)Mcb->Mapping + 2 * v21 - 2) == (_DWORD)Vbn )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v21, 1LL) )
        return -1073741670;
      v54 = v21;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v21, 2LL) )
        return -1073741670;
      v54 = v21 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v21 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v21) = Vbn;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v54 + 1) = Lbn;
    *((_DWORD *)Mcb->Mapping + 2 * v54) = SectorCount + Vbn;
    return 0;
  }
  if ( v57 )
    v14 = Mapping[2 * v57 - 2];
  else
    v14 = 0;
  if ( (_DWORD)Lbn != (_DWORD)Vbn + v13 - v14 )
    return -1073741823;
  v15 = Mapping[2 * v57];
  if ( v12 > v15 - 1 )
  {
    if ( v57 < Mcb->PairCount )
      LODWORD(Vbn) = v57 != -1 ? v15 : 0;
    else
      LODWORD(Vbn) = 0;
    if ( v57 )
      v16 = Mapping[2 * v57 - 2];
    else
      v16 = 0;
    LODWORD(Lbn) = v13 + v15 - v16;
    LODWORD(SectorCount) = v12 - Vbn + 1;
    goto LABEL_30;
  }
  return 0;
}
