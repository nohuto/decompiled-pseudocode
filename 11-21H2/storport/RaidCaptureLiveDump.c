/*
 * XREFs of RaidCaptureLiveDump @ 0x1C004E240
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x1C004CBB4 (McTemplateK0quuujjzssszqqd_EtwWriteTransfer.c)
 *     RaCaptureLiveDumpAllowed @ 0x1C004DA8C (RaCaptureLiveDumpAllowed.c)
 */

__int64 __fastcall RaidCaptureLiveDump(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r15
  bool v6; // zf
  __int64 v8; // rsi
  int v9; // r14d
  __int64 v10; // r8
  int v11; // r10d
  __int64 v12; // r11
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // r11
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  const char *v19; // r8
  const char *v20; // rdx
  const char *v21; // rdi
  int v23; // [rsp+90h] [rbp-68h]
  __int128 v24; // [rsp+98h] [rbp-60h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-40h] BYREF

  LOBYTE(v3) = RaidNullAddress;
  v23 = RaidNullAddress;
  LOBYTE(v4) = 0;
  v6 = *(_DWORD *)a3 == 40;
  v25 = 0LL;
  v24 = 0LL;
  if ( v6
    && *(_DWORD *)(a3 + 4) == 40
    && *(_QWORD *)(a3 + 32)
    && (v8 = *(_QWORD *)(a3 + 16)) != 0
    && *(_DWORD *)(a3 + 24) == 1
    && (v9 = *(_DWORD *)(a3 + 8), (unsigned int)(v9 - 1) <= 1) )
  {
    if ( RaCaptureLiveDumpAllowed(a1, a2, a3) )
    {
      if ( v9 == 1 )
        v11 = 2;
      v4 = *(int *)(v10 + 12);
      if ( a2 )
        v14 = 0LL;
      else
        v14 = *(unsigned __int16 *)(a1 + 4608);
      v13 = DbgkWerCaptureLiveKernelDump(v8, 481LL, 1LL, v4, v14, v12, v10, RaidCaptureLiveDumpCallBack, v11);
    }
    else
    {
      v13 = -1073741823;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a2 + 96);
      v23 = v3;
      v25 = *(_OWORD *)(a2 + 1976);
    }
    v15 = *(_QWORD *)(a1 + 16);
    v26 = *(_OWORD *)(a1 + 4936);
    RaidDriverGetName(v15, (__int64)&v24);
    if ( (byte_1C00799E6 & 8) != 0 )
    {
      if ( a2 )
        v17 = 0LL;
      else
        v17 = *(unsigned __int16 *)(a1 + 4608);
      v18 = (const wchar_t *)&unk_1C006A690;
      if ( v16 )
        v18 = v16;
      if ( a2 )
      {
        v19 = (const char *)(a2 + 186);
        v20 = (const char *)(a2 + 169);
        v21 = (const char *)(a2 + 160);
      }
      else
      {
        v21 = (const char *)&dword_1C006A660;
        v19 = (const char *)&dword_1C006A660;
        v20 = (const char *)&dword_1C006A660;
      }
      McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
        v17,
        (__int64)v20,
        (__int64)v19,
        *(_DWORD *)(a1 + 56),
        v3,
        SBYTE1(v23),
        SBYTE2(v23),
        (__int64)&v25,
        (__int64)&v26,
        *((const wchar_t **)&v24 + 1),
        v21,
        v20,
        v19,
        v18,
        v17,
        v4,
        v13);
    }
  }
  return v13;
}
