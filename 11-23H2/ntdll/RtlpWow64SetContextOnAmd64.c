/*
 * XREFs of RtlpWow64SetContextOnAmd64 @ 0x1800783F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWow64CtxToAmd64 @ 0x180111C28 (RtlpWow64CtxToAmd64.c)
 */

__int64 __fastcall RtlpWow64SetContextOnAmd64(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  __int64 v6; // r8
  unsigned int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  __int16 v13; // bx

  *a4 = 0;
  v6 = a2;
  v8 = *a3;
  if ( a2 )
  {
    v13 = *(_WORD *)(a2 + 56);
    RtlpWow64CtxToAmd64(v8, a3, a2);
    if ( v13 == 35 )
      goto LABEL_20;
  }
  if ( (v8 & 0x10001) == 0x10001 )
  {
    *(_DWORD *)(a1 + 180) = a3[45];
    *(_DWORD *)(a1 + 184) = a3[46];
    *(_DWORD *)(a1 + 188) = 35;
    *(_DWORD *)(a1 + 192) = a3[48] & 0x3F0DD5 | 0x202;
    *(_DWORD *)(a1 + 196) = a3[49];
    *(_DWORD *)(a1 + 200) = a3[50];
  }
  if ( (v8 & 0x10002) == 0x10002 )
  {
    *(_DWORD *)(a1 + 156) = a3[39];
    *(_DWORD *)(a1 + 160) = a3[40];
    *(_DWORD *)(a1 + 164) = a3[41];
    *(_DWORD *)(a1 + 168) = a3[42];
    *(_DWORD *)(a1 + 172) = a3[43];
    *(_DWORD *)(a1 + 176) = a3[44];
  }
  v9 = 1048584;
  if ( (v8 & 0x10008) != 0x10008 )
    v9 = 0;
  v10 = v9 | 0x100010;
  if ( (v8 & 0x10010) != 0x10010 )
    v10 = v9;
  if ( (v8 & 0x10020) == 0x10020 )
  {
    v10 |= 0x100008u;
    *(_OWORD *)(a1 + 364) = *(_OWORD *)(a3 + 91);
    *(_OWORD *)(a1 + 380) = *(_OWORD *)(a3 + 95);
    *(_OWORD *)(a1 + 396) = *(_OWORD *)(a3 + 99);
    *(_OWORD *)(a1 + 412) = *(_OWORD *)(a3 + 103);
    *(_OWORD *)(a1 + 428) = *(_OWORD *)(a3 + 107);
    *(_OWORD *)(a1 + 444) = *(_OWORD *)(a3 + 111);
  }
  v11 = v10 | 0x100040;
  if ( (v8 & 0x10040) != 0x10040 )
    v11 = v10;
  if ( v11 && v6 )
  {
    *(_DWORD *)(v6 + 48) = v11;
LABEL_20:
    *a4 = 1;
  }
  return 0LL;
}
