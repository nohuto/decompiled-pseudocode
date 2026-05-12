/*
 * XREFs of sub_1C00224A4 @ 0x1C00224A4
 * Callers:
 *     sub_1C001C0C0 @ 0x1C001C0C0 (sub_1C001C0C0.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 *     sub_1C005E3A8 @ 0x1C005E3A8 (sub_1C005E3A8.c)
 *     sub_1C0067DA0 @ 0x1C0067DA0 (sub_1C0067DA0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 sub_1C00224A4()
{
  __int64 result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( qword_1C0093BF8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)qword_1C0093BF8);
    return qword_1C0093BF8;
  }
  result = sub_1C0007CF4(64LL, 40LL, 1146118482LL, 0LL);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 8);
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    qword_1C0093BF8 = v1;
    return qword_1C0093BF8;
  }
  return result;
}
