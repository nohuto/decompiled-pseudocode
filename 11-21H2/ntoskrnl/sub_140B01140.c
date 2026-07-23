/*
 * XREFs of sub_140B01140 @ 0x140B01140
 * Callers:
 *     sub_140B01250 @ 0x140B01250 (sub_140B01250.c)
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_140826B04 @ 0x140826B04 (sub_140826B04.c)
 *     sub_140826B28 @ 0x140826B28 (sub_140826B28.c)
 */

__int64 __fastcall sub_140B01140(int *a1)
{
  int v1; // esi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // [rsp+60h] [rbp+38h] BYREF
  int v15; // [rsp+68h] [rbp+40h] BYREF
  int v16; // [rsp+70h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+50h] BYREF

  KeyHandle = 0LL;
  v16 = 0;
  v1 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A224[2 * v8] = -1073740768;
    dword_140C2A220[2 * v8] = 262244;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x64u, 0LL);
  }
  *a1 = 0;
  v3 = sub_14075CB14(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v3 )
  {
    if ( v3 == -1073741772 )
      a1[2] |= 2u;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    if ( !sub_140826B28(KeyHandle, L"DisableDeviceFlags", &v14) && v14 == 1 )
    {
      a1[2] |= 4u;
      v1 = 2;
    }
    if ( !sub_140826B28(KeyHandle, L"DisableDriverShims", &v15) && v15 == 1 )
    {
      v1 |= 1u;
      a1[2] |= 8u;
    }
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v9]) = 0;
    LODWORD(qword_140C2A440[v9]) = 262275;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(0LL, "KSE: Engine has group policy flags: %08x\n", v1);
    sub_1403C09C8(0);
    sub_140826B04(KeyHandle);
    KeyHandle = 0LL;
  }
  v4 = sub_14075CB14(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility", 0LL, &KeyHandle);
  v5 = v4;
  if ( v4 == -1073741772 )
  {
    a1[2] |= 1u;
    goto LABEL_8;
  }
  if ( v4 < 0 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A224[2 * v10] = v5;
    dword_140C2A220[2 * v10] = 262304;
    if ( (dword_140D04880 & 2) != 0 )
      sub_14057D738(0LL, "KSE: Error reading compatibility key: status: %08x\n", v5);
    sub_140368C88(0LL, (__int64)"KSE: Error reading compatibility key: status: %08x\n", v5);
  }
  else
  {
    v5 = sub_140826B28(KeyHandle, L"DisableFlags", &v16);
    if ( v5 == -1073741772 )
    {
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    if ( (v5 & 0x80000000) == 0 )
    {
      v12 = v16 & 3;
      *a1 = v12;
      if ( (v12 & 1) != 0 )
        a1[2] |= 0x20u;
      if ( (v12 & 2) != 0 )
        a1[2] |= 0x10u;
      v13 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
      HIDWORD(qword_140C2A440[v13]) = 0;
      LODWORD(qword_140C2A440[v13]) = 262343;
      if ( (dword_140D04880 & 1) != 0 )
        sub_14057D738(0LL, "KSE: Engine initialized with registry flags: %08x\n", *a1);
      sub_1403C09C8(0);
    }
    else
    {
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A224[2 * v11] = v5;
      dword_140C2A220[2 * v11] = 262326;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(0LL, "KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
      sub_140368C88(0LL, (__int64)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
    }
  }
LABEL_9:
  *a1 |= v1;
  v6 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
  HIDWORD(qword_140C2A440[v6]) = 0;
  LODWORD(qword_140C2A440[v6]) = 262354;
  if ( (dword_140D04880 & 1) != 0 )
    sub_14057D738(0LL, "KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  sub_1403C09C8(0);
  sub_140826B04(KeyHandle);
  return v5;
}
