/*
 * XREFs of sub_14025863C @ 0x14025863C
 * Callers:
 *     sub_140682240 @ 0x140682240 (sub_140682240.c)
 *     sub_140682838 @ 0x140682838 (sub_140682838.c)
 *     sub_140683F18 @ 0x140683F18 (sub_140683F18.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406E2540 @ 0x1406E2540 (sub_1406E2540.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 *     sub_1409AFD2C @ 0x1409AFD2C (sub_1409AFD2C.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 */

__int64 __fastcall sub_14025863C(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
