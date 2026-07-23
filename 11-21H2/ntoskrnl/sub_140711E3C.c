/*
 * XREFs of sub_140711E3C @ 0x140711E3C
 * Callers:
 *     sub_14070AC28 @ 0x14070AC28 (sub_14070AC28.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x14023FCD0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140711E3C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x62uLL);
  LODWORD(v5) = *(_DWORD *)(a1 + 1088);
  WORD2(v5) = PsGetProcessSessionId(a1);
  WORD3(v5) = MEMORY[0xFFFFF780000002C4];
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 1128);
  *(_OWORD *)(a2 + 21) = v5;
  *((_QWORD *)&v5 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v5;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 2296);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64(&qword_140C16470);
  result = *(_QWORD *)(a1 + 2296);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
