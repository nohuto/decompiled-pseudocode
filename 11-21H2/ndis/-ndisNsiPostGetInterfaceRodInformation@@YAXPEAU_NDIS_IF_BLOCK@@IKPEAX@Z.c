/*
 * XREFs of ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C0133138
 * Callers:
 *     ndisNsiGetInterfaceRodInformation @ 0x1C0102390 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqL @ 0x1C006B38C (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_qLqL @ 0x1C00B505C (WPP_RECORDER_SF_qLqL.c)
 */

void __fastcall ndisNsiPostGetInterfaceRodInformation(struct _NDIS_IF_BLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // esi
  int v8; // [rsp+20h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      (char)a1,
      a2,
      (char)a4,
      a3);
  if ( v6 == 66183 && v5 >= 0xD8 && !a4[52] )
    a4[52] = a1->CompartmentId;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, (__int64)a4, v8);
}
