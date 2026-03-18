/*
 * XREFs of NVMeCaptureLiveDumpWorkItem @ 0x1C0018670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeCaptureLiveDumpWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-89h] BYREF
  __int128 v11; // [rsp+30h] [rbp-79h]
  _QWORD *v12; // [rsp+40h] [rbp-69h]
  _QWORD v13[20]; // [rsp+50h] [rbp-59h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset(v13, 0, 0x98uLL);
  v6 = *(_QWORD *)(a1 + 4048);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 4056);
    if ( !v8 )
    {
LABEL_5:
      StorPortExtendedFunction(1LL, a1, v7, v5);
      goto LABEL_6;
    }
    v13[0] = 0x9800000098LL;
    *(_OWORD *)&v13[1] = *(_OWORD *)(v6 + 384);
    *(_OWORD *)&v13[3] = *(_OWORD *)(v6 + 400);
    *(_OWORD *)&v13[5] = *(_OWORD *)(v6 + 416);
    *(_OWORD *)&v13[7] = *(_OWORD *)(v6 + 432);
    *(_OWORD *)&v13[9] = *(_OWORD *)(v6 + 448);
    *(_OWORD *)&v13[11] = *(_OWORD *)(v6 + 464);
    *(_OWORD *)&v13[13] = *(_OWORD *)(v6 + 480);
    *(_OWORD *)&v13[15] = *(_OWORD *)(v6 + 496);
    LOWORD(v13[17]) = *(_WORD *)(v6 + 5);
    BYTE2(v13[17]) = *(_BYTE *)(v6 + 7);
    *(_QWORD *)&v10 = 0x2800000028LL;
    *(_QWORD *)&v11 = L"StorNVMe";
    HIDWORD(v13[17]) = v8;
    v13[18] = v6;
    v12 = v13;
    *((_QWORD *)&v10 + 1) = 0x100000001LL;
    DWORD2(v11) = 1;
    StorPortExtendedFunction(104LL, a1, 0LL, &v10);
    v7 = *(_QWORD *)(a1 + 4048);
  }
  if ( v7 )
    goto LABEL_5;
LABEL_6:
  *(_OWORD *)(a1 + 4048) = 0LL;
  result = StorPortExtendedFunction(31LL, a1, a3, v5);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 32), 0xCu);
  return result;
}
