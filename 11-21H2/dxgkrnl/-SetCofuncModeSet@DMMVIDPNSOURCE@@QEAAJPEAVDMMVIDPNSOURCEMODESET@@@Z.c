/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D584
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C01DEAC0 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D700 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C006A6C4 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01AA288 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET **a2)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  struct DMMVIDPNSOURCEMODESET *v6; // rax
  struct DMMVIDPNSOURCEMODESET *v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r11
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    v13 = -1071774968;
LABEL_11:
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    return v13;
  }
  v4 = (__int64 *)(this + 15);
  if ( a2 != (struct DMMVIDPNSOURCEMODESET **)this[15] )
  {
    v13 = -1071774928;
    goto LABEL_11;
  }
  v5 = (__int64 *)(this + 13);
  v6 = this[13];
  if ( *((_QWORD *)v6 + 18) )
  {
    v14 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
    if ( !v14 )
    {
      WdLogSingleEntry0(2LL);
      return 3223192338LL;
    }
    DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v14 + 24));
    v6 = (struct DMMVIDPNSOURCEMODESET *)*v5;
  }
  *((_BYTE *)v6 + 136) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96) > 1 )
  {
    v8 = this[14];
    v9 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                             v8,
                             *v5) )
    {
      v11 = *(_QWORD **)(v10 + 24);
      v12 = (_QWORD *)(v9 + 8);
      if ( *v11 != v10 + 16 )
        __fastfail(3u);
      *v12 = v10 + 16;
      *(_QWORD *)(v9 + 16) = v11;
      *v11 = v12;
      *(_QWORD *)(v10 + 24) = v12;
      ++*(_QWORD *)(v10 + 32);
    }
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v5, (__int64)a2);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, 0LL);
  return 0LL;
}
