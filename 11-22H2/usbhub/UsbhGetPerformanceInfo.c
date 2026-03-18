/*
 * XREFs of UsbhGetPerformanceInfo @ 0x1C0049618
 * Callers:
 *     UsbhPdoQueryWmiDataBlock @ 0x1C00497C0 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023880 (memset.c)
 */

__int64 __fastcall UsbhGetPerformanceInfo(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v7; // r14
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD *, __int64, _DWORD *); // r10
  __int64 result; // rax
  unsigned int v12; // ebx
  int v13; // ecx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  int v16; // eax
  int v17; // ecx
  _DWORD v18[4]; // [rsp+30h] [rbp-51h] BYREF
  _QWORD v19[12]; // [rsp+40h] [rbp-41h] BYREF

  v7 = PdoExt(a1);
  v8 = *((_QWORD *)v7 + 148);
  v18[0] = 0;
  memset(v19, 0, 88);
  v9 = FdoExt(v8);
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, __int64, _DWORD *))*((_QWORD *)v9 + 555);
  if ( !v10 )
  {
    result = 3221225474LL;
LABEL_3:
    *a4 = 0;
    return result;
  }
  result = v10(*((_QWORD *)v9 + 529), a5, v19, 88LL, v18);
  v12 = result;
  if ( (int)result < 0 || v18[0] != 88 )
    goto LABEL_3;
  memset(a2, 0, 0xE4uLL);
  v13 = v19[1];
  v14 = *(_OWORD *)&v19[5];
  a2[1] = v19[2];
  v15 = v19[7];
  a2[5] = HIDWORD(v19[2]);
  a2[3] = v19[4];
  a2[7] = HIDWORD(v19[4]);
  a2[2] = v19[3];
  a2[6] = HIDWORD(v19[3]);
  *((_QWORD *)a2 + 7) = v19[8];
  a2[16] = v19[9];
  *(_QWORD *)(a2 + 49) = v19[10];
  v16 = HIDWORD(v19[9]);
  *a2 = v13;
  v17 = HIDWORD(v19[1]);
  a2[48] = v16;
  a2[4] = v17;
  *((_OWORD *)a2 + 2) = v14;
  *((_QWORD *)a2 + 6) = v15;
  *(_OWORD *)(a2 + 17) = *(_OWORD *)((char *)v7 + 2442);
  *(_OWORD *)(a2 + 21) = *(_OWORD *)((char *)v7 + 2458);
  *(_OWORD *)(a2 + 25) = *(_OWORD *)((char *)v7 + 2474);
  *(_OWORD *)(a2 + 29) = *(_OWORD *)((char *)v7 + 2490);
  *(_OWORD *)(a2 + 33) = *(_OWORD *)((char *)v7 + 2506);
  a2[47] = v7[292];
  result = v12;
  *a4 = 228;
  return result;
}
