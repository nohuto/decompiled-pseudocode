/*
 * XREFs of NdisSetAoAcOptions @ 0x1C012B5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Du,
      (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
      a1,
      a2);
  if ( *(_QWORD *)(v2 + 4456) )
  {
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 284) = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
      v6 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    }
    else
    {
      *(_DWORD *)(v4 + 284) = ndisNicQuietDerefDefaultTimeout;
      v6 = ndisNicQuietDerefDefaultTimeout;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v6;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Fu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        v7);
    }
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xEu,
        0x2Eu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids);
    return 3221225659LL;
  }
}
