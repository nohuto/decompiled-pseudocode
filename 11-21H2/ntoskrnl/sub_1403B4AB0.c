/*
 * XREFs of sub_1403B4AB0 @ 0x1403B4AB0
 * Callers:
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     RtlCompressBuffer @ 0x140244760 (RtlCompressBuffer.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140798D30 @ 0x140798D30 (sub_140798D30.c)
 */

__int64 __fastcall sub_1403B4AB0(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  LARGE_INTEGER v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  ULONG v8; // eax
  LARGE_INTEGER v9; // rax
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-9h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp+7h] BYREF
  LARGE_INTEGER *p_PerformanceFrequency; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]

  PerformanceFrequency.QuadPart = 0LL;
  FinalCompressedSize = 0;
  v4 = 0;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = RtlCompressBuffer(
         3u,
         (PUCHAR)(a2 + 72),
         *(_DWORD *)(a1 + 4) - 72,
         (PUCHAR)(*(_QWORD *)(a1 + 1152) + 72LL),
         *(_DWORD *)(a1 + 4) - 72,
         0,
         &FinalCompressedSize,
         *(PVOID *)(a1 + 1160));
  if ( v6 < 0 )
  {
    v4 = v6;
  }
  else
  {
    if ( FinalCompressedSize >= (unsigned __int64)*(unsigned int *)(a1 + 4) - 72 )
      goto LABEL_7;
    v7 = *(_QWORD *)(a1 + 1152);
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(a2 + 64);
    v8 = FinalCompressedSize;
    *(_WORD *)(v7 + 52) |= 0x40u;
    *(_DWORD *)v7 = v8 + 72;
    *(_DWORD *)(v7 + 44) = 3;
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)sub_140798D30(a1, *(_QWORD *)(a1 + 1152)) )
LABEL_7:
      v4 = -1073741811;
  }
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( (unsigned int)dword_140C043E0 > 5 )
  {
    v16 = 0;
    v15 = 8;
    PerformanceFrequency.QuadPart = 100000000 * (v9.QuadPart - v5.QuadPart) / PerformanceFrequency.QuadPart;
    p_PerformanceFrequency = &PerformanceFrequency;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&dword_140035D7C, 0LL, 0LL, 3u, &v13);
  }
  return v4;
}
