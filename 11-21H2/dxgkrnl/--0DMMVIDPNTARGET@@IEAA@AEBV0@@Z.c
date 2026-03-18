/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C000CFC0
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000CE30 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@AEBV0@@Z @ 0x1C0010D5C (--0DMMVIDPNTARGETMODE@@QEAA@AEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0010EB8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        const struct DMMVIDPNTARGET *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v7; // rax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  struct DMMVIDPNTARGETMODE *v24; // rcx
  DMMVIDPNTARGETMODE *v25; // rax
  DMMVIDPNTARGETMODE *v26; // rax
  __int64 v27; // r11
  __int64 **v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  struct DMMVIDPNTARGETMODE *v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  struct DMMVIDPNTARGETMODE *v46; // [rsp+90h] [rbp+8h]

  v4 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v4;
  if ( v4 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v35,
          v34,
          v36,
          0,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  v7 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v7;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 72));
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, a4);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  if ( !v9 )
    goto LABEL_55;
  if ( !(**v9)(v9) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_28;
  v12 = ExAllocatePool2(256LL, 152LL, 1313891414LL, v11);
  v13 = v12;
  if ( !v12 )
  {
    v13 = 0LL;
    goto LABEL_22;
  }
  v14 = *((_QWORD *)a2 + 13);
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)v12 = &SetElement::`vftable';
  *(_QWORD *)(v12 + 24) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  *(_DWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 32) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  *(_DWORD *)(v12 + 72) = 1;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 32))(v14 + 32)
    || !*(_QWORD *)(v14 + 48)
    || !*(_QWORD *)(v14 + 56) )
  {
    WdLogSingleEntry1(1LL, 155LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v38,
          v37,
          v39,
          0,
          2,
          -1,
          (__int64)L"i_rList.IsValid()",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v16 = v13 + 48;
  *(_QWORD *)(v13 + 56) = v13 + 48;
  *(_QWORD *)(v13 + 48) = v13 + 48;
  *(_QWORD *)(v13 + 64) = 0LL;
  v17 = *(_QWORD *)(v14 + 48);
  if ( v17 == v14 + 48 )
  {
    v18 = 0LL;
  }
  else
  {
    v24 = (struct DMMVIDPNTARGETMODE *)(v17 - 8);
    v18 = 0LL;
    v46 = v24;
    if ( v24 )
    {
      while ( 1 )
      {
        v25 = (DMMVIDPNTARGETMODE *)ExAllocatePool2(256LL, 168LL, 1265072196LL, v15);
        if ( !v25 )
          break;
        v26 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v25, v46);
        if ( !v26 )
          break;
        if ( !(unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
                                 v13 + 32,
                                 v26) )
        {
          v28 = *(__int64 ***)(v13 + 56);
          v29 = (__int64 *)(v27 + 8);
          if ( *v28 != (__int64 *)v16 )
            __fastfail(3u);
          *v29 = v16;
          *(_QWORD *)(v27 + 16) = v28;
          *v28 = v29;
          *(_QWORD *)(v13 + 56) = v29;
          ++*(_QWORD *)(v13 + 64);
        }
        v30 = *((_QWORD *)v46 + 1);
        v31 = (struct DMMVIDPNTARGETMODE *)(v30 - 8);
        if ( v30 == v14 + 48 )
          v31 = 0LL;
        v46 = v31;
        if ( !v31 )
        {
          v18 = *(_QWORD *)(v13 + 64);
          goto LABEL_16;
        }
      }
      WdLogSingleEntry1(6LL, 172LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v41,
          v40,
          v42,
          0,
          1,
          -1,
          (__int64)L"Failed to allocate memory for doubly linked list element",
          172LL,
          0LL,
          0LL,
          0LL,
          0LL);
      *(_DWORD *)(v13 + 40) = -1073741801;
      goto LABEL_18;
    }
  }
LABEL_16:
  if ( v18 != *(_QWORD *)(v14 + 64) )
  {
    WdLogSingleEntry1(1LL, 186LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v44,
          v43,
          v45,
          0,
          2,
          -1,
          (__int64)L"this->GetNumElements() == i_rList.GetNumElements()",
          186LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *(_DWORD *)(v13 + 72) = 2;
LABEL_18:
  *(_DWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 24) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *(_BYTE *)(v13 + 136) = 1;
  *(_QWORD *)(v13 + 88) = &ReferenceCounted::`vftable';
  *(_DWORD *)(v13 + 96) = 1;
  *(_QWORD *)(v13 + 112) = 0LL;
  *(_DWORD *)(v13 + 128) = 1833173005;
  *(_QWORD *)v13 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)(v13 + 24) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *(_QWORD *)(v13 + 88) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *(_QWORD *)(v13 + 104) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *(_QWORD *)(v13 + 120) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 32))(v13 + 32) )
  {
    v19 = *(_QWORD *)(v13 + 48);
    if ( v19 != v13 + 48 )
    {
      v32 = v19 - 8;
      if ( v19 != 8 )
      {
        do
        {
          if ( *(_QWORD *)(v32 + 40) )
            WdLogSingleEntry0(1LL);
          *(_QWORD *)(v32 + 40) = v13;
          if ( !v32 )
            WdLogSingleEntry0(1LL);
          v33 = *(_QWORD *)(v32 + 8);
          v32 = v33 - 8;
          if ( v33 == v13 + 48 )
            v32 = 0LL;
        }
        while ( v32 );
      }
    }
    v20 = *(_QWORD *)(v14 + 144);
    if ( v20 )
      *(_QWORD *)(v13 + 144) = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v13 + 24, *(unsigned int *)(v20 + 24));
    else
      *(_QWORD *)(v13 + 144) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *(int *)(v13 + 40);
  }
LABEL_22:
  v21 = *((_QWORD *)this + 13);
  if ( v21 && v13 != v21 )
    ReferenceCounted::Release((ReferenceCounted *)(v21 + 88));
  *((_QWORD *)this + 13) = v13;
  if ( !v13 )
  {
LABEL_55:
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 24))(v13 + 24) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v22 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v22 + 112) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(v22 + 112) = this;
LABEL_28:
  *((_DWORD *)this + 22) = 2;
  return this;
}
