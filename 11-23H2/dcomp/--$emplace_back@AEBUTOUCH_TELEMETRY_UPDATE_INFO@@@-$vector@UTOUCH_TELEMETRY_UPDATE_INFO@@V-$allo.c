/*
 * XREFs of ??$emplace_back@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@UTOUCH_TELEMETRY_UPDATE_INFO@@V?$allocator@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@std@@QEAA?A_TAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4FEC
 * Callers:
 *     ?PendingInteractionUpdate@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A5890 (-PendingInteractionUpdate@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<TOUCH_TELEMETRY_UPDATE_INFO>::emplace_back<TOUCH_TELEMETRY_UPDATE_INFO const &>(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<TOUCH_TELEMETRY_UPDATE_INFO>::_Emplace_reallocate<TOUCH_TELEMETRY_UPDATE_INFO const &>(
             (const void **)a1,
             (_BYTE *)v3,
             a2);
  *(_OWORD *)v3 = *a2;
  *(_OWORD *)(v3 + 16) = a2[1];
  *(_OWORD *)(v3 + 32) = a2[2];
  *(_OWORD *)(v3 + 48) = a2[3];
  *(_OWORD *)(v3 + 64) = a2[4];
  *(_OWORD *)(v3 + 80) = a2[5];
  *(_OWORD *)(v3 + 96) = a2[6];
  v4 = v3 + 128;
  v5 = a2[7];
  v6 = a2 + 8;
  *(_OWORD *)(v4 - 16) = v5;
  *(_OWORD *)v4 = *v6;
  *(_OWORD *)(v4 + 16) = v6[1];
  *(_OWORD *)(v4 + 32) = v6[2];
  *(_OWORD *)(v4 + 48) = v6[3];
  *(_OWORD *)(v4 + 64) = v6[4];
  *(_QWORD *)(v4 + 80) = *((_QWORD *)v6 + 10);
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 216;
  return result;
}
