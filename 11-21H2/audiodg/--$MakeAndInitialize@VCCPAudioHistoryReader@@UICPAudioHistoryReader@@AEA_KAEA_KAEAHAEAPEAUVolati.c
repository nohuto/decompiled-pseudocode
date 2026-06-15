/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x140087648
 * Callers:
 *     ?GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z @ 0x140087A20 (-GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCPAudioHistoryReader@@QEAA@XZ @ 0x1400878C0 (--0CCPAudioHistoryReader@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessageQueueItem@@III0@Z @ 0x140087E88 (-RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,int &,VolatileControlData * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int *a4,
        struct VolatileControlData **a5,
        struct SharedMessageQueueItem **a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  CCPAudioHistoryReader *v14; // rax
  int v15; // edi
  CCPAudioHistoryReader *v16; // rbx

  *a1 = 0LL;
  v14 = (CCPAudioHistoryReader *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    v16 = CCPAudioHistoryReader::CCPAudioHistoryReader(v14);
    v15 = CCPAudioHistoryReader::RuntimeClassInitialize(v16, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
    if ( v15 >= 0 )
      v15 = (**(__int64 (__fastcall ***)(CCPAudioHistoryReader *, GUID *, _QWORD *))v16)(
              v16,
              &GUID_2f112202_919d_48ae_b337_2b9271fe98aa,
              a1);
    if ( v16 )
      (*(void (__fastcall **)(CCPAudioHistoryReader *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
