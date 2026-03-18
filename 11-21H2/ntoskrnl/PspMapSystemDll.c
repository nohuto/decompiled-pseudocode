/*
 * XREFs of PspMapSystemDll @ 0x140756AD4
 * Callers:
 *     PsMapSystemDlls @ 0x140756164 (PsMapSystemDlls.c)
 *     PsLocateSystemDlls @ 0x1408455C8 (PsLocateSystemDlls.c)
 *     PspLocateSystemDll @ 0x14084565C (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x140B313B8 (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MmMapViewOfSectionEx @ 0x1402D6B9C (MmMapViewOfSectionEx.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PspReferenceSystemDll @ 0x140757130 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r12
  int v9; // r8d
  int v10; // edx
  unsigned __int64 v11; // xmm0_8
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+68h] [rbp-31h] BYREF
  __int64 v21; // [rsp+70h] [rbp-29h] BYREF
  __int128 v22; // [rsp+78h] [rbp-21h] BYREF
  __int64 v23; // [rsp+88h] [rbp-11h]
  _QWORD v24[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v25; // [rsp+B0h] [rbp+17h]

  v8 = PspReferenceSystemDll(*(_QWORD *)a2);
  if ( v8 )
  {
    v19 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v9 = *(_DWORD *)(a2 + 8);
    v10 = 2;
    v24[0] = 1LL;
    v24[1] = &v22;
    v24[2] = 5LL;
    v24[3] = 32LL;
    v25 = 0LL;
    if ( (v9 & 0x20) != 0 )
    {
      v10 = 3;
      *((_QWORD *)&v25 + 1) = *(unsigned __int16 *)(a2 + 10);
      LOBYTE(v25) = 6;
    }
    v23 = 0LL;
    v22 = 0LL;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v12 = (a3 != 0 ? 0x20000000 : 0) | 0x40000;
    if ( !a4 )
      v12 = a3 != 0 ? 0x20000000 : 0;
    v13 = v11;
    if ( (v9 & 8) == 0 )
      v13 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v22 + 1) = v13;
    v14 = MmMapViewOfSectionEx(v8, (int)a1, (int)&v19, (__int64)&v21, (__int64)&v20, v12, 2, v24, v10, 0, 0LL);
    ObFastDereferenceObject(*(signed __int64 **)a2, v8, 0x64537350u);
    if ( v14 == 1073741827 )
    {
      if ( a1 != PsInitialSystemProcess )
        return (unsigned int)-1073741800;
    }
    else if ( (v14 & 0x80000000) != 0 )
    {
      return v14;
    }
    if ( a4 )
    {
      v16 = v19;
      v14 = 0;
      v17 = RtlImageNtHeader(v19);
      if ( *(_WORD *)(v17 + 24) == 267 )
        v18 = *(unsigned int *)(v17 + 52);
      else
        v18 = *(_QWORD *)(v17 + 48);
      *(_QWORD *)(a2 + 32) = v18;
      *(_QWORD *)(a2 + 40) = v16;
      return v14;
    }
    if ( *(_QWORD *)(a2 + 32) == v19 )
      return v14;
  }
  return 3221225473LL;
}
