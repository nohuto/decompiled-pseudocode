/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14033A7A0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x14033A190 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x14033A780 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x14033ACB0 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x14033AD38 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x14033AE50 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // ebx
  int v5; // r12d
  int v6; // r15d
  unsigned int v7; // ebp
  _DWORD *Mapping; // r14
  ULONG v10; // edi
  unsigned int v11; // r9d
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
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
  int v29; // eax
  int v30; // edx
  int v31; // edx
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // edx
  int v37; // eax
  ULONG v38; // r8d
  int v39; // eax
  int v40; // edx
  __int64 v41; // r8
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  int v45; // edx
  _DWORD *v46; // r8
  __int64 v47; // rcx
  int v48; // r9d
  int v49; // edx
  int v50; // edx
  int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // [rsp+20h] [rbp-48h]
  ULONG v54; // [rsp+70h] [rbp+8h] BYREF
  ULONG v55; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  v5 = SectorCount;
  v54 = 0;
  v6 = Lbn;
  v7 = Vbn;
  if ( Vbn >= 0 && Lbn >= 0 && SectorCount > 0 )
  {
    if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, Vbn, &v54) )
    {
      Mapping = Mcb->Mapping;
      v10 = v54;
      v11 = v5 + v7 - 1;
      v55 = 0;
      v12 = Mapping[2 * v54 + 1];
      if ( v12 == -1 )
      {
        if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v11, &v55) )
        {
          v17 = v55 - 1;
          if ( v10 == (_DWORD)v17 )
          {
            v18 = 0;
            if ( v55 )
              v18 = Mapping[2 * v17];
            if ( Mapping[2 * v55 + 1] != v6 + v18 - v7 )
              return -1073741823;
            if ( v55 )
              v19 = Mapping[2 * v17];
            else
              v19 = 0;
            v5 = v19 - v7;
          }
        }
      }
      else
      {
        if ( v54 )
          v13 = Mapping[2 * v54 - 2];
        else
          v13 = 0;
        if ( v6 != v7 + v12 - v13 )
          return -1073741823;
        v14 = Mapping[2 * v54];
        if ( v11 <= v14 - 1 )
          return 0;
        if ( v54 < Mcb->PairCount )
          v7 = v54 != -1 ? v14 : 0;
        else
          v7 = 0;
        if ( v54 )
          v16 = Mapping[2 * v54 - 2];
        else
          v16 = 0;
        v6 = v12 + v14 - v16;
        v5 = v11 - v7 + 1;
      }
    }
    PairCount = Mcb->PairCount;
    v21 = PairCount;
    v55 = PairCount;
    v54 = PairCount;
    if ( PairCount )
    {
      v22 = Mcb->Mapping;
      if ( v22[2 * PairCount - 2] > v7 )
      {
        if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v7, &v54) )
        {
          v23 = v54;
          v53 = v5 + v7;
          v24 = v5 + v7 - 1;
          if ( v22[2 * v54 + 1] == -1 && (!v54 || v22[2 * v54 - 2] <= v7) )
          {
            v25 = v22[2 * v54];
            v26 = v25 - 1;
            if ( v24 <= v25 - 1 )
            {
              if ( v54 )
                v27 = v22[2 * v54 - 2];
              else
                v27 = 0;
              if ( v27 < v7 && v24 < v26 )
              {
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, v54, 2LL) )
                {
                  v28 = (unsigned int)(v23 + 1);
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = -1;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = v7;
                  *((_DWORD *)Mcb->Mapping + 2 * v28 + 1) = v6;
                  *((_DWORD *)Mcb->Mapping + 2 * v28) = v53;
                  return 0;
                }
                return -1073741670;
              }
              if ( v54 )
                v29 = v22[2 * v54 - 2];
              else
                v29 = 0;
              if ( v29 == v7 && v24 < v26 )
              {
                if ( v54 && (v30 = v22[2 * v54 - 1], v30 != -1) )
                {
                  if ( v54 == 1 )
                    v32 = 0;
                  else
                    v32 = v22[2 * v54 - 4];
                  v31 = v22[2 * v54 - 2] + v30 - v32;
                }
                else
                {
                  v31 = 0;
                }
                if ( v31 == v6 )
                {
                  if ( v54 )
                  {
                    v22[2 * v54 - 2] += v5;
                    return 0;
                  }
                  if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                  {
                    *((_DWORD *)Mcb->Mapping + 1) = v6;
                    *(_DWORD *)Mcb->Mapping = v5;
                    return 0;
                  }
                }
                else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v54, 1LL) )
                {
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = v6;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = v53;
                  return 0;
                }
                return -1073741670;
              }
              if ( v54 )
                v33 = v22[2 * v54 - 2];
              else
                v33 = 0;
              if ( v33 < v7 && v24 == v26 )
              {
                if ( v54 < v55 - 1 )
                  v34 = v22[2 * v54 + 3];
                else
                  v34 = -1;
                if ( v34 == v5 + v6 )
                {
                  v22[2 * v54] = v7;
LABEL_72:
                  *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v23 + 1) + 1) = v6;
                  return 0;
                }
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, v54, 1LL) )
                {
                  *((_DWORD *)Mcb->Mapping + 2 * v23 + 1) = -1;
                  *((_DWORD *)Mcb->Mapping + 2 * v23) = v7;
                  goto LABEL_72;
                }
                return -1073741670;
              }
              if ( v54 && (v35 = v22[2 * v54 - 1], v35 != -1) )
              {
                if ( v54 == 1 )
                  v37 = 0;
                else
                  v37 = v22[2 * v54 - 4];
                v36 = v22[2 * v54 - 2] + v35 - v37;
              }
              else
              {
                v36 = 0;
              }
              v38 = v55 - 1;
              if ( v36 == v6 )
              {
                if ( v54 < v38 )
                  v39 = v22[2 * v54 + 3];
                else
                  v39 = -1;
                v40 = v5 + v6;
                if ( v39 == v5 + v6 )
                {
                  if ( !v54 )
                  {
                    v22[3] = v6;
                    v41 = 1LL;
                    v42 = 0LL;
LABEL_89:
                    FsRtlRemoveLargeEntry(Mcb, v42, v41);
                    return 0;
                  }
                  v41 = 2LL;
                  v22[2 * v54 - 2] = v22[2 * v54 + 2];
LABEL_91:
                  v42 = (unsigned int)v23;
                  goto LABEL_89;
                }
              }
              else
              {
                v40 = v5 + v6;
              }
              if ( v54 < v38 )
                v43 = v22[2 * v54 + 3];
              else
                v43 = -1;
              if ( v43 == v40 )
              {
                v22[2 * v54 + 3] = v6;
              }
              else
              {
                if ( !v54 )
                  goto LABEL_106;
                v44 = v54 - 1;
                v45 = v22[2 * v44 + 1];
                if ( v45 != -1 )
                {
                  if ( (_DWORD)v44 )
                    v4 = v22[2 * v54 - 4];
                  v4 = v22[2 * v44] + v45 - v4;
                }
                if ( v4 != v6 )
                {
LABEL_106:
                  v22[2 * v54 + 1] = v6;
                  return 0;
                }
                v22[2 * v44] = v25;
              }
              v41 = 1LL;
              goto LABEL_91;
            }
          }
          return -1073741823;
        }
        v21 = v54;
        PairCount = v55;
      }
    }
    if ( v21 )
    {
      v46 = Mcb->Mapping;
      v47 = v21 - 1;
      v48 = v46[2 * v47];
      if ( v48 == v7 )
      {
        v49 = v46[2 * v47 + 1];
        if ( v49 == -1 )
        {
          v50 = 0;
        }
        else
        {
          v51 = v21 == 1 ? 0 : v46[2 * v21 - 4];
          v50 = v48 + v49 - v51;
        }
        if ( v50 == v6 )
        {
          v46[2 * PairCount - 2] += v5;
          return 0;
        }
      }
    }
    if ( !v7 || v21 && *((_DWORD *)Mcb->Mapping + 2 * v21 - 2) == v7 )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v21, 1LL) )
        return -1073741670;
      v52 = v21;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v21, 2LL) )
        return -1073741670;
      v52 = v21 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v21 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v21) = v7;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v52 + 1) = v6;
    *((_DWORD *)Mcb->Mapping + 2 * v52) = v5 + v7;
    return 0;
  }
  return -1073741811;
}
