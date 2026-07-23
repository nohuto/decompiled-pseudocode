/*
 * XREFs of CcPerfLogLazyWriteScan @ 0x14039ED3C
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14029A890 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1405364BC (CcLazyWriteScan.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogLazyWriteScan(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v13; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+38h] [rbp-61h]
  int v15; // [rsp+3Ch] [rbp-5Dh]
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+48h] [rbp-51h]
  int v18; // [rsp+4Ch] [rbp-4Dh]
  __int64 v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int64 v21; // [rsp+60h] [rbp-39h]
  __int64 v22; // [rsp+68h] [rbp-31h]
  __int64 v23; // [rsp+70h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-21h]
  __int64 v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]

  v15 = 0;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v25 = a10;
  v26 = a11;
  v27 = a12;
  v16 = a1;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v13 = &v16;
  v14 = 88;
  return EtwTraceKernelEvent((int)&v13, 1, 0x80020000, 5637, 4194562);
}
