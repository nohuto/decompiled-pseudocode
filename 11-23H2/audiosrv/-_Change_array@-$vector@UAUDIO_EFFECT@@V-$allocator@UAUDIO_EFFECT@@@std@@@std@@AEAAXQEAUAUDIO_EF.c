/*
 * XREFs of ?_Change_array@?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@AEAAXQEAUAUDIO_EFFECT@@_K1@Z @ 0x18010A91C
 * Callers:
 *     ??$_Emplace_reallocate@UAUDIO_EFFECT@@@?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@QEAAPEAUAUDIO_EFFECT@@QEAU2@$$QEAU2@@Z @ 0x180103CC8 (--$_Emplace_reallocate@UAUDIO_EFFECT@@@-$vector@UAUDIO_EFFECT@@V-$allocator@UAUDIO_EFFECT@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<AUDIO_EFFECT>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
