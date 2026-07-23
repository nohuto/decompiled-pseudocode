/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x140559E54
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14094C61C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14094CCA4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094D250 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14094DC58 (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1)
{
  bool v2; // bl
  NTSTATUS v3; // eax
  unsigned __int64 v4; // rdx
  int v5; // r9d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v2 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v3 = ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL);
  v4 = *((_QWORD *)&SystemInformation[0] + 1);
  v5 = v3;
  v6 = *(_QWORD *)&SystemInformation[0];
  if ( v3 >= 0 && (*(_DWORD *)(a1 + 40) & 0x10) != 0 && (*(_DWORD *)(a1 + 80) & 0x2000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1176);
    if ( !v7 )
    {
      v7 = (((unsigned __int64)(10 * ((unsigned int)(*(_QWORD *)&SystemInformation[0] >> 20) >> 10)) << 20) + 1790967807) & 0xFFFFFFFFC0000000uLL;
      *(_QWORD *)(a1 + 1176) = v7;
    }
    v2 = v4 < v7;
LABEL_15:
    *(_QWORD *)(a1 + 1184) = v4;
    *(_QWORD *)(a1 + 1192) = v6;
    return v2;
  }
  v8 = *(_QWORD *)(a1 + 928);
  if ( v8 && *(_DWORD *)(v8 + 4) || (v9 = *(_QWORD *)(a1 + 936)) != 0 && *(_DWORD *)(v9 + 4) )
  {
    v2 = 1;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 944);
    if ( v10 )
      v2 = *(_DWORD *)(v10 + 4) != 0;
  }
  if ( v5 >= 0 )
    goto LABEL_15;
  return v2;
}
