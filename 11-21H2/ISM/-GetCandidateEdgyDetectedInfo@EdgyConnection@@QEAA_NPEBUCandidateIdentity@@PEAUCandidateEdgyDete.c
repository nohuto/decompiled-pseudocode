/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801A95E0
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AE3E4 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AB41C (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall EdgyConnection::GetCandidateEdgyDetectedInfo(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3)
{
  Edges *v3; // r14
  char v4; // bl
  int Edge; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // al
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // r8
  char v17; // cl
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx

  v3 = (EdgyConnection *)((char *)this + 72);
  v4 = 0;
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  Edge = Edges::FindEdge((EdgyConnection *)((char *)this + 72), a2);
  if ( Edge < 0
    || (v8 = (__int64)Edge << 7,
        v9 = *(_QWORD *)(v8 + *(_QWORD *)v3 + 40),
        *((_QWORD *)a3 + 2) = v9,
        *((_DWORD *)a3 + 6) = *(_DWORD *)(v8 + *(_QWORD *)v3 + 68),
        v10 = 1,
        *((_DWORD *)a3 + 7) = *(_DWORD *)(v8 + *(_QWORD *)v3 + 48),
        !v9) )
  {
    v10 = 0;
  }
  *(_BYTE *)a3 = v10;
  v11 = (_QWORD *)((char *)a3 + 72);
  *((_QWORD *)a3 + 4) = 0LL;
  if ( a3 != (struct CandidateEdgyDetectedInfo *)-72LL )
    *v11 = 0LL;
  v12 = Edges::FindEdge(v3, a2);
  if ( v12 < 0 )
  {
    v16 = 0;
  }
  else
  {
    v13 = v12;
    v14 = *(_QWORD *)v3;
    v15 = v13 << 7;
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v15 + *(_QWORD *)v3 + 52);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v15 + v14 + 68);
    *((_QWORD *)a3 + 8) = *(_QWORD *)(v15 + v14 + 84);
    if ( a3 != (struct CandidateEdgyDetectedInfo *)-72LL )
      *v11 = *(_QWORD *)(v15 + *(_QWORD *)v3);
    v16 = 1;
  }
  *((_BYTE *)a3 + 1) = v16;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( *((_QWORD *)a3 + 2) )
  {
    v17 = v16;
    if ( *((_DWORD *)a3 + 6) != 1 )
      goto LABEL_26;
    v18 = *((_DWORD *)a3 + 7);
    if ( !v18 )
      return 0;
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 != 1 || *v11 )
            goto LABEL_26;
        }
      }
      *((_QWORD *)a3 + 1) = -1LL;
      *((_BYTE *)a3 + 1) = 0;
    }
    else
    {
      *((_BYTE *)a3 + 1) = 0;
    }
  }
  else
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      v17 = *v11 != 0LL ? v16 : 0;
      *((_BYTE *)a3 + 1) = v17;
      goto LABEL_26;
    }
    *(_WORD *)a3 = 0;
  }
  v17 = 0;
LABEL_26:
  if ( *(_BYTE *)a3 || v17 )
    return 1;
  return v4;
}
