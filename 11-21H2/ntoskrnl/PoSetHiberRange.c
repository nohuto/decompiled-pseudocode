/*
 * XREFs of PoSetHiberRange @ 0x14038DBE0
 * Callers:
 *     sub_14038D480 @ 0x14038D480 (sub_14038D480.c)
 *     sub_14038D4BC @ 0x14038D4BC (sub_14038D4BC.c)
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     sub_14038D91C @ 0x14038D91C (sub_14038D91C.c)
 *     sub_14038DA90 @ 0x14038DA90 (sub_14038DA90.c)
 *     sub_14038DB80 @ 0x14038DB80 (sub_14038DB80.c)
 *     sub_14038DF04 @ 0x14038DF04 (sub_14038DF04.c)
 *     sub_14039936C @ 0x14039936C (sub_14039936C.c)
 *     sub_140517F6C @ 0x140517F6C (sub_140517F6C.c)
 *     sub_14052974C @ 0x14052974C (sub_14052974C.c)
 *     sub_1405498B4 @ 0x1405498B4 (sub_1405498B4.c)
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_14054A188 @ 0x14054A188 (sub_14054A188.c)
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 *     sub_140802020 @ 0x140802020 (sub_140802020.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_1409315C4 @ 0x1409315C4 (sub_1409315C4.c)
 *     sub_140A4E460 @ 0x140A4E460 (sub_140A4E460.c)
 *     sub_140A4E6D4 @ 0x140A4E6D4 (sub_140A4E6D4.c)
 *     sub_140A4E794 @ 0x140A4E794 (sub_140A4E794.c)
 *     sub_140A4E854 @ 0x140A4E854 (sub_140A4E854.c)
 *     sub_140A4E8E4 @ 0x140A4E8E4 (sub_140A4E8E4.c)
 *     sub_140A4EB20 @ 0x140A4EB20 (sub_140A4EB20.c)
 *     sub_140A4ED84 @ 0x140A4ED84 (sub_140A4ED84.c)
 *     sub_140A4EEAC @ 0x140A4EEAC (sub_140A4EEAC.c)
 *     sub_140A4F0DC @ 0x140A4F0DC (sub_140A4F0DC.c)
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 *     sub_140A4F3AC @ 0x140A4F3AC (sub_140A4F3AC.c)
 *     sub_140A4F800 @ 0x140A4F800 (sub_140A4F800.c)
 *     sub_140A4F8B0 @ 0x140A4F8B0 (sub_140A4F8B0.c)
 *     sub_140A4FC74 @ 0x140A4FC74 (sub_140A4FC74.c)
 *     sub_140AAB280 @ 0x140AAB280 (sub_140AAB280.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14038DDD4 @ 0x14038DDD4 (sub_14038DDD4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1408024FC @ 0x1408024FC (sub_1408024FC.c)
 *     sub_140A4F9F4 @ 0x140A4F9F4 (sub_140A4F9F4.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r15
  PHYSICAL_ADDRESS v12; // r12
  __int64 v13; // r14
  _DWORD v14[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID BugCheckParameter3; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = (unsigned __int64)Address;
  BugCheckParameter3 = MemoryMap;
  v5 = Flags;
  v6 = MemoryMap;
  v14[0] = 0;
  if ( (dword_140C31E20 & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) != 0 )
      goto LABEL_34;
  }
  else
  {
    v6 = (PVOID)qword_140C22800;
    BugCheckParameter3 = (PVOID)qword_140C22800;
    if ( !qword_140C22800 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(qword_140C22800 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
LABEL_34:
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    v8 = Flags & 0x10000;
  }
  if ( !Length )
  {
    if ( v8 )
    {
      sub_140A4F9F4(v16);
      return;
    }
    if ( (int)sub_1408024FC(v16, &v16, v14) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA148FuLL, 0LL, 0LL);
    Length = v14[0];
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    sub_14038DDD4((ULONG_PTR)v6, Tag);
  }
  else
  {
    v9 = v16 >> 12;
    v10 = (Length + v16 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v11 = v9 + 1;
      v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v13 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v11 + v12.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v13 << 12))).QuadPart >> 12 )
            break;
          ++v13;
          ++v11;
        }
        while ( v11 < v10 );
        v6 = BugCheckParameter3;
      }
      sub_14038DDD4((ULONG_PTR)v6, Tag);
      v9 += v13;
    }
  }
}
