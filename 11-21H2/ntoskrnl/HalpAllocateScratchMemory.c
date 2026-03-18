/*
 * XREFs of HalpAllocateScratchMemory @ 0x140A72820
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140A70D60 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x140416FEC (HalpMapPhysicalMemory64.c)
 *     HalpAllocPhysicalMemory @ 0x140AF9E94 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAllocateScratchMemory(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v8; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

  v3 = *(_DWORD *)(a2 + 192);
  if ( !v3 || *(_QWORD *)(a2 + 184) )
    return 0LL;
  if ( *(_QWORD *)(a2 + 176) )
  {
    v10 = 0;
    if ( !*(_DWORD *)(a2 + 180) )
    {
      v9 = *(_DWORD *)(a2 + 176);
      goto LABEL_8;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 176) = -1LL;
    v10 = 0;
  }
  v9 = -1;
LABEL_8:
  v4 = (v3 >> 12) + ((v3 & 0xFFF) != 0);
  v5 = HalpAllocPhysicalMemory(a1, &v9, v4, 0LL);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v8 = HalpMapPhysicalMemory64(v5, v4, 0, 4LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  *(_QWORD *)(a2 + 184) = v8;
  *(_QWORD *)(a2 + 168) = v6;
  return 0LL;
}
