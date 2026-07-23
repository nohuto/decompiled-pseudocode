/*
 * XREFs of PerfLogImageLoad @ 0x1406AD944
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x1406AFC40 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x1409E65B4 (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageLoad(unsigned __int16 *a1, __int64 a2, int *a3)
{
  _QWORD *v5; // r14
  int v6; // ecx
  int v7; // edx
  PIMAGE_NT_HEADERS v8; // rax
  PVOID v9[2]; // [rsp+50h] [rbp-98h] BYREF
  int v10; // [rsp+60h] [rbp-88h]
  __int64 v11; // [rsp+64h] [rbp-84h]
  char v12; // [rsp+6Ch] [rbp-7Ch]
  _BYTE v13[3]; // [rsp+6Dh] [rbp-7Bh]
  unsigned __int64 ImageBase; // [rsp+70h] [rbp-78h]
  __int64 v15; // [rsp+78h] [rbp-70h]
  __int64 v16; // [rsp+80h] [rbp-68h]
  __int64 v17; // [rsp+88h] [rbp-60h]
  _QWORD v18[3]; // [rsp+90h] [rbp-58h] BYREF
  int v19; // [rsp+A8h] [rbp-40h]
  int v20; // [rsp+ACh] [rbp-3Ch]
  __int64 *v21; // [rsp+B0h] [rbp-38h]
  __int64 v22; // [rsp+B8h] [rbp-30h]

  v9[0] = 0LL;
  v17 = 0LL;
  if ( a1 )
  {
    if ( *a1 )
    {
      v5 = a1 + 4;
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( a2 )
          v6 = *(_DWORD *)(a2 + 1088);
        else
          v6 = 0;
        v9[0] = *((PVOID *)a3 + 1);
        v9[1] = *((PVOID *)a3 + 3);
        v10 = v6;
        *(_WORD *)&v13[1] = 0;
        v15 = 0LL;
        v16 = 0LL;
        v11 = 0LL;
        ImageBase = 0LL;
        v7 = *a3;
        v12 = ((unsigned int)*a3 >> 12) & 0xF;
        *(_WORD *)v13 = BYTE2(v7) & 7;
        v8 = RtlImageNtHeader(v9[0]);
        if ( v8 )
        {
          LODWORD(v11) = v8->OptionalHeader.CheckSum;
          HIDWORD(v11) = v8->FileHeader.TimeDateStamp;
          ImageBase = v8->OptionalHeader.ImageBase;
        }
        if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 4) != 0 )
          EtwpPsProvTraceImage(a1, v9, 5121LL, 0LL);
        v18[0] = v9;
        v18[1] = 56LL;
        v18[2] = *v5;
        v19 = *a1;
        v20 = 0;
        v21 = &EtwpNull;
        v22 = 2LL;
        if ( a2 )
          EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 2160), (int)v18, 3, 4u, 778, 5249283);
        else
          EtwTraceKernelEvent((int)v18, 3, 4u, 778, 5249283);
      }
    }
  }
}
