/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VCSerialWorkQueue@@@std@@QEAA@XZ @ 0x140067A20
 * Callers:
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x14006845C (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<CSerialWorkQueue>::_Ref_count_obj2<CSerialWorkQueue>(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<CSerialWorkQueue>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  *(_QWORD *)(a1 + 32) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 24) = 3;
  *(_DWORD *)(a1 + 84) = 1;
  *(_DWORD *)(a1 + 88) = 72;
  return result;
}
