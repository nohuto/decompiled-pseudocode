/*
 * XREFs of sub_140B0ED44 @ 0x140B0ED44
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14094F7C0 @ 0x14094F7C0 (sub_14094F7C0.c)
 *     sub_14095BE50 @ 0x14095BE50 (sub_14095BE50.c)
 *     sub_14095CDBC @ 0x14095CDBC (sub_14095CDBC.c)
 */

__int64 sub_140B0ED44()
{
  char v0; // r14
  __int64 v1; // rcx
  int v2; // edi
  int v3; // eax
  char v4; // al
  int v5; // esi
  int v6; // ebx
  __int64 v7; // rcx
  int v9; // eax
  int v10; // [rsp+30h] [rbp-D8h]
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  int v12; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v13; // [rsp+70h] [rbp-98h] BYREF
  int v14; // [rsp+74h] [rbp-94h] BYREF
  int v15; // [rsp+78h] [rbp-90h] BYREF
  int v16; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v17; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v20; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v21[16]; // [rsp+A8h] [rbp-60h] BYREF

  v12 = 0;
  v15 = 0;
  v0 = 0;
  LOWORD(v11) = 0;
  *(_DWORD *)(&v20.MaximumLength + 1) = 0;
  v19 = 0LL;
  Handle = 0LL;
  v14 = 0;
  memset(v21, 0, 0x78uLL);
  LODWORD(v21[1]) = 7;
  v21[0] = qword_140011F78;
  LODWORD(v21[3]) = 4;
  v21[2] = &v12;
  v21[5] = qword_140011F60;
  LODWORD(v21[6]) = 7;
  v21[7] = &v15;
  LODWORD(v21[8]) = 4;
  v21[12] = &v11;
  v21[10] = qword_140011F48;
  LODWORD(v21[11]) = 17;
  LODWORD(v21[13]) = 1;
  v2 = sub_140746CCC(v1, (int)L"SYSTEM", 7, 0LL, (__int64)v21, 3u);
  if ( v2 >= 0 )
  {
    if ( SLODWORD(v21[4]) >= 0 )
      v12 = (v12 & 3) != 0 ? v12 : 0;
    else
      v12 = 3;
    v3 = v15;
    *(_DWORD *)&v20.Length = 1835034;
    if ( SLODWORD(v21[9]) < 0 )
      v3 = 0;
    v15 = v3;
    v4 = v11;
    if ( SLODWORD(v21[14]) < 0 )
      v4 = 0;
    LOBYTE(v11) = v4;
    v20.Buffer = L"DeviceInstall";
    if ( sub_14067B470(&v20, 0x20019u, &v19, 0LL, 0) >= 0 )
    {
      v5 = 1;
      v6 = 0;
      v16 = 1;
      v17 = 0;
      if ( (int)sub_14082EBA4(
                  *(__int64 *)&qword_140D00AC0,
                  (__int64)v19,
                  (__int64)L"Parameters",
                  0,
                  0x20019u,
                  (__int64)&Handle) >= 0 )
      {
        if ( RtlIsStateSeparationEnabled() )
        {
          v13 = 4;
          if ( (int)sub_14082EB54(v7, Handle, L"DeviceInstallMode", &v14, &v16, &v13) < 0
            || v14 != 4
            || (v5 = v16, v13 != 4) )
          {
            v5 = 0;
          }
        }
        v13 = 4;
        if ( (int)sub_14082EB54(v7, Handle, L"DriverUpdatesPending", &v14, &v17, &v13) >= 0 && v14 == 4 && v13 == 4 )
          v6 = v17;
        ZwClose(Handle);
      }
      ZwClose(v19);
      if ( v5 )
      {
        dword_140D3B030 |= 2u;
        if ( v6 )
          sub_14094F7C0();
      }
    }
    dword_140D3B050 = v12;
    dword_140D3B0A4 = v15;
    if ( v12 )
    {
      if ( (dword_140D3B030 & 2) == 0 || (v15 & 0x20) != 0 )
      {
        v9 = sub_14095CDBC(0, (char *)&v11 + 1);
        v0 = BYTE1(v11);
        if ( v9 >= 0 )
        {
          if ( BYTE1(v11) )
            dword_140D3B030 |= 1u;
        }
      }
      if ( (_BYTE)v11 == 0xFF )
        dword_140D3B030 |= 1u;
    }
    if ( (dword_140D3B030 & 1) != 0 )
    {
      if ( !RtlIsStateSeparationEnabled() || (v2 = sub_14095BE50(), v2 >= 0) )
      {
        v2 = sub_140779850(1u, (__int64)sub_14094C2D0, 0LL);
        if ( v2 >= 0 )
        {
          if ( (_BYTE)v11 == 0xFF )
            sub_14077139C(
              *(__int64 *)&qword_140D00AC0,
              0LL,
              (__int64)L"SYSTEM",
              7u,
              0LL,
              v10,
              (__int64)qword_140011F48,
              0,
              0LL,
              0,
              0);
          if ( v0 )
            sub_14095CDBC(1, 0LL);
        }
      }
    }
  }
  return (unsigned int)v2;
}
