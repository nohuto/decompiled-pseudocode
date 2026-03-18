/*
 * XREFs of ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00879F0
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00874F0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0087A54 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
        DirectComposition::CApplicationChannel *this,
        struct UCE_RDP_HEADER **a2,
        struct UCE_RDP_HEADER **a3)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx

  v5 = *((_QWORD *)this + *((unsigned int *)this + 420) + 208);
  result = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
             *((DirectComposition::CBatchSharedMemoryPool **)this + 207),
             v5,
             (void **)a3);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 207) + 56LL);
    ++*((_DWORD *)this + 420);
    *a2 = (struct UCE_RDP_HEADER *)(v5 + v7);
  }
  return result;
}
