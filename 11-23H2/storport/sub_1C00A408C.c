/*
 * XREFs of sub_1C00A408C @ 0x1C00A408C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0004960 @ 0x1C0004960 (sub_1C0004960.c)
 *     sub_1C0004A74 @ 0x1C0004A74 (sub_1C0004A74.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0020EFC @ 0x1C0020EFC (sub_1C0020EFC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C004ACB0 @ 0x1C004ACB0 (sub_1C004ACB0.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 */

__int64 __fastcall sub_1C00A408C(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // r12d
  int v10; // esi
  int v11; // r13d
  __int64 v12; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rsi
  int v23; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 *v33; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v35; // [rsp+48h] [rbp-51h]
  int v36; // [rsp+80h] [rbp-19h]
  int v37; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v37 = 0;
  v36 = -1;
  v5 = 0;
  if ( byte_1C0093AEC )
  {
    Context[451] |= 0x20u;
    goto LABEL_16;
  }
  if ( !v2 || (*(_BYTE *)(v2 + 108) & 8) != 0 || *((_DWORD *)Context + 466) == 1 )
  {
LABEL_61:
    v5 = -1073741823;
    goto LABEL_16;
  }
  if ( !sub_1C0008B84((__int64)Context) )
  {
    if ( (Context[449] & 0x80u) != 0 )
    {
      v5 = -1073741738;
      goto LABEL_16;
    }
    v6 = _interlockedbittestandset((volatile signed __int32 *)Context + 114, 0);
    v37 = v6;
    if ( !v6 )
    {
      Context[449] ^= (Context[449] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( sub_1C0004890((__int64)Context, 4) )
        v5 = sub_1C0018524(*((_QWORD *)Context + 3) + 336LL);
      if ( *((_QWORD *)Context + 224) )
        goto LABEL_26;
      if ( (*(_BYTE *)(v2 + 104) & 0x20) != 0 )
      {
        v18 = 0;
        v19 = 264LL;
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
          goto LABEL_41;
      }
      else
      {
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
        {
          v5 = -1073741637;
LABEL_14:
          Context[449] &= ~4u;
LABEL_15:
          sub_1C0020EFC(*((struct _DEVICE_OBJECT **)Context + 1), (Context[449] & 4) != 0);
          goto LABEL_16;
        }
        v18 = 0;
      }
      v20 = *(_QWORD *)(v2 + 4896);
      v19 = 264LL;
      if ( v20 && (*(_DWORD *)(v20 + 20) & 0x100) == 0 )
      {
        v18 = 1;
        v19 = 296LL;
      }
LABEL_41:
      v21 = sub_1C0007CF4(64LL, v19, 1330667858LL, *((_QWORD *)Context + 1));
      v22 = (_QWORD *)v21;
      if ( v21 )
      {
        v23 = *(_DWORD *)(v21 + 32);
        *(_DWORD *)(v21 + 16) = 0;
        *(_DWORD *)(v21 + 32) = v23 & 0xFFFFFFF1 | 0xA;
        *(_QWORD *)(v21 + 88) = v21 + 80;
        *(_QWORD *)(v21 + 80) = v21 + 80;
        KeInitializeSpinLock((PKSPIN_LOCK)(v21 + 96));
        v22[1] = v22 + 23;
        *((_DWORD *)v22 + 47) = 16;
        *((_DWORD *)v22 + 46) = 1;
        *((_DWORD *)v22 + 48) = 1;
        *((_DWORD *)v22 + 52) = 1;
        *((_DWORD *)v22 + 50) = 1;
        *((_DWORD *)v22 + 51) = 32;
        *(_OWORD *)(v22 + 27) = xmmword_1C008A070;
        *((_DWORD *)v22 + 58) = 1;
        *((_DWORD *)v22 + 59) = 32;
        v22[30] = 0LL;
        v22[31] = 0LL;
        *((_DWORD *)v22 + 64) = -1;
        if ( v18 )
        {
          *((_DWORD *)v22 + 49) |= 0x100u;
          *((_DWORD *)v22 + 52) = 2;
          *((_DWORD *)v22 + 66) = 1;
          *((_DWORD *)v22 + 67) = 32;
          v22[34] = 0LL;
          v22[35] = 0LL;
          *((_DWORD *)v22 + 72) = -1;
          *((_DWORD *)v22 + 8) |= 0x1000u;
        }
        v5 = sub_1C004CB40(*((_QWORD *)Context + 1), (int *)v22 + 46, (__int64)Context, (__int64)v22);
        if ( v5 >= 0 )
        {
          if ( *v22 )
          {
            PoFxSetComponentLatency(*v22, 0LL, -1LL);
            PoFxSetComponentResidency(*v22, 0LL, -1LL);
            v24 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 223);
            *((_QWORD *)Context + 224) = v22;
            ExReInitializeRundownProtectionCacheAware(v24);
            Context[449] |= 0x80u;
LABEL_47:
            *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 224)
                                                                                               + 32LL)) & 1;
            v25 = *((_DWORD *)Context + 467);
            v26 = *((_QWORD *)Context + 224);
            if ( v25 != -1 )
              goto LABEL_58;
            v27 = *(_DWORD **)(v26 + 8);
            if ( *v27 < 2u )
              goto LABEL_57;
            v28 = v27[3];
            if ( (v28 & 0x10) != 0 )
            {
              v25 = v27[4];
              goto LABEL_58;
            }
            if ( *v27 >= 3u && (v28 & 0x20) != 0 )
              v25 = 0;
            else
LABEL_57:
              v25 = 300000;
LABEL_58:
            *(_DWORD *)(v26 + 24) = v25;
            *(_DWORD *)(*((_QWORD *)Context + 224) + 20LL) = *(_DWORD *)(a2 + 12);
            sub_1C0004A74((__int64)Context, *(_DWORD *)(a2 + 12), 1);
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 224));
            v30 = *((_QWORD *)Context + 224);
            if ( (*(_DWORD *)(v30 + 32) & 0x100) != 0 )
            {
              LOBYTE(v29) = 1;
              PoRegisterCoalescingCallback(sub_1C004D880, v29, v30 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &stru_1C0088AE0,
                (PPOWER_SETTING_CALLBACK)sub_1C004DAE0,
                Context,
                (PVOID *)(*((_QWORD *)Context + 224) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 224) + 120LL) = ExAllocateTimer(sub_1C004DAC0, Context, 0LL, v31);
              *(_QWORD *)(*((_QWORD *)Context + 224) + 128LL) = ExAllocateTimer(sub_1C004D6F0, Context, 0LL, v32);
            }
            goto LABEL_15;
          }
          v5 = -1073741823;
        }
        ExFreePoolWithTag(v22, 0x4F506152u);
      }
      else
      {
        v5 = -1073741670;
      }
LABEL_26:
      if ( v5 < 0 )
        goto LABEL_14;
      goto LABEL_47;
    }
    goto LABEL_61;
  }
  v14 = *((_QWORD *)Context + 224);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    if ( _bittest((const signed __int32 *)(*((_QWORD *)Context + 224) + 32LL), 8u) )
      sub_1C0004960((__int64)Context);
    else
      sub_1C0004A74((__int64)Context, *(_DWORD *)(a2 + 12), 0);
  }
  v16 = *((_QWORD *)Context + 224);
  v17 = *(_DWORD *)(a2 + 8) & 1;
  if ( v17 != (*(_DWORD *)(v16 + 32) & 1) )
    *(_DWORD *)(v16 + 32) = v17 | *(_DWORD *)(v16 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
LABEL_16:
  if ( byte_1C0093BE8 )
  {
    v7 = *((_QWORD *)Context + 3);
    v8 = 0LL;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( v7 )
      v36 = *(_DWORD *)(v7 + 56);
    if ( sub_1C0008B84((__int64)Context) )
    {
      v33 = (__int64 *)*((_QWORD *)Context + 224);
      v8 = *v33;
      v10 = v33[4] & 1;
      v11 = *((_DWORD *)v33 + 5);
      v9 = *(_DWORD *)(v33[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
    }
    if ( (byte_1C0093A02 & 0x10) != 0 )
    {
      v35 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v36;
      sub_1C004ACB0(
        *(_DWORD *)(a2 + 8) & 1,
        v35,
        v12,
        v8,
        Handle,
        Context[96],
        Context[97],
        Context[98],
        v5,
        v35,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v9,
        (Context[449] >> 2) & 1,
        v10,
        v11);
    }
  }
  if ( !v37 )
    *((_DWORD *)Context + 114) &= ~1u;
  return (unsigned int)v5;
}
