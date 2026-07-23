/*
 * XREFs of PspMapSystemDll @ 0x1407A34D0
 * Callers:
 *     PsMapSystemDlls @ 0x1407A33B8 (PsMapSystemDlls.c)
 *     PsLocateSystemDlls @ 0x14084D60C (PsLocateSystemDlls.c)
 *     PspLocateSystemDll @ 0x14084D694 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x140B75C30 (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x14032A5EC (MmMapViewOfSectionEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PspReferenceSystemDll @ 0x1407A3694 (PspReferenceSystemDll.c)
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
  PVOID v16; // rsi
  PIMAGE_NT_HEADERS v17; // rax
  unsigned __int64 ImageBase_high; // rcx
  __int64 v19; // [rsp+58h] [rbp-51h]
  PVOID BaseOfImage; // [rsp+70h] [rbp-39h] BYREF
  __int64 v21; // [rsp+78h] [rbp-31h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h] BYREF
  __int128 v23; // [rsp+88h] [rbp-21h] BYREF
  __int64 v24; // [rsp+98h] [rbp-11h]
  _QWORD v25[4]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v26; // [rsp+C0h] [rbp+17h]

  v8 = PspReferenceSystemDll(*(_QWORD *)a2);
  if ( v8 )
  {
    BaseOfImage = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v9 = *(_DWORD *)(a2 + 8);
    v10 = 2;
    v25[0] = 1LL;
    v25[1] = &v23;
    v25[2] = 5LL;
    v25[3] = 32LL;
    v26 = 0LL;
    if ( (v9 & 0x20) != 0 )
    {
      v10 = 3;
      *((_QWORD *)&v26 + 1) = *(unsigned __int16 *)(a2 + 10);
      LOBYTE(v26) = 6;
    }
    v24 = 0LL;
    v23 = 0LL;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v12 = (a3 != 0 ? 0x20000000 : 0) | 0x40000;
    if ( !a4 )
      v12 = a3 != 0 ? 0x20000000 : 0;
    v13 = v11;
    if ( (v9 & 8) == 0 )
      v13 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v23 + 1) = v13;
    v14 = MmMapViewOfSectionEx(
            v8,
            (int)a1,
            (int)&BaseOfImage,
            (__int64)&v22,
            (__int64)&v21,
            v12,
            2,
            v25,
            v10,
            0,
            0LL,
            v19,
            0x2000000);
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
      v16 = BaseOfImage;
      v14 = 0;
      v17 = RtlImageNtHeader(BaseOfImage);
      if ( v17->OptionalHeader.Magic == 267 )
        ImageBase_high = HIDWORD(v17->OptionalHeader.ImageBase);
      else
        ImageBase_high = v17->OptionalHeader.ImageBase;
      *(_QWORD *)(a2 + 32) = ImageBase_high;
      *(_QWORD *)(a2 + 40) = v16;
      return v14;
    }
    if ( *(PVOID *)(a2 + 32) == BaseOfImage )
      return v14;
  }
  return 3221225473LL;
}
