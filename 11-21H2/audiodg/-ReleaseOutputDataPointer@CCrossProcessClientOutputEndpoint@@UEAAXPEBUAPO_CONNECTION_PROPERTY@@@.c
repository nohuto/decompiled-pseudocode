/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14008B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        __int64 a3,
        __int64 a4)
{
  UINT32 u32ValidFrameCount; // r14d
  __int64 v5; // r8
  unsigned int v6; // esi
  signed __int64 v9; // rax
  CCrossProcessBaseEndpoint *v10; // r12
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int32 v15; // ecx
  unsigned int v16; // ebp
  void *v17; // rcx
  int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // rax
  int v22; // ebx
  int v23; // edx
  size_t v24; // r8
  __int64 v25; // rcx
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax

  u32ValidFrameCount = a2->u32ValidFrameCount;
  v5 = *((_QWORD *)this - 48);
  LOBYTE(v6) = 0;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), 0LL, 0LL);
  v10 = (CCrossProcessClientOutputEndpoint *)((char *)this - 456);
  v11 = v9;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, (__int64)a2, (__int64)this - 456, 19, u32ValidFrameCount, v9, 0);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(v10, v11, v5, a4) )
  {
    if ( u32ValidFrameCount )
    {
      v13 = *((unsigned int *)this - 76);
      v14 = *((_QWORD *)this - 47);
      v6 = u32ValidFrameCount * *((_DWORD *)this - 92);
      v12 = *(_DWORD *)(v14 + 160) + (unsigned int)(v11 % v13);
      if ( (unsigned int)v12 <= *(_DWORD *)(v14 + 164) )
      {
        if ( u32ValidFrameCount >= *((_DWORD *)this + 5) || (v15 = 1, (*((_BYTE *)this - 280) & 1) == 0) )
          v15 = 0;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 48) + 176LL), v15);
        v13 = *((unsigned int *)this + 4);
        if ( (_DWORD)v13 )
        {
          if ( (_DWORD)v13 != 1 )
            goto LABEL_30;
          v16 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL);
          if ( (unsigned int)v12 + v6 <= v16 )
          {
            if ( v6 <= v16 )
            {
              v17 = (void *)(*((_QWORD *)this - 48) + (unsigned int)v12);
              if ( a2->u32BufferFlags == BUFFER_VALID )
              {
                memcpy_0(v17, *((const void **)this - 43), v6);
              }
              else
              {
                v18 = 128;
                if ( *((_DWORD *)this - 88) != 8 )
                  v18 = 0;
                memset_0(v17, v18, v6);
              }
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v6);
            }
            goto LABEL_30;
          }
          v19 = *((_QWORD *)this - 48);
          v20 = v16 - v12;
          v21 = (unsigned int)v12;
          if ( a2->u32BufferFlags == BUFFER_VALID )
          {
            memcpy_0((void *)((unsigned int)v12 + v19), *((const void **)this - 43), v20);
            memcpy_0(
              (void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
              (const void *)(v20 + *((_QWORD *)this - 43)),
              v6 - v20);
LABEL_29:
            v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v6);
            goto LABEL_30;
          }
          v22 = 128;
          v23 = 128;
          if ( *((_DWORD *)this - 88) != 8 )
            v23 = 0;
          memset_0((void *)(v21 + v19), v23, v20);
          v24 = v6 - v20;
          v25 = *(unsigned int *)(*((_QWORD *)this - 47) + 160LL);
        }
        else
        {
          if ( a2->u32BufferFlags != BUFFER_SILENT )
            goto LABEL_29;
          v24 = v6;
          v22 = 128;
          v25 = (unsigned int)v12;
        }
        if ( *((_DWORD *)this - 88) != 8 )
          v22 = 0;
        memset_0((void *)(*((_QWORD *)this - 48) + v25), v22, v24);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( *((_QWORD *)this - 3) )
  {
    v26 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    ResetEvent(v26);
    v27 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 3) + 24LL))(*((_QWORD *)this - 3));
    SetEvent(v27);
    v28 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    WaitForSingleObject(v28, 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v13, v12, (__int64)v10, 20, u32ValidFrameCount, v11, v6);
}
