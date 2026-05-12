/*
 * XREFs of StorEtwMiniportLogError @ 0x1C00424D0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0034C40 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer @ 0x1C0041974 (McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0062C18 (StorpTelemetryMiniportLogError.c)
 */

__int64 __fastcall StorEtwMiniportLogError(__int64 a1, __int64 a2, int a3, const wchar_t *a4, int a5, __int64 a6)
{
  char v6; // r15
  unsigned int v7; // ebx
  char v8; // bp
  char v9; // r12
  char v10; // r13
  _DWORD *Adapter; // rax
  __int64 v12; // rsi
  __int64 v13; // r11
  __int64 Unit; // rax
  int v15; // r8d
  int v16; // r9d
  __int64 FirstUnit; // rdi
  const int *v18; // r14
  const char *v19; // r8
  int v20; // eax
  const char *v21; // rdx
  const char *v22; // rcx
  NTSTATUS v23; // ebp
  unsigned int v24; // ebp
  const int *v25; // rcx
  const int *v26; // rax
  int v27; // edx
  unsigned int v29; // [rsp+90h] [rbp-88h]
  __int128 v32; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-50h] BYREF

  v6 = -1;
  v7 = 0;
  v8 = a3;
  HIBYTE(v29) = -1;
  v9 = -1;
  v10 = -1;
  v32 = 0LL;
  v33 = 0LL;
  if ( (byte_1C00799E4 & 0x10) != 0 )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v12 = (__int64)Adapter;
    if ( !Adapter )
      return (unsigned int)-1056964602;
    RaidDriverGetName(*((_QWORD *)Adapter + 2), (__int64)&v32);
    v34 = *(_OWORD *)(v12 + 4936);
    if ( v13 )
    {
      if ( *(_WORD *)v13 != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)(v13 + 4) < 4u )
        return (unsigned int)-1056964602;
      v6 = *(_BYTE *)(v13 + 8);
      v9 = *(_BYTE *)(v13 + 9);
      v10 = *(_BYTE *)(v13 + 10);
      LOBYTE(v29) = v6;
      BYTE1(v29) = v9;
      BYTE2(v29) = v10;
      Unit = RaidAdapterFindUnit(v12, v29);
      FirstUnit = Unit;
      if ( !Unit )
        return (unsigned int)-1056964602;
      v33 = *(_OWORD *)(Unit + 1976);
    }
    else
    {
      FirstUnit = RaidAdapterGetFirstUnit(v12);
    }
    v18 = &dword_1C006A660;
    if ( (byte_1C00799E4 & 0x10) != 0 )
    {
      if ( FirstUnit )
      {
        v19 = (const char *)(FirstUnit + 186);
        LOBYTE(v20) = *(_BYTE *)(FirstUnit + 450) & 1;
        v21 = (const char *)(FirstUnit + 169);
        v22 = (const char *)(FirstUnit + 160);
      }
      else
      {
        v19 = (const char *)&dword_1C006A660;
        v20 = *(unsigned __int8 *)(v12 + 104) >> 7;
        v21 = (const char *)&dword_1C006A660;
        v22 = (const char *)&dword_1C006A660;
      }
      v23 = McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer(
              (__int64)v22,
              (__int64)v21,
              (__int64)v19,
              *(_DWORD *)(v12 + 56),
              v6,
              v9,
              v10,
              (__int64)&v33,
              (__int64)&v34,
              *((const wchar_t **)&v32 + 1),
              v22,
              v21,
              v19,
              v20,
              a5,
              a6,
              v8,
              a4);
    }
    else
    {
      v23 = 0;
    }
    v24 = (v23 >> 31) & 0xC1000001;
    if ( FirstUnit )
    {
      v25 = (const int *)(FirstUnit + 186);
      v26 = (const int *)(FirstUnit + 169);
      v18 = (const int *)(FirstUnit + 160);
    }
    else
    {
      v25 = &dword_1C006A660;
      v26 = &dword_1C006A660;
    }
    LOBYTE(v16) = v10;
    LOBYTE(v15) = v9;
    v27 = a5;
    LOBYTE(v27) = v6;
    StorpTelemetryMiniportLogError(
      *(_DWORD *)(v12 + 56),
      v27,
      v15,
      v16,
      (__int64)&v33,
      (__int64)&v34,
      *((__int64 *)&v32 + 1),
      (__int64)v18,
      (__int64)v26,
      (__int64)v25,
      a5,
      a6,
      a3,
      (__int64)a4);
    return v24;
  }
  return v7;
}
