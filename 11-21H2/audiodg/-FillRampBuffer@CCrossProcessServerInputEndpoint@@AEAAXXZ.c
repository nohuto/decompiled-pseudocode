/*
 * XREFs of ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x14002BC20
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14001E050 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::FillRampBuffer(CCrossProcessServerInputEndpoint *this)
{
  unsigned int v1; // ebp
  int v2; // edx
  bool v3; // zf
  void *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // ebx

  v1 = *((_DWORD *)this + 22) * *((_DWORD *)this + 121);
  v2 = 128;
  v3 = *((_DWORD *)this + 26) == 8;
  v5 = (void *)*((_QWORD *)this + 14);
  if ( !v3 )
    v2 = 0;
  memset_0(v5, v2, v1);
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 16LL), 0LL, 0LL);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 24LL), 0LL, 0LL);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(this, v6)
    && CCrossProcessBaseEndpoint::IsValidOffset(this, v7)
    && v6 >= v7 )
  {
    v8 = *((_QWORD *)this + 10);
    v9 = v6 - v7;
    v10 = *(_DWORD *)(v8 + 160) + (unsigned int)(v7 % *((unsigned int *)this + 38));
    if ( v1 >= v9 )
      v1 = v9;
    v11 = v1;
    if ( *(_DWORD *)(v8 + 164) - (int)v10 < v1 )
      v11 = *(_DWORD *)(v8 + 164) - v10;
    memcpy_0(*((void **)this + 14), (const void *)(*((_QWORD *)this + 9) + v10), v11);
    memcpy_0(
      (void *)(v11 + *((_QWORD *)this + 14)),
      (const void *)(*((_QWORD *)this + 9) + *(unsigned int *)(*((_QWORD *)this + 10) + 160LL)),
      v1 - v11);
  }
}
