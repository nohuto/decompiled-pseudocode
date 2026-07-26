/*
 * XREFs of NdisSetPollAffinity @ 0x1C00C05F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?SetAffinity@NdisPoll@@QEAAXPEBU_PROCESSOR_NUMBER@@@Z @ 0x1C0134FB0 (-SetAffinity@NdisPoll@@QEAAXPEBU_PROCESSOR_NUMBER@@@Z.c)
 */

void __fastcall NdisSetPollAffinity(NdisPoll *this, struct _PROCESSOR_NUMBER *a2)
{
  char v4[4]; // [rsp+38h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v4 = a2->Number;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_b07d896841303d6dd5e4c2ea1f7441a9_Traceguids,
      (char)this,
      a2->Group,
      *(_DWORD *)v4);
  }
  if ( a2->Reserved )
    ndisBugCheckEx(0x34uLL, 2uLL, 2uLL, (ULONG_PTR)a2);
  NdisPoll::SetAffinity(this, a2);
}
