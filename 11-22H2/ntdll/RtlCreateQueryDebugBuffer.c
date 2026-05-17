/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x180002480
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E3270 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  HANDLE *v2; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm0
  __int64 v6; // [rsp+30h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  HANDLE *v10; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v13; // [rsp+B0h] [rbp+30h] BYREF
  char *v14; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  if ( a1 )
  {
    v1 = (a1 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v1 > 0xFFFFFFFF )
      return 0LL;
  }
  else
  {
    v1 = 0x400000LL;
  }
  if ( is_mul_ok(v1, 2uLL) )
  {
    v12 = 2 * v1;
    v11 = 2 * v1;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL, &v11, 4, 0x4000000, ((v1 * (unsigned __int128)2uLL) >> 64) & v6) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, &v10, 0LL, 0LL, 0LL, &v12, 2, 0, 4) >= 0 )
    {
      v13 = v10;
      v8 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v8, 4096, 4) >= 0 )
      {
        v14 = (char *)v13 + v1;
        v9 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v9, 4096, 4) >= 0 )
        {
          *v13 = Handle;
          v13[1] = v13;
          v13[9] = (HANDLE)208;
          v13[10] = (HANDLE)v8;
          v13[11] = (HANDLE)v1;
          v2 = v13;
          v3 = v14;
          *(_OWORD *)v14 = *(_OWORD *)v13;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          v3[5] = *((_OWORD *)v2 + 5);
          v3[6] = *((_OWORD *)v2 + 6);
          v3 += 8;
          v4 = *((_OWORD *)v2 + 7);
          v2 += 16;
          *(v3 - 1) = v4;
          *v3 = *(_OWORD *)v2;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          *((_QWORD *)v14 + 1) = v14;
          *((_QWORD *)v14 + 10) = v9;
          *(_QWORD *)v14 = 0LL;
          return v13;
        }
      }
    }
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v13, &v8, 0x8000LL);
    if ( v14 )
      ZwFreeVirtualMemory(-1LL, &v14, &v9, 0x8000LL);
    if ( v10 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
