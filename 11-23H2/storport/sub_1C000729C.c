/*
 * XREFs of sub_1C000729C @ 0x1C000729C
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 *     sub_1C0012644 @ 0x1C0012644 (sub_1C0012644.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     CompletionFunction @ 0x1C0014960 (CompletionFunction.c)
 *     sub_1C00152B0 @ 0x1C00152B0 (sub_1C00152B0.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C001AFF0 @ 0x1C001AFF0 (sub_1C001AFF0.c)
 *     sub_1C001FFFC @ 0x1C001FFFC (sub_1C001FFFC.c)
 *     sub_1C0021620 @ 0x1C0021620 (sub_1C0021620.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C0058AEC @ 0x1C0058AEC (sub_1C0058AEC.c)
 *     sub_1C005E1A8 @ 0x1C005E1A8 (sub_1C005E1A8.c)
 *     sub_1C005E234 @ 0x1C005E234 (sub_1C005E234.c)
 *     sub_1C005EAF4 @ 0x1C005EAF4 (sub_1C005EAF4.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0060DE0 @ 0x1C0060DE0 (sub_1C0060DE0.c)
 *     sub_1C00615D0 @ 0x1C00615D0 (sub_1C00615D0.c)
 *     sub_1C0062760 @ 0x1C0062760 (sub_1C0062760.c)
 *     WorkerRoutine @ 0x1C0063A70 (WorkerRoutine.c)
 *     sub_1C0063E80 @ 0x1C0063E80 (sub_1C0063E80.c)
 *     sub_1C006C8A0 @ 0x1C006C8A0 (sub_1C006C8A0.c)
 *     sub_1C0074EE0 @ 0x1C0074EE0 (sub_1C0074EE0.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 *     sub_1C00AADD0 @ 0x1C00AADD0 (sub_1C00AADD0.c)
 * Callees:
 *     <none>
 */

LONG __fastcall sub_1C000729C(__int64 a1)
{
  unsigned __int64 v1; // r9
  LONG result; // eax
  LONG v3; // ett

  v1 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  result = *(_DWORD *)(v1 + *(_QWORD *)(a1 + 32));
  while ( (result & 1) == 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + *(_QWORD *)(a1 + 32)), result - 2, result);
    if ( v3 == result )
      return result;
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 968), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
