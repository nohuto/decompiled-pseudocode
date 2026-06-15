/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140008C00 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2)
{
  CCrossProcessBaseEndpoint *v2; // rsi
  UINT32 *v3; // r12
  const struct APO_CONNECTION_PROPERTY *v4; // r13
  UINT32 v6; // r15d
  __int64 v7; // r14
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v9; // r9
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // rbx
  unsigned int v17; // r8d
  float v18; // xmm0_4
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int Size; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-18h]

  v2 = (CCrossProcessServerOutputEndpoint *)((char *)this - 464);
  v3 = (UINT32 *)(a2 + 8);
  v4 = (const struct APO_CONNECTION_PROPERTY *)a2;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 464, 11, *v3, 0, 0);
  v6 = *v3;
  if ( *v3 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this - 49) + 164LL) & 1) != 0 )
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v2, v7) )
      {
        u32BufferFlags = v4->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v9 = *((_QWORD *)this - 48);
          v10 = *((_OWORD *)this + 7);
          v11 = *((_DWORD *)this - 94) * v6;
          a2 = v7 % *((unsigned int *)this - 78);
          v12 = *((_DWORD *)this + 4);
          v13 = *(_DWORD *)(v9 + 160) + a2;
          v22 = *((_OWORD *)this + 6);
          v24 = *((_QWORD *)this + 16);
          v23 = v10;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              v14 = *((_DWORD *)this + 22);
              if ( !v14 )
                v14 = v11;
              v15 = *(_DWORD *)(v9 + 164);
              if ( v14 + v13 > v15 )
              {
                v16 = v15 - v13;
                Size = v14 - v16;
                if ( u32BufferFlags != BUFFER_SILENT )
                {
                  memcpy_0((void *)(*((_QWORD *)this - 49) + v13), *((const void **)this - 44), (unsigned int)v16);
                  memcpy_0(
                    (void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 160LL)),
                    (const void *)(v16 + *((_QWORD *)this - 44)),
                    Size);
                }
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL))(
                  v2,
                  1LL,
                  v13,
                  (unsigned int)v16 / *((_DWORD *)this - 94),
                  &v22,
                  v4->u32BufferFlags,
                  0);
                v17 = *((_DWORD *)this - 94);
                v18 = *((float *)this - 77);
                HIDWORD(v24) = 2;
                v19 = (unsigned int)v16 / v17;
                *(_QWORD *)&v23 = v23 - v19;
                v20 = *((_QWORD *)this - 48);
                *((_QWORD *)&v23 + 1) += (unsigned int)(int)((double)(int)v19 * 10000000.0 / v18 + 0.5);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL))(
                  v2,
                  1LL,
                  *(unsigned int *)(v20 + 160),
                  Size / v17,
                  &v22,
                  v4->u32BufferFlags,
                  0);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v14);
              }
              else
              {
                if ( u32BufferFlags != BUFFER_SILENT )
                  memcpy_0((void *)(*((_QWORD *)this - 49) + v13), *((const void **)this - 44), v14);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v14);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL))(
                  v2,
                  1LL,
                  v13,
                  v14 / *((_DWORD *)this - 94),
                  &v22,
                  v4->u32BufferFlags,
                  0);
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*(_QWORD *)v2 + 88LL))(
              v2,
              1LL,
              v13,
              v6,
              &v22,
              u32BufferFlags,
              1);
            if ( v4->u32BufferFlags )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), v11);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 4) = 3;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(*v3, a2, (__int64)v2, 12, *v3, 0, v4->u32BufferFlags);
}
