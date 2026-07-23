/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x14022BDA0
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x140541470 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     sub_14022C700 @ 0x14022C700 (sub_14022C700.c)
 *     sub_14022C788 @ 0x14022C788 (sub_14022C788.c)
 *     sub_14022C8A4 @ 0x14022C8A4 (sub_14022C8A4.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  int v3; // edi
  LONGLONG v4; // r14
  LONGLONG v5; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *Mapping; // rdx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rax
  ULONG v13; // r8d
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // r8
  ULONG PairCount; // eax
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  __int64 v23; // rax
  _DWORD *v24; // r8
  __int64 v25; // rax
  int v26; // r10d
  int v27; // r9d
  int v28; // ecx
  int v29; // ecx
  int v30; // r13d
  int v31; // edx
  __int64 v32; // rbp
  unsigned int v33; // r13d
  int v34; // ecx
  __int64 v35; // r9
  _DWORD *v36; // rdx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rbx
  int v40; // ecx
  int v41; // ecx
  ULONG v42; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = SectorCount;
  v42 = 0;
  v5 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  if ( SectorCount <= 0 )
    return 1;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_14022C700(Mcb, (unsigned int)v5, &v42) )
      return 1;
    v7 = v42;
    if ( v42 )
      v8 = *((unsigned int *)Mcb->Mapping + 2 * v42 - 2);
    else
      v8 = 0LL;
    if ( v8 == v5 )
    {
      Mapping = Mcb->Mapping;
      v10 = Mapping[2 * v42];
      if ( (unsigned int)(v10 - 1) < v5 + v4 )
      {
        if ( v42 )
          v11 = Mapping[2 * v42 - 2];
        else
          v11 = 0;
        v12 = (unsigned int)(v10 - v11);
        v5 += v12;
        v4 -= v12;
        if ( Mapping[2 * v42 + 1] == -1 )
          goto LABEL_17;
        v13 = Mcb->PairCount - 1;
        if ( v42 == v13 )
        {
          if ( !v42 )
            goto LABEL_56;
          v14 = v42 - 1;
          v15 = Mapping[2 * v14 + 1];
          if ( v15 != -1 )
          {
            v34 = v42 == 1 ? 0 : Mapping[2 * v42 - 4];
            if ( v15 + Mapping[2 * v14] - v34 )
              goto LABEL_56;
          }
          v16 = (unsigned int)v14;
        }
        else
        {
          if ( !v42
            || (v20 = Mapping[2 * v42 - 1], v20 != -1)
            && (v42 != 1 ? (v29 = Mapping[2 * v42 - 4]) : (v29 = 0), v20 + Mapping[2 * v42 - 2] - v29) )
          {
            if ( v42 < v13 && Mapping[2 * v42 + 3] != -1 )
            {
              Mapping[2 * v42 + 1] = -1;
              goto LABEL_17;
            }
            if ( !v42 )
              goto LABEL_85;
          }
          v21 = Mapping[2 * v42 - 1];
          if ( v21 != -1 )
          {
            v40 = v42 == 1 ? 0 : Mapping[2 * v42 - 4];
            if ( v21 + Mapping[2 * v42 - 2] - v40 )
            {
LABEL_85:
              if ( v42 >= v13 || Mapping[2 * v42 + 3] == -1 )
              {
LABEL_56:
                v17 = 1LL;
                v16 = v42;
                goto LABEL_16;
              }
              if ( !v42 )
                goto LABEL_27;
            }
          }
          v22 = Mapping[2 * v42 - 1];
          if ( v22 == -1 || (v42 != 1 ? (v41 = Mapping[2 * v42 - 4]) : (v41 = 0), !(v22 + Mapping[2 * v42 - 2] - v41)) )
          {
LABEL_27:
            if ( v42 < v13 && Mapping[2 * v42 + 3] != -1 )
            {
              Mapping[2 * v42 + 1] = -1;
              v17 = 1LL;
              v16 = (unsigned int)(v7 - 1);
              goto LABEL_16;
            }
          }
          v16 = v42 - 1;
        }
        v17 = 2LL;
LABEL_16:
        sub_14022C8A4(Mcb, v16, v17);
        goto LABEL_17;
      }
    }
    if ( v42 )
      v23 = *((unsigned int *)Mcb->Mapping + 2 * v42 - 2);
    else
      v23 = 0LL;
    v24 = Mcb->Mapping;
    if ( v23 == v5 )
    {
      if ( v24[2 * v42 + 1] == -1 )
        return 1;
      if ( !v42 )
        goto LABEL_38;
      v25 = v42 - 1;
      v26 = v24[2 * v25 + 1];
      if ( v26 == -1 )
      {
        v28 = v24[2 * v25];
      }
      else
      {
        if ( (_DWORD)v25 )
          v27 = v24[2 * v42 - 4];
        else
          v27 = 0;
        v28 = v24[2 * v25];
        if ( v26 + v28 - v27 )
        {
LABEL_38:
          if ( (unsigned __int8)sub_14022C788(Mcb, v42, 1LL) )
          {
            *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v7) = v4 + v5;
            *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v7 + 1) + 1) += v4;
            return 1;
          }
          return 0;
        }
      }
      v24[2 * v25] = v28 + v4;
      *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) += v4;
      return 1;
    }
    v30 = v24[2 * v42];
    v31 = v24[2 * v42 + 1];
    v32 = v42;
    if ( (unsigned int)(v30 - 1) >= v5 + v4 )
      break;
    v33 = v30 - v5;
    if ( v31 != -1 )
    {
      if ( v42 >= Mcb->PairCount - 1 || (v38 = v42 + 1, v39 = v38, v24[2 * v38 + 1] == -1) )
      {
        v24[2 * v42] = v5;
      }
      else
      {
        if ( !(unsigned __int8)sub_14022C788(Mcb, v38, 1LL) )
          return 0;
        *((_DWORD *)Mcb->Mapping + 2 * v39 + 1) = -1;
        *((_DWORD *)Mcb->Mapping + 2 * v39) = *((_DWORD *)Mcb->Mapping + 2 * v32);
        *((_DWORD *)Mcb->Mapping + 2 * v32) -= v33;
      }
    }
    v5 += v33;
    v4 -= v33;
LABEL_17:
    if ( v4 <= 0 )
      return 1;
  }
  if ( v31 == -1 )
    return 1;
  if ( !(unsigned __int8)sub_14022C788(Mcb, v42, 2LL) )
    return 0;
  v35 = (unsigned int)(v7 + 1);
  *((_DWORD *)Mcb->Mapping + 2 * v7 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v7 + 2) + 1);
  *((_DWORD *)Mcb->Mapping + 2 * v7) = v5;
  *((_DWORD *)Mcb->Mapping + 2 * v35 + 1) = -1;
  *((_DWORD *)Mcb->Mapping + 2 * v35) = v5 + v4;
  v36 = Mcb->Mapping;
  if ( (_DWORD)v7 )
    v37 = v36[2 * (unsigned int)(v7 - 1)];
  else
    v37 = 0;
  if ( (_DWORD)v7 != -1 )
    v3 = v36[2 * v7];
  v36[2 * (unsigned int)(v7 + 2) + 1] += v36[2 * v7] + v36[2 * v35] - v3 - v37;
  return 1;
}
