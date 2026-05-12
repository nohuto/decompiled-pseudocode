/*
 * XREFs of StorEtwMiniportLogError @ 0x1C004510C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0035AAC (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer @ 0x1C0044410 (McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0070E34 (StorpTelemetryMiniportLogError.c)
 */

__int64 __fastcall StorEtwMiniportLogError(
        __int64 a1,
        __int64 a2,
        int a3,
        const wchar_t *a4,
        unsigned int a5,
        __int64 a6)
{
  char v6; // r12
  unsigned int v7; // ebx
  char v8; // r13
  char v9; // r14
  _DWORD *Adapter; // rax
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 Unit; // rax
  int v14; // r8d
  int v15; // r9d
  __int64 FirstUnit; // rdi
  const int *v17; // r15
  const char *v18; // r9
  int v19; // eax
  const char *v20; // r8
  const char *v21; // rdx
  NTSTATUS v22; // r14d
  unsigned int v23; // r14d
  const int *v24; // rcx
  const int *v25; // rax
  unsigned int v26; // edx
  char v28; // [rsp+90h] [rbp-49h]
  unsigned int v29; // [rsp+94h] [rbp-45h]
  __int128 v32; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-9h] BYREF

  v6 = -1;
  v7 = 0;
  v8 = -1;
  v28 = -1;
  v9 = -1;
  HIBYTE(v29) = -1;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (byte_1C0092A04 & 0x20) != 0 )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v11 = (__int64)Adapter;
    if ( !Adapter )
      return (unsigned int)-1056964602;
    RaidDriverGetName(*((_QWORD *)Adapter + 2), (__int64)&v32);
    v33 = *(_OWORD *)(v11 + 5000);
    if ( v12 )
    {
      if ( *(_WORD *)v12 != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)(v12 + 4) < 4u )
        return (unsigned int)-1056964602;
      v9 = *(_BYTE *)(v12 + 10);
      v6 = *(_BYTE *)(v12 + 8);
      v8 = *(_BYTE *)(v12 + 9);
      LOBYTE(v29) = v6;
      BYTE1(v29) = v8;
      BYTE2(v29) = v9;
      v28 = v9;
      Unit = RaidAdapterFindUnit(v11, v29);
      FirstUnit = Unit;
      if ( !Unit )
        return (unsigned int)-1056964602;
      v34 = *(_OWORD *)(Unit + 2024);
    }
    else
    {
      FirstUnit = RaidAdapterGetFirstUnit(v11);
    }
    v17 = &dword_1C0081784;
    if ( (byte_1C0092A04 & 0x20) != 0 )
    {
      if ( FirstUnit )
      {
        v18 = (const char *)(FirstUnit + 186);
        LOBYTE(v19) = *(_BYTE *)(FirstUnit + 450) & 1;
        v20 = (const char *)(FirstUnit + 169);
        v21 = (const char *)(FirstUnit + 160);
      }
      else
      {
        v18 = (const char *)&dword_1C0081784;
        v19 = *(unsigned __int8 *)(v11 + 104) >> 7;
        v20 = (const char *)&dword_1C0081784;
        v21 = (const char *)&dword_1C0081784;
      }
      v22 = McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer(
              a5,
              (__int64)v21,
              (__int64)v20,
              *(_DWORD *)(v11 + 56),
              v6,
              v8,
              v9,
              (__int64)&v34,
              (__int64)&v33,
              *((const wchar_t **)&v32 + 1),
              v21,
              v20,
              v18,
              v19,
              a5,
              a6,
              a3,
              a4);
    }
    else
    {
      v22 = 0;
    }
    v23 = (v22 >> 31) & 0xC1000001;
    if ( FirstUnit )
    {
      v24 = (const int *)(FirstUnit + 186);
      v25 = (const int *)(FirstUnit + 169);
      v17 = (const int *)(FirstUnit + 160);
    }
    else
    {
      v24 = &dword_1C0081784;
      v25 = &dword_1C0081784;
    }
    LOBYTE(v14) = v8;
    LOBYTE(v15) = v28;
    v26 = a5;
    LOBYTE(v26) = v6;
    StorpTelemetryMiniportLogError(
      *(_DWORD *)(v11 + 56),
      v26,
      v14,
      v15,
      (__int64)&v34,
      (__int64)&v33,
      *((__int64 *)&v32 + 1),
      (__int64)v17,
      (__int64)v25,
      (__int64)v24,
      a5,
      a6,
      a3,
      (__int64)a4);
    return v23;
  }
  return v7;
}
