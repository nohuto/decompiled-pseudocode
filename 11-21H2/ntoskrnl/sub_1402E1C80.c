/*
 * XREFs of sub_1402E1C80 @ 0x1402E1C80
 * Callers:
 *     sub_14025116C @ 0x14025116C (sub_14025116C.c)
 *     sub_1402E1140 @ 0x1402E1140 (sub_1402E1140.c)
 *     sub_140632F6C @ 0x140632F6C (sub_140632F6C.c)
 *     sub_1406354FC @ 0x1406354FC (sub_1406354FC.c)
 *     sub_1406D1CF4 @ 0x1406D1CF4 (sub_1406D1CF4.c)
 *     sub_1406EA4C0 @ 0x1406EA4C0 (sub_1406EA4C0.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EF910 @ 0x1406EF910 (sub_1406EF910.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_1407987F0 @ 0x1407987F0 (sub_1407987F0.c)
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_1408570CC @ 0x1408570CC (sub_1408570CC.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x140543D70 (HvlQueryStartedProcessors.c)
 */

__int64 __fastcall sub_1402E1C80(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (int)HvlQueryStartedProcessors(&v3, 0LL) >= 0 )
    return v3;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)dword_140D06884;
  return result;
}
