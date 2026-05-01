/*
 * XREFs of ??$make_shared@UBroadcastDVRActiveAppInfo@@$$V@std@@YA?AV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@XZ @ 0x1800840F8
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall std::make_shared<BroadcastDVRActiveAppInfo,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x78uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<BroadcastDVRActiveAppInfo>::`vftable';
  memset_0(v3 + 4, 0, 0x68uLL);
  *((_WORD *)v3 + 16) = 0;
  result = a1;
  *(_DWORD *)((char *)v3 + 35) = 0;
  v3[10] = 0;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 8) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 13) = 0LL;
  *((_QWORD *)v3 + 14) = 7LL;
  *a1 = v3 + 4;
  a1[1] = v3;
  return result;
}
