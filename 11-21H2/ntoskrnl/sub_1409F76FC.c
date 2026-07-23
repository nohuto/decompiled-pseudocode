/*
 * XREFs of sub_1409F76FC @ 0x1409F76FC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 *     sub_1409F8018 @ 0x1409F8018 (sub_1409F8018.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_1409F76FC(unsigned __int64 a1, int a2)
{
  char v4; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  _OWORD *v9; // rcx
  wchar_t *v10; // rax
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  _DWORD ValueData[4]; // [rsp+30h] [rbp-388h] BYREF
  _OWORD v14[27]; // [rsp+40h] [rbp-378h] BYREF
  wchar_t v15[216]; // [rsp+1F0h] [rbp-1C8h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = 0;
  if ( a2 == 172 )
  {
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 172 > 0x7FFFFFFF0000LL || a1 + 172 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v14[0] = *(_OWORD *)a1;
    v14[1] = *(_OWORD *)(a1 + 16);
    v14[2] = *(_OWORD *)(a1 + 32);
    v14[3] = *(_OWORD *)(a1 + 48);
    v14[4] = *(_OWORD *)(a1 + 64);
    v14[5] = *(_OWORD *)(a1 + 80);
    v14[6] = *(_OWORD *)(a1 + 96);
    v14[7] = *(_OWORD *)(a1 + 112);
    v6 = a1 + 128;
    v14[8] = *(_OWORD *)v6;
    v14[9] = *(_OWORD *)(v6 + 16);
    *(_QWORD *)&v14[10] = *(_QWORD *)(v6 + 32);
    DWORD2(v14[10]) = *(_DWORD *)(v6 + 40);
    memset((char *)&v14[10] + 12, 0, 0x100uLL);
    BYTE12(v14[26]) = 1;
  }
  else
  {
    if ( a2 != 432 )
      return -1073741820;
    v5 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 432 > 0x7FFFFFFF0000LL || a1 + 432 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = v14;
    v8 = 3LL;
    do
    {
      *v7 = *(_OWORD *)a1;
      v7[1] = *(_OWORD *)(a1 + 16);
      v7[2] = *(_OWORD *)(a1 + 32);
      v7[3] = *(_OWORD *)(a1 + 48);
      v7[4] = *(_OWORD *)(a1 + 64);
      v7[5] = *(_OWORD *)(a1 + 80);
      v7[6] = *(_OWORD *)(a1 + 96);
      v7 += 8;
      *(v7 - 1) = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      --v8;
    }
    while ( v8 );
    *v7 = *(_OWORD *)a1;
    v7[1] = *(_OWORD *)(a1 + 16);
    v7[2] = *(_OWORD *)(a1 + 32);
  }
  sub_1407D6F54(1u);
  v9 = (_OWORD *)*((_QWORD *)sub_140347DB0() + 157);
  v10 = v15;
  do
  {
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_OWORD *)v10 + 2) = v9[2];
    *((_OWORD *)v10 + 3) = v9[3];
    *((_OWORD *)v10 + 4) = v9[4];
    *((_OWORD *)v10 + 5) = v9[5];
    *((_OWORD *)v10 + 6) = v9[6];
    v10 += 64;
    *((_OWORD *)v10 - 1) = v9[7];
    v9 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v10 = *v9;
  *((_OWORD *)v10 + 1) = v9[1];
  *((_OWORD *)v10 + 2) = v9[2];
  ExReleaseResourceLite(&stru_140C15AC0);
  KeLeaveCriticalRegion();
  if ( !PsIsCurrentThreadInServerSilo()
    || (v4 = sub_1409F8018()) != 0
    || (ValueData[0] = 1,
        result = RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u),
        result >= 0) )
  {
    v12 = sub_1409BA71C((wchar_t *)v14, 0x1B0u);
    if ( v12 >= 0 )
      v12 = sub_1409F8350(0LL, 0LL);
    if ( v12 < 0 )
    {
      sub_1409BA71C(v15, 0x1B0u);
      if ( PsIsCurrentThreadInServerSilo() && !v4 )
      {
        ValueData[0] = 0;
        RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, ValueData, 4u);
      }
    }
    return v12;
  }
  return result;
}
