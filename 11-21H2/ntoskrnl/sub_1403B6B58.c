/*
 * XREFs of sub_1403B6B58 @ 0x1403B6B58
 * Callers:
 *     sub_140544754 @ 0x140544754 (sub_140544754.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140459B00 @ 0x140459B00 (sub_140459B00.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     sub_1405456C0 @ 0x1405456C0 (sub_1405456C0.c)
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 *     sub_140931294 @ 0x140931294 (sub_140931294.c)
 */

void __fastcall sub_1403B6B58(char a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG LowPart; // edx
  ULONG v3; // r8d
  char v4; // cl
  PHYSICAL_ADDRESS v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // bl
  int *v10; // rdi
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  PHYSICAL_ADDRESS v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v16.QuadPart = 0LL;
  v17 = 0LL;
  if ( byte_140D0688B && (!a1 || (dword_140D0688C & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      sub_14054BFF0(589827LL, &v16);
      LowPart = v16.LowPart;
      v3 = v16.LowPart >> 6;
      v4 = v16.LowPart & 0x3F;
      byte_140D0CBD0[2 * *((unsigned int *)CurrentPrcb + 9)] = v16.LowPart >> 6;
      byte_140D0CBD0[2 * *((unsigned int *)CurrentPrcb + 9) + 1] = v4;
      if ( LowPart != *((_DWORD *)CurrentPrcb + 9) )
        byte_140D05016 = 0;
      if ( v3 < 0x10 )
      {
        if ( v3 > ((dword_140D0688C >> 8) & 0xF) )
          dword_140D0688C ^= ((unsigned __int16)dword_140D0688C ^ (unsigned __int16)((_WORD)v3 << 8)) & 0xF00;
      }
      else
      {
        dword_140D0689C &= ~0x80u;
        dword_140D06A28 &= ~0x80u;
      }
    }
    if ( (dword_140D0688C & 0x80000) != 0 )
    {
      v16.QuadPart = 0LL;
      if ( (dword_140D0688C & 2) != 0 )
      {
        sub_14054BFF0(589843LL, &v16);
        v5 = v16;
        v6 = v16.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( *((_DWORD *)CurrentPrcb + 9) )
          v7 = MmMapIoSpaceEx(v6, 4096LL, 4u);
        else
          v7 = sub_14042A5E0(v6, 1LL);
        *((_QWORD *)CurrentPrcb + 4321) = v7;
      }
      else
      {
        v5.QuadPart = MmGetPhysicalAddress(*((PVOID *)CurrentPrcb + 4321)).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      sub_14054C0E0(589843LL, v5.QuadPart | 1);
    }
    sub_1405456C0(CurrentPrcb);
    v9 = dword_140D0688C;
    v10 = 0LL;
    if ( (dword_140D0688C & 2) != 0 )
    {
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*((unsigned int *)CurrentPrcb + 9));
      v10 = sub_14039E528(LpIndexFromProcessorIndex);
      if ( (v9 & 0x20) != 0 )
      {
        sub_14054BFF0(655379LL, &v17);
        v12 = v17;
        if ( (v17 & 1) == 0 )
        {
          v12 = v17 | 1;
          sub_14054C0E0(655379LL, v17 | 1);
        }
        v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
        if ( *((_DWORD *)CurrentPrcb + 9) )
          v14 = MmMapIoSpaceEx(v13, 4096LL, 4u);
        else
          v14 = sub_14042A5E0(v13, 1LL);
        *((_QWORD *)v10 + 5) = v14;
      }
    }
    if ( (dword_140D0688C & 2) != 0 && (dword_140D0688C & 0x20) != 0 )
    {
      v15 = ((unsigned __int64)((dword_140D0688C & 0x10) == 0) << 17) | 0x30;
      sub_14054C0E0(655360LL, v15);
      sub_14054C0E0(655364LL, v15);
      sub_140459B00();
    }
    if ( (dword_140D0688C & 2) != 0 )
    {
      if ( *((_DWORD *)CurrentPrcb + 9) )
        sub_140931294(v8, (unsigned int)v10[2], v10 + 4, v10 + 5);
    }
  }
}
