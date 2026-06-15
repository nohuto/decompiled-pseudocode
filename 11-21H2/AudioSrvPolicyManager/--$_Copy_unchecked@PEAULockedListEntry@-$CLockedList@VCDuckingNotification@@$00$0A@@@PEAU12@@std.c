/*
 * XREFs of ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18000EBA8
 * Callers:
 *     ?_Copy_assign@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x180012AF8 (-_Copy_assign@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

_QWORD *__fastcall std::_Copy_unchecked<CLockedList<CDuckingNotification,1,0>::LockedListEntry *,CLockedList<CDuckingNotification,1,0>::LockedListEntry *>(
        void **a1,
        void **a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  void **v5; // rdi
  void **v6; // rbx
  void *v7; // rdx
  volatile signed __int32 *v8; // r8
  volatile signed __int32 *v9; // rcx
  bool v10; // zf
  signed __int32 v11; // eax
  int v12; // eax

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = (void **)(a3 + 2);
    v6 = a1 + 2;
    do
    {
      *v3 = *(v6 - 2);
      *((_DWORD *)v5 - 2) = *((_DWORD *)v6 - 2);
      if ( v5 != v6 )
      {
        v7 = v6;
        if ( (unsigned __int64)v6[3] >= 8 )
          v7 = *v6;
        std::wstring::assign((char **)v5, v7, (unsigned __int64)v6[2]);
      }
      v8 = (volatile signed __int32 *)v6[4];
      v9 = (volatile signed __int32 *)v5[4];
      v10 = v8 == 0LL;
      v5[4] = (void *)v8;
      while ( !v10 )
      {
        v11 = *((_DWORD *)v8 + 3);
        if ( v11 == 0x7FFFFFFF )
          break;
        v10 = v11 == _InterlockedCompareExchange(v8 + 3, v11 + 1, v11);
      }
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v9);
      v12 = *((_DWORD *)v6 + 10);
      v3 += 8;
      v6 += 8;
      *((_DWORD *)v5 + 10) = v12;
      v5 += 8;
    }
    while ( v6 - 2 != a2 );
  }
  return v3;
}
