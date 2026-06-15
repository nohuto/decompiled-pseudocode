/*
 * XREFs of ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x180016820
 * Callers:
 *     ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016710 (-RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18008297C (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<IAudioStreamInfo *>::erase(__int64 a1, _QWORD *a2, char *a3, char *a4)
{
  size_t v7; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = *(_QWORD *)(a1 + 8) - (_QWORD)a4;
    memmove_0(a3, a4, v7);
    *(_QWORD *)(a1 + 8) = &a3[v7];
  }
  result = a2;
  *a2 = a3;
  return result;
}
