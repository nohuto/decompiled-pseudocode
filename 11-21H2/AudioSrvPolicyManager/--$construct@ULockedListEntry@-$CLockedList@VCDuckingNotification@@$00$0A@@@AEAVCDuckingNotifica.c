/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@1@QEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000F130
 * Callers:
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18000EC68 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList@VCDuc.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001051C (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Default_allocator_traits<std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::construct<CLockedList<CDuckingNotification,1,0>::LockedListEntry,CDuckingNotification &,int>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  int v6; // esi
  volatile signed __int32 *v7; // r8
  bool i; // zf
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-38h]
  char *v14[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]
  volatile signed __int32 *v16; // [rsp+50h] [rbp-10h]

  v6 = *a4;
  v12 = *a3;
  v13 = *((_DWORD *)a3 + 2);
  std::wstring::wstring(v14, a3 + 2);
  v7 = (volatile signed __int32 *)a3[6];
  v16 = v7;
  for ( i = v7 == 0LL; !i; i = v9 == _InterlockedCompareExchange(v7 + 3, v9 + 1, v9) )
  {
    v9 = *((_DWORD *)v7 + 3);
    if ( v9 == 0x7FFFFFFF )
      break;
  }
  *(_QWORD *)a2 = v12;
  *(_DWORD *)(a2 + 8) = v13;
  std::wstring::wstring(a2 + 16, v14);
  v10 = v16;
  *(_QWORD *)(a2 + 48) = v16;
  if ( v10 )
  {
    do
      v11 = *((_DWORD *)v10 + 3);
    while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(v10 + 3, v11 + 1, v11) );
    v10 = v16;
  }
  *(_DWORD *)(a2 + 56) = v6;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v10);
  if ( v15 >= 8 )
    std::_Deallocate<16,0>(v14[0], 2 * v15 + 2);
}
