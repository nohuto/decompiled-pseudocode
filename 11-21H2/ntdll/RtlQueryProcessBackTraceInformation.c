/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800E3530
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001970 (RtlpCommitQueryDebugInfo.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800E42B4 (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_QWORD *a1)
{
  PRTL_SRWLOCK v2; // rbx
  char *DebugInfo; // rax
  char *v5; // r14
  int Ptr_high; // eax
  char *v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *Value; // r13
  _WORD *v12; // rdx

  v2 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 0x18u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *((_BYTE *)&v2[16].0 + 1) = 1;
  *(_QWORD *)DebugInfo = v2[19].Value - v2[17].Value;
  *((_QWORD *)DebugInfo + 1) = v2[23].Value - v2[17].Value;
  *((_DWORD *)DebugInfo + 4) = v2[22].0;
  Ptr_high = HIDWORD(v2[22].Ptr);
  *((_DWORD *)v5 + 5) = Ptr_high;
  v7 = RtlpCommitQueryDebugInfo(a1, 272 * Ptr_high);
  if ( v7 )
  {
    v8 = 0;
    v9 = HIDWORD(v2[22].Ptr);
    Value = (_QWORD *)v2[23].Value;
    while ( v9-- )
    {
      v12 = (_WORD *)*--Value;
      *(_QWORD *)v7 = 0LL;
      *((_DWORD *)v7 + 2) = v12[4] & 0x7FF;
      *((_WORD *)v7 + 6) = v12[6];
      *((_WORD *)v7 + 7) = v12[7];
      memmove(v7 + 16, v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 272;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlpDeCommitQueryDebugInfo(a1, v5, 24LL);
  }
  *((_BYTE *)&v2[16].0 + 1) = 0;
  if ( v8 >= 0 )
    a1[13] = v5;
  return (unsigned int)v8;
}
