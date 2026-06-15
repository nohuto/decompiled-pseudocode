/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400982B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140008C00 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 u32ValidFrameCount; // r14d
  unsigned int v3; // esi
  signed __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int32 v12; // ecx
  unsigned int v13; // ebp
  void *v14; // rcx
  unsigned __int64 v15; // rbp
  size_t v16; // r8
  int v17; // edx
  unsigned int v18; // ebp
  void *v19; // rcx
  int v20; // ebx
  int v21; // edx
  int v22; // ebx
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax

  u32ValidFrameCount = a2->u32ValidFrameCount;
  LOBYTE(v3) = 0;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), 0LL, 0LL);
  v7 = (CCrossProcessClientOutputEndpoint *)((char *)this - 456);
  v8 = v6;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, (__int64)a2, (__int64)this - 456, 19, u32ValidFrameCount, v6, 0);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(v7, v8) )
  {
    if ( u32ValidFrameCount )
    {
      v10 = *((unsigned int *)this - 76);
      v11 = *((_QWORD *)this - 47);
      v9 = *(_DWORD *)(v11 + 160) + (unsigned int)(v8 % v10);
      v3 = *((_DWORD *)this - 92) * u32ValidFrameCount;
      if ( (unsigned int)v9 <= *(_DWORD *)(v11 + 164) )
      {
        if ( u32ValidFrameCount >= *((_DWORD *)this + 5) || (v12 = 1, (*((_BYTE *)this - 280) & 1) == 0) )
          v12 = 0;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 48) + 176LL), v12);
        v10 = *((unsigned int *)this + 4);
        if ( !(_DWORD)v10 )
        {
          v15 = v3;
          if ( a2->u32BufferFlags != BUFFER_SILENT )
            goto LABEL_31;
          v22 = 128;
          v16 = v3;
          if ( *((_DWORD *)this - 88) != 8 )
            v22 = 0;
          v14 = (void *)(*((_QWORD *)this - 48) + (unsigned int)v9);
          v17 = v22;
          goto LABEL_30;
        }
        if ( (_DWORD)v10 != 1 )
          goto LABEL_32;
        v13 = *(_DWORD *)(*((_QWORD *)this - 47) + 164LL);
        if ( (unsigned int)v9 + v3 <= v13 )
        {
          if ( v3 > v13 )
            goto LABEL_32;
          v14 = (void *)(*((_QWORD *)this - 48) + (unsigned int)v9);
          v15 = v3;
          v16 = v3;
          if ( a2->u32BufferFlags == BUFFER_VALID )
          {
            memcpy_0(v14, *((const void **)this - 43), v3);
LABEL_31:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v15);
            goto LABEL_32;
          }
          v17 = 128;
          if ( *((_DWORD *)this - 88) != 8 )
            v17 = 0;
LABEL_30:
          memset_0(v14, v17, v16);
          goto LABEL_31;
        }
        v18 = v13 - v9;
        v19 = (void *)(*((_QWORD *)this - 48) + (unsigned int)v9);
        if ( a2->u32BufferFlags == BUFFER_VALID )
        {
          memcpy_0(v19, *((const void **)this - 43), v18);
          memcpy_0(
            (void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
            (const void *)(v18 + *((_QWORD *)this - 43)),
            v3 - v18);
        }
        else
        {
          v20 = 128;
          v21 = 128;
          if ( *((_DWORD *)this - 88) != 8 )
            v21 = 0;
          memset_0(v19, v21, v18);
          if ( *((_DWORD *)this - 88) != 8 )
            v20 = 0;
          memset_0((void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)), v20, v3 - v18);
        }
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v3);
      }
    }
  }
LABEL_32:
  if ( *((_QWORD *)this - 3) )
  {
    v23 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    ResetEvent(v23);
    v24 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 3) + 24LL))(*((_QWORD *)this - 3));
    SetEvent(v24);
    v25 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2) + 24LL))(*((_QWORD *)this - 2));
    WaitForSingleObject(v25, 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v10, v9, (__int64)v7, 20, u32ValidFrameCount, v8, v3);
}
