/*
 * XREFs of sub_140945128 @ 0x140945128
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportResourceForDetection @ 0x140944D50 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140944F40 (IoReportResourceUsage.c)
 * Callees:
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     sub_14094524C @ 0x14094524C (sub_14094524C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140945128(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        _BYTE *a10)
{
  _DWORD *v10; // rdi
  unsigned int v11; // ebx
  int v13; // r13d
  _DWORD *v14; // rsi
  _BYTE *v16; // r15
  unsigned int v17; // ebp
  char v18; // r14
  int v19; // edi
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = a2;
  v10 = a7;
  v11 = 0;
  v13 = a1;
  if ( !a7 )
  {
    if ( !a4 )
    {
LABEL_8:
      v14 = 0LL;
      v10 = 0LL;
      goto LABEL_9;
    }
    v10 = a4;
  }
  if ( !*v10 || !v10[4] )
    goto LABEL_8;
  v14 = sub_140821D18(a1, v10, 12288);
  if ( !v14 )
    return 3221225473LL;
LABEL_9:
  v16 = a10;
  v17 = 0;
  P = v10;
  v18 = 0;
  *a10 = 1;
  while ( 1 )
  {
    v19 = sub_14081F570(v13, a3, a6, (__int64)v14, (const void **)&P);
    if ( v19 >= 0 )
      break;
    if ( (unsigned __int8)sub_14094524C(v14, &P) )
    {
      ++v17;
      v18 = 1;
      if ( v17 < 2 )
        continue;
    }
    goto LABEL_15;
  }
  *v16 = 0;
LABEL_15:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v18 )
    ExFreePoolWithTag(P, 0);
  if ( v19 < 0 )
  {
    if ( v19 != -1073741670 )
      return (unsigned int)-1073741800;
    return (unsigned int)v19;
  }
  return v11;
}
