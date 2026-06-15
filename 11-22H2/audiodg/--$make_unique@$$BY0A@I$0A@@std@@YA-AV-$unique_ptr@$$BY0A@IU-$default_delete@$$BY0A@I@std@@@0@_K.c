/*
 * XREFs of ??$make_unique@$$BY0A@I$0A@@std@@YA?AV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@0@_K@Z @ 0x14006B0B8
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x140028518 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<unsigned int [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  void *v4; // rbx

  v3 = saturated_mul(a2, 4uLL);
  v4 = operator new[](v3);
  memset_0(v4, 0, v3);
  *a1 = v4;
  return a1;
}
