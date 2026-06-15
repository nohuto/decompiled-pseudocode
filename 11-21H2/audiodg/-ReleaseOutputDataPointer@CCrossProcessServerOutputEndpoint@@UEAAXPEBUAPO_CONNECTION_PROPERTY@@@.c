/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14008C110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CCrossProcessBaseEndpoint *v4; // r13
  const struct APO_CONNECTION_PROPERTY *v5; // rsi
  UINT32 u32ValidFrameCount; // r14d
  __int64 v8; // r15
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int128 v12; // xmm1
  int v13; // ecx
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  unsigned int v18; // r12d
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r11
  double v22; // xmm0_8
  __int64 v23; // rcx
  void (__fastcall *v24)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD); // rax
  unsigned __int64 v25; // rcx
  unsigned int Size; // [rsp+40h] [rbp-40h]
  __int128 v27; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+68h] [rbp-18h]

  v4 = (CCrossProcessServerOutputEndpoint *)((char *)this - 464);
  v5 = (const struct APO_CONNECTION_PROPERTY *)a2;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 464, 11, *(_DWORD *)(a2 + 8), 0, 0);
  u32ValidFrameCount = v5->u32ValidFrameCount;
  if ( u32ValidFrameCount )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this - 49) + 164LL) & 1) != 0 )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v4, v8, a3, a4) )
      {
        u32BufferFlags = v5->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v10 = *((_QWORD *)this - 48);
          v11 = *((_DWORD *)this - 94);
          v12 = *((_OWORD *)this + 7);
          a2 = v8 % *((unsigned int *)this - 78);
          v13 = *((_DWORD *)this + 4);
          v14 = u32ValidFrameCount * v11;
          v15 = *(_DWORD *)(v10 + 160) + a2;
          v27 = *((_OWORD *)this + 6);
          v29 = *((_QWORD *)this + 16);
          v28 = v12;
          if ( v13 )
          {
            if ( v13 != 1 )
              goto LABEL_21;
            v16 = *((_DWORD *)this + 22);
            v17 = *(_DWORD *)(v10 + 164);
            if ( !v16 )
              v16 = v14;
            if ( v16 + v15 <= v17 )
            {
              if ( u32BufferFlags != BUFFER_SILENT )
                memcpy_0((void *)(*((_QWORD *)this - 49) + v15), *((const void **)this - 44), v16);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v16);
              (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*((_QWORD *)this - 58) + 88LL))(
                (char *)this - 464,
                1LL,
                v15,
                v16 / *((_DWORD *)this - 94),
                &v27,
                v5->u32BufferFlags,
                0);
              goto LABEL_21;
            }
            v18 = v17 - v15;
            Size = v16 - v18;
            if ( u32BufferFlags != BUFFER_SILENT )
            {
              memcpy_0((void *)(*((_QWORD *)this - 49) + v15), *((const void **)this - 44), v18);
              memcpy_0(
                (void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL)),
                (const void *)(v18 + *((_QWORD *)this - 44)),
                Size);
              u32BufferFlags = v5->u32BufferFlags;
              v11 = *((_DWORD *)this - 94);
            }
            (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*((_QWORD *)this - 58) + 88LL))(
              (char *)this - 464,
              1LL,
              v15,
              v18 / v11,
              &v27,
              u32BufferFlags,
              0);
            v19 = *((_DWORD *)this - 94);
            v20 = *((_QWORD *)this - 58);
            v21 = *((_QWORD *)this - 48);
            v22 = *((float *)this - 77);
            v23 = v18 / v19;
            *(_QWORD *)&v28 = v28 - v23;
            HIDWORD(v29) = 2;
            v24 = *(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(v20 + 88);
            *((_QWORD *)&v28 + 1) += (unsigned int)(int)((double)(int)v23 * 10000000.0 / v22 + 0.5);
            v24((char *)this - 464, 1LL, *(unsigned int *)(v21 + 160), Size / v19, &v27, v5->u32BufferFlags, 0);
            v25 = v16;
          }
          else
          {
            (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*((_QWORD *)this - 58) + 88LL))(
              (char *)this - 464,
              1LL,
              v15,
              u32ValidFrameCount,
              &v27,
              u32BufferFlags,
              1);
            if ( v5->u32BufferFlags == BUFFER_INVALID )
              goto LABEL_21;
            v25 = v14;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v25);
        }
      }
    }
  }
LABEL_21:
  *((_DWORD *)this + 4) = 3;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v5->u32ValidFrameCount,
      a2,
      (__int64)v4,
      12,
      v5->u32ValidFrameCount,
      0,
      v5->u32BufferFlags);
}
