/*
 * XREFs of ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x1400886F4
 * Callers:
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140088940 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140088F5C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 * Callees:
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140088F24 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentQueue(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  bool v6; // di
  unsigned int *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax

  v6 = 0;
  v11 = (unsigned int *)*((_QWORD *)this + 9);
  if ( v11[45] == -1 )
  {
    v18 = *v11;
    v19 = *((_QWORD *)this + 9);
    *a3 = v18;
    v20 = *(_DWORD *)(v19 + 4);
    v21 = *((_QWORD *)this + 10);
    *a4 = v20;
    *a5 = *(_DWORD *)(v21 + 132);
    *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 15);
  }
  else
  {
    v12 = v11[46];
    v13 = *((_QWORD *)this + 9);
    *a3 = v12;
    v14 = *(_DWORD *)(v13 + 188);
    *a4 = v14;
    if ( v12 == v14
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v12, *(_DWORD *)(*((_QWORD *)this + 10) + 148LL)) )
    {
      *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 15);
      v15 = (unsigned int *)*((_QWORD *)this + 9);
      *a3 = *v15;
      v16 = v15[1];
      v17 = *((_QWORD *)this + 10);
      *a4 = v16;
      *a5 = *(_DWORD *)(v17 + 132);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 180LL), -1);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 184LL), 0);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 188LL), 0);
    }
    else
    {
      v6 = 1;
      *a2 = (struct SharedMessageQueueItem *)*((_QWORD *)this + 16);
      *a5 = *(_DWORD *)(*((_QWORD *)this + 10) + 148LL);
    }
  }
  *a6 = v6;
}
