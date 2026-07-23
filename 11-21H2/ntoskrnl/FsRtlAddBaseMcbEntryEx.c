/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14022C220
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x14022BC00 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x14022C200 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     sub_14022C700 @ 0x14022C700 (sub_14022C700.c)
 *     sub_14022C788 @ 0x14022C788 (sub_14022C788.c)
 *     sub_14022C8A4 @ 0x14022C8A4 (sub_14022C8A4.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r14d
  int v5; // ebx
  int v6; // r15d
  unsigned int v7; // ebp
  ULONG PairCount; // r13d
  ULONG v10; // edi
  __int64 v11; // rdx
  _DWORD *Mapping; // rdi
  unsigned int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  __int64 v18; // r11
  __int64 v19; // rdi
  unsigned int v20; // r8d
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // edx
  _DWORD *v26; // r8
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // r11d
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // edx
  bool v39; // zf
  ULONG v40; // edx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rdx
  int v49; // edx
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  unsigned int v53; // edx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  ULONG v57; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v58; // [rsp+68h] [rbp+10h] BYREF

  v4 = Lbn;
  v5 = 0;
  v57 = 0;
  v6 = SectorCount;
  v7 = Vbn;
  if ( (unsigned __int8)sub_14022C700(Mcb, Vbn, &v57) )
  {
    Mapping = Mcb->Mapping;
    v14 = v6 + v7 - 1;
    v58 = 0;
    v15 = Mapping[2 * v57 + 1];
    if ( v15 == -1 )
    {
      if ( (unsigned __int8)sub_14022C700(Mcb, v14, &v58) )
      {
        v33 = v58 - 1;
        if ( v32 == (_DWORD)v33 )
        {
          v55 = 0;
          if ( v58 )
            v55 = Mapping[2 * v33];
          if ( Mapping[2 * v58 + 1] != v4 + v55 - v7 )
            return -1073741823;
          if ( v58 )
            v56 = Mapping[2 * v33];
          else
            v56 = 0;
          v6 = v56 - v7;
        }
      }
    }
    else
    {
      if ( v57 )
        v16 = Mapping[2 * v57 - 2];
      else
        v16 = 0;
      if ( v4 != v7 + v15 - v16 )
        return -1073741823;
      v17 = Mapping[2 * v57];
      if ( v14 <= v17 - 1 )
        return 0;
      if ( v57 < Mcb->PairCount )
        v7 = v57 != -1 ? v17 : 0;
      else
        v7 = 0;
      if ( v57 )
        v54 = Mapping[2 * v57 - 2];
      else
        v54 = 0;
      v4 = v15 + v17 - v54;
      v6 = v14 - v7 + 1;
    }
  }
  PairCount = Mcb->PairCount;
  v10 = PairCount;
  v57 = PairCount;
  if ( !PairCount || *((_DWORD *)Mcb->Mapping + 2 * PairCount - 2) <= v7 )
  {
LABEL_3:
    if ( v10 )
    {
      v26 = Mcb->Mapping;
      v27 = v10 - 1;
      v28 = v26[2 * v27];
      if ( v28 == v7 )
      {
        v29 = v26[2 * v27 + 1];
        if ( v29 == -1 )
        {
          v31 = 0;
        }
        else
        {
          v30 = v10 == 1 ? 0 : v26[2 * v10 - 4];
          v31 = v28 + v29 - v30;
        }
        if ( v31 == v4 )
        {
          v26[2 * PairCount - 2] += v6;
          return 0;
        }
      }
    }
    if ( !v7 || v10 && *((_DWORD *)Mcb->Mapping + 2 * v10 - 2) == v7 )
    {
      if ( !(unsigned __int8)sub_14022C788(Mcb, v10, 1LL) )
        return -1073741670;
      v11 = v10;
    }
    else
    {
      if ( !(unsigned __int8)sub_14022C788(Mcb, v10, 2LL) )
        return -1073741670;
      v11 = v10 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v10 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v10) = v7;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = v4;
    *((_DWORD *)Mcb->Mapping + 2 * v11) = v6 + v7;
    return 0;
  }
  if ( !(unsigned __int8)sub_14022C700(Mcb, v7, &v57) )
  {
    v10 = v57;
    goto LABEL_3;
  }
  v19 = v57;
  v58 = v6 + v7;
  v20 = v6 + v7 - 1;
  if ( *(_DWORD *)(v18 + 8LL * v57 + 4) == -1 && (!v57 || *(_DWORD *)(v18 + 8LL * (v57 - 1)) <= v7) )
  {
    v21 = *(_DWORD *)(v18 + 8LL * v57);
    v22 = v21 - 1;
    if ( v20 <= v21 - 1 )
    {
      if ( v57 )
        v23 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v23 = 0;
      if ( v23 < v7 && v20 < v22 )
      {
        if ( (unsigned __int8)sub_14022C788(Mcb, v57, 2LL) )
        {
          v24 = (unsigned int)(v19 + 1);
          v25 = v58;
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v7;
          *((_DWORD *)Mcb->Mapping + 2 * v24 + 1) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v24) = v25;
          return 0;
        }
        return -1073741670;
      }
      if ( v57 )
        v34 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v34 = 0;
      if ( v20 < v22 && v34 == v7 )
      {
        if ( !v57 || (v49 = *(_DWORD *)(v18 + 8LL * (v57 - 1) + 4), v49 == -1) )
        {
          v51 = 0;
        }
        else
        {
          if ( v57 == 1 )
            v50 = 0;
          else
            v50 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
          v51 = *(_DWORD *)(v18 + 8LL * (v57 - 1)) + v49 - v50;
        }
        if ( v51 == v4 )
        {
          if ( v57 )
          {
            *(_DWORD *)(v18 + 8LL * (v57 - 1)) += v6;
            return 0;
          }
          if ( (unsigned __int8)sub_14022C788(Mcb, 0LL, 1LL) )
          {
            *((_DWORD *)Mcb->Mapping + 1) = v4;
            *(_DWORD *)Mcb->Mapping = v6;
            return 0;
          }
        }
        else if ( (unsigned __int8)sub_14022C788(Mcb, v57, 1LL) )
        {
          v53 = v58;
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v53;
          return 0;
        }
        return -1073741670;
      }
      if ( v57 )
        v35 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v35 = 0;
      if ( v35 < v7 && v20 == v22 )
      {
        if ( v57 >= PairCount - 1 )
          v52 = -1;
        else
          v52 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4);
        if ( v52 == v6 + v4 )
        {
          *(_DWORD *)(v18 + 8LL * v57) = v7;
LABEL_90:
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v19 + 1) + 1) = v4;
          return 0;
        }
        if ( (unsigned __int8)sub_14022C788(Mcb, v57, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v7;
          goto LABEL_90;
        }
        return -1073741670;
      }
      if ( !v57 || (v36 = *(_DWORD *)(v18 + 8LL * (v57 - 1) + 4), v36 == -1) )
      {
        v38 = 0;
      }
      else
      {
        if ( v57 == 1 )
          v37 = 0;
        else
          v37 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
        v38 = *(_DWORD *)(v18 + 8LL * (v57 - 1)) + v36 - v37;
      }
      v39 = v38 == v4;
      v40 = PairCount - 1;
      if ( v39 && (v57 >= v40 ? (v41 = -1) : (v41 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4)), v41 == v6 + v4) )
      {
        if ( !v57 )
        {
          v48 = 0LL;
          *(_DWORD *)(v18 + 12) = v4;
          v47 = 1LL;
          goto LABEL_69;
        }
        v47 = 2LL;
        *(_DWORD *)(v18 + 8LL * (v57 - 1)) = *(_DWORD *)(v18 + 8LL * (v57 + 1));
      }
      else
      {
        if ( v57 >= v40 )
          v42 = -1;
        else
          v42 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4);
        if ( v42 == v6 + v4 )
        {
          *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4) = v4;
        }
        else
        {
          if ( !v57 )
            goto LABEL_83;
          v43 = v57 - 1;
          v44 = *(_DWORD *)(v18 + 8 * v43 + 4);
          v45 = v43;
          if ( v44 != -1 )
          {
            if ( (_DWORD)v43 )
              v46 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
            else
              v46 = 0;
            v5 = *(_DWORD *)(v18 + 8 * v45) + v44 - v46;
          }
          if ( v5 != v4 )
          {
LABEL_83:
            *(_DWORD *)(v18 + 8LL * v57 + 4) = v4;
            return 0;
          }
          *(_DWORD *)(v18 + 8 * v45) = v21;
        }
        v47 = 1LL;
      }
      v48 = (unsigned int)v19;
LABEL_69:
      sub_14022C8A4(Mcb, v48, v47);
      return 0;
    }
  }
  return -1073741823;
}
