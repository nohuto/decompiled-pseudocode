/*
 * XREFs of sub_140AFCEF0 @ 0x140AFCEF0
 * Callers:
 *     sub_140B0AA3C @ 0x140B0AA3C (sub_140B0AA3C.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14025B190 (RtlGetProductInfo.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     sub_1403C03EC @ 0x1403C03EC (sub_1403C03EC.c)
 *     sub_1403D9134 @ 0x1403D9134 (sub_1403D9134.c)
 *     sub_14082CE58 @ 0x14082CE58 (sub_14082CE58.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AFD554 @ 0x140AFD554 (sub_140AFD554.c)
 *     sub_140AFF6B0 @ 0x140AFF6B0 (sub_140AFF6B0.c)
 *     sub_140B1A290 @ 0x140B1A290 (sub_140B1A290.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 *     sub_140B28EB0 @ 0x140B28EB0 (sub_140B28EB0.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 *     sub_140B2E354 @ 0x140B2E354 (sub_140B2E354.c)
 *     sub_140B2F564 @ 0x140B2F564 (sub_140B2F564.c)
 *     sub_140B2FC64 @ 0x140B2FC64 (sub_140B2FC64.c)
 *     sub_140B2FFCC @ 0x140B2FFCC (sub_140B2FFCC.c)
 *     sub_140B30628 @ 0x140B30628 (sub_140B30628.c)
 *     sub_140B306CC @ 0x140B306CC (sub_140B306CC.c)
 */

char __fastcall sub_140AFCEF0(__int64 a1)
{
  unsigned int v2; // ebx
  bool i; // di
  bool v4; // bl
  bool v5; // di
  bool v6; // bl
  char v7; // di
  char v8; // bl
  char v9; // di
  char v10; // al
  char v11; // bl
  char v12; // al
  char v13; // di
  _OWORD *PoolWithTag; // rax
  char v15; // bl
  char v16; // di
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v21[8]; // [rsp+38h] [rbp-19h] BYREF
  int v22; // [rsp+40h] [rbp-11h]
  _DWORD v23[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h]
  __int64 v25; // [rsp+58h] [rbp+7h]
  void (__fastcall *v26)(int, struct _EX_RUNDOWN_REF **); // [rsp+60h] [rbp+Fh]
  __int64 *v27; // [rsp+68h] [rbp+17h]
  _DWORD v28[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+80h] [rbp+2Fh]
  void (__fastcall *v31)(int); // [rsp+88h] [rbp+37h]
  __int64 v32; // [rsp+90h] [rbp+3Fh]
  ULONG ReturnedProductType; // [rsp+B8h] [rbp+67h] BYREF

  dword_140C5B130 = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    dword_140C5B130 = 10240;
  qword_140D3CCA0 = 0LL;
  qword_140D3CF40 = (__int64)&qword_140D3CF38;
  qword_140D3CF38 = (__int64)&qword_140D3CF38;
  qword_140C15958 = 0LL;
  qword_140C158B0 = 0LL;
  qword_140D3B0A8 = 0LL;
  v2 = 0;
  for ( i = (int)sub_140B240EC() >= 0; v2 < (unsigned int)dword_140D06884; ++v2 )
    sub_1403C03EC(qword_140D088C0[v2], 0);
  v4 = (unsigned __int8)sub_140B306CC() != 0 && i;
  v5 = (unsigned __int8)sub_140B2F564() != 0 && v4;
  v6 = (unsigned __int8)sub_140B1A290() != 0 && v5;
  v7 = (unsigned __int8)sub_140B28EB0() != 0 && v6;
  v8 = (unsigned __int8)sub_140B30628() != 0 ? v7 : 0;
  v9 = (unsigned __int8)sub_140AFF6B0() != 0 ? v8 : 0;
  qword_140C10DD0 = ExAllocateTimer((__int64)sub_1402524E0, 0LL, 8u);
  if ( qword_140C10DD0 && (qword_140C10DD8 = ExAllocateTimer((__int64)sub_1402524E0, 1LL, 8u)) != 0 )
  {
    dword_140C10DC4 = 0;
    v10 = 1;
    dword_140C10DC0 = 0;
    dword_140C10DC8 = 1;
  }
  else
  {
    v10 = 0;
  }
  v11 = v10 != 0 ? v9 : 0;
  v12 = sub_140B2FC64();
  qword_140CF6898 = 0LL;
  v13 = v12 != 0 ? v11 : 0;
  qword_140D3B1E8 = MEMORY[0xFFFFF78000000014];
  if ( (int)sub_140B2A324() < 0 )
    v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20666E57u);
  qword_140CE1A80 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_DWORD *)PoolWithTag = 3148040;
    *((_QWORD *)PoolWithTag + 3) = sub_1406D7D20;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
  }
  else
  {
    v13 = 0;
  }
  v15 = (unsigned __int8)sub_140AFD554() != 0 ? v13 : 0;
  if ( (int)sub_140B2DEA8() < 0 )
    v15 = 0;
  v16 = sub_1403D9134() != 0 ? v15 : 0;
  v17 = ExpMicrocodeInitialization(1LL);
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741637 )
    v16 = 0;
  sub_140B2FFCC(*(_QWORD *)(a1 + 240) + 2600LL);
  ReturnedProductType = 0;
  v22 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && sub_14082CE58(ReturnedProductType, (__int64)v21)
    && MEMORY[0xFFFFF78000000264] != v22
    && (MEMORY[0xFFFFF78000000264] != 2 || v22 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v22;
  }
  v28[1] = 5;
  v31 = sub_14085B800;
  v29 = 1LL;
  v28[0] = 65537;
  v30 = 0LL;
  v32 = 0LL;
  if ( (int)sub_1408486C4(&qword_140D3B080, v18, (unsigned __int16 *)v28) < 0 )
    qword_140D3B080 = 0LL;
  if ( byte_140D0688B )
  {
    v23[1] = 17;
    v24 = 512LL;
    v26 = sub_140A07DF0;
    v25 = 0LL;
    if ( (dword_140D0688C & 2) != 0 )
    {
      v23[0] = 196623;
      v27 = &qword_140C10D18;
      if ( (int)sub_1408486C4(&qword_140C10D18, v19, (unsigned __int16 *)v23) < 0 )
        qword_140C10D18 = 0LL;
    }
    else
    {
      v23[0] = 196624;
      v27 = &qword_140C10D20;
      if ( (int)sub_1408486C4(&qword_140C10D20, v19, (unsigned __int16 *)v23) < 0 )
        qword_140C10D20 = 0LL;
    }
  }
  sub_140B2E354();
  return v16;
}
