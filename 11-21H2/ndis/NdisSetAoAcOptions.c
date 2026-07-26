/*
 * XREFs of NdisSetAoAcOptions @ 0x1C011F900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  v5 = v4;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Du,
      (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
      a1,
      a2);
    v5 = *(_QWORD *)(v2 + 4456);
  }
  if ( v5 )
  {
    v7 = ndisNicQuietDerefDefaultTimeout;
    if ( (v3 & 1) != 0 )
      v7 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    *(_DWORD *)(v4 + 284) = v7;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Fu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        v8);
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
