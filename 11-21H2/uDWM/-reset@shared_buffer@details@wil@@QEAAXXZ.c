/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180096A20
 * Callers:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x180093F54 (--1ResultException@wil@@UEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180095DFC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x180096724 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180096788 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A18F8 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CB774 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E4094 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800E4094.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F1D04 (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *this;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}
