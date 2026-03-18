/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C001002C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C000FEC8 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000CAA0 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0010220 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  __int64 v4; // r9
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // r9
  DMMVIDPNSOURCEMODESET *v9; // rax
  DMMVIDPNSOURCEMODESET *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v14; // ecx

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, *((_DWORD *)a2 + 6));
  *((_DWORD *)this + 14) = 1833173000;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 256LL;
  *((_DWORD *)this + 22) = 1;
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, v4);
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v6 != v7 && v7 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v7)[2])(v7, 1LL);
  *((_QWORD *)this + 14) = v6;
  if ( !v6 )
    goto LABEL_21;
  if ( !(**v6)(v6) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v14 = *(_DWORD *)(*((_QWORD *)this + 14) + 8LL);
    goto LABEL_24;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v9 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, v8);
    if ( v9 )
      v10 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v9, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v10 = 0LL;
    v11 = *((_QWORD *)this + 13);
    if ( v11 && v10 != (DMMVIDPNSOURCEMODESET *)v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
    *((_QWORD *)this + 13) = v10;
    if ( v10 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v10 + 3))((__int64)v10 + 24) )
      {
        v12 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v12 + 112) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(v12 + 112) = this;
        goto LABEL_17;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v14 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_24:
      *((_DWORD *)this + 18) = v14;
      return this;
    }
LABEL_21:
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_17:
  *((_DWORD *)this + 22) = 2;
  return this;
}
