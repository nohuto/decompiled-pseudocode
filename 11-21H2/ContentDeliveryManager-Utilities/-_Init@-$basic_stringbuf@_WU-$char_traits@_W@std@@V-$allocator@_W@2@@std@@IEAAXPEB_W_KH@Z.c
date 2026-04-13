/*
 * XREFs of ?_Init@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@IEAAXPEB_W_KH@Z @ 0x180068CAC
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180056428 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800C9B34 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 */

void __fastcall std::wstringbuf::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  signed __int64 v6; // rsi
  void *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = a4;
  if ( a3 && (a4 & 6) != 6 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL || (v6 = 2 * a3, v7 = operator new(2 * a3), (v8 = (__int64)v7) == 0) )
      std::_Xbad_alloc();
    memcpy_0(v7, a2, v6);
    v9 = *(_DWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = v6 + v8;
    if ( (v9 & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v8;
      **(_QWORD **)(a1 + 56) = v8;
      **(_DWORD **)(a1 + 80) = v6 >> 1;
      v9 = *(_DWORD *)(a1 + 112);
    }
    if ( (v9 & 2) == 0 )
    {
      v10 = v6 + v8;
      if ( (v9 & 0x10) == 0 )
        v10 = v8;
      **(_QWORD **)(a1 + 32) = v8;
      **(_QWORD **)(a1 + 64) = v10;
      **(_DWORD **)(a1 + 88) = (v6 + v8 - v10) >> 1;
      if ( !**(_QWORD **)(a1 + 56) )
      {
        **(_QWORD **)(a1 + 24) = v8;
        **(_QWORD **)(a1 + 56) = 0LL;
        **(_DWORD **)(a1 + 80) = v8 >> 1;
      }
    }
    *(_DWORD *)(a1 + 112) |= 1u;
  }
}
