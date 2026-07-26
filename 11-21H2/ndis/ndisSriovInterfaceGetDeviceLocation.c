/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C0123890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0070B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

_LIST_ENTRY *__fastcall ndisSriovInterfaceGetDeviceLocation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int16 a2,
        _WORD *a3,
        _BYTE *a4,
        _LIST_ENTRY *a5)
{
  int v9; // ebx
  _LIST_ENTRY *result; // rax
  __int64 v11; // rcx

  v9 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x69u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  result = ndisIovFindVFByVFId(a1, a2);
  v11 = (__int64)result;
  if ( result )
  {
    *a3 = HIWORD(result[107].Blink);
    *a4 = BYTE5(result[107].Blink);
    result = a5;
    LOBYTE(a5->Flink) = *(_BYTE *)(v11 + 1724);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return (_LIST_ENTRY *)WPP_RECORDER_SF_qL(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x1Au,
                            0x6Au,
                            (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
                            (char)a1,
                            v9);
  return result;
}
