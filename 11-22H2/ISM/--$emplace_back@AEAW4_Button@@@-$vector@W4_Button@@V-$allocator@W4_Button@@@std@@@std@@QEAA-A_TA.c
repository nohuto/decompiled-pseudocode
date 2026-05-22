/*
 * XREFs of ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?A_TAEAW4_Button@@@Z @ 0x1801D2A90
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801D3164 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<enum _Button>::emplace_back<enum _Button &>(__int64 a1, _DWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<enum _Button>::_Emplace_reallocate<enum _Button &>((const void **)a1, v3, a2);
  *(_DWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 4;
  return result;
}
