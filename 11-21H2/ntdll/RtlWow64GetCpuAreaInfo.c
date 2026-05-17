/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x18006BEE0
 * Callers:
 *     RtlWow64GetCurrentCpuArea @ 0x18006BE60 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x18006BF68 (RtlpGetContextFlagsLocation.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 ContextFlagsLocation; // rax
  __int64 v10; // r10
  __int64 v11; // r8
  int v12; // edx
  __int64 result; // rax
  __int16 v14; // r9

  a3[3] = a1;
  v4 = a2;
  if ( !a2 )
    v4 = *(_WORD *)(a1 + 2);
  switch ( v4 )
  {
    case 0x14Cu:
      v5 = 0x10000LL;
      v6 = 4LL;
      v7 = 716LL;
LABEL_5:
      v8 = ~(v6 - 1) & (v6 + a1 + 3);
      *a3 = v8;
      a3[1] = (v8 + v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      ContextFlagsLocation = RtlpGetContextFlagsLocation(v8, v5);
      *(_QWORD *)(v10 + 16) = ContextFlagsLocation;
      *(_DWORD *)(v10 + 32) = v12;
      *(_QWORD *)(v10 + 40) = (v11 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      result = 0LL;
      *(_WORD *)(v10 + 36) = v14;
      return result;
    case 0x1C4u:
      v5 = 0x200000LL;
      v6 = 8LL;
      v7 = 416LL;
      goto LABEL_5;
    case 0x8664u:
      v5 = 0x100000LL;
      v6 = 16LL;
      v7 = 1232LL;
      goto LABEL_5;
    case 0xAA64u:
      v5 = 0x400000LL;
      v6 = 16LL;
      v7 = 912LL;
      goto LABEL_5;
  }
  return 3221225485LL;
}
