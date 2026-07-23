/*
 * XREFs of sub_14021E6C4 @ 0x14021E6C4
 * Callers:
 *     sub_14021E5E4 @ 0x14021E5E4 (sub_14021E5E4.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     RtlDeleteNoSplay @ 0x14021D900 (RtlDeleteNoSplay.c)
 *     sub_14021E8B8 @ 0x14021E8B8 (sub_14021E8B8.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_14021F514 @ 0x14021F514 (sub_14021F514.c)
 */

char __fastcall sub_14021E6C4(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS **p_Parent; // r15
  PRTL_SPLAY_LINKS *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  _RTL_SPLAY_LINKS *v7; // rbx
  PSLIST_ENTRY v8; // rax
  PRTL_SPLAY_LINKS v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS **v11; // r14
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS **v13; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v15; // rax
  PRTL_SPLAY_LINKS v16; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v18; // r8
  PRTL_SPLAY_LINKS v19; // rax
  _RTL_SPLAY_LINKS *v20; // rsi
  char v22; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v23; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v23 = 0LL;
  v22 = 0;
  v6 = sub_14021E8B8(v5, (int)a2 + 8, (int)a2 + 48, (unsigned int)&v23, (__int64)&v22);
  v7 = (_RTL_SPLAY_LINKS *)v6;
  if ( v6 )
  {
    v11 = (_RTL_SPLAY_LINKS **)(v6 - 24);
    v12 = *(_RTL_SPLAY_LINKS **)(v6 - 24);
    v13 = v11;
    if ( v12 )
    {
      LeftChild = a2->LeftChild;
      do
      {
        if ( LeftChild < v12->LeftChild || LeftChild == v12->LeftChild && (!a2->RightChild || v12->RightChild) )
          break;
        v13 = &v12->Parent;
        v12 = v12->Parent;
      }
      while ( v12 );
    }
    v15 = *v13;
    if ( !*v13 )
    {
      v7[1].Parent = a2;
      v15 = *v13;
    }
    a2->Parent = v15;
    *v13 = a2;
    *v4 = RtlSplay(v7);
    if ( *p_Parent > v7[-1].RightChild )
    {
      v7[-1].RightChild = *p_Parent;
      while ( 1 )
      {
        v19 = RtlRealSuccessor(v7);
        v20 = v19;
        if ( !v19 )
          break;
        v16 = v19 - 1;
        Parent = v19[-1].Parent;
        if ( Parent->LeftChild > v7[-1].RightChild )
          break;
        if ( !LOBYTE(v7[-1].LeftChild) && LOBYTE(v16->LeftChild) )
        {
          sub_14021F514(&v19[-1], 0LL, 0LL, 0LL);
          Parent = v16->Parent;
        }
        v7[1].Parent->Parent = Parent;
        v7[1].Parent = v16[2].Parent;
        if ( v16->RightChild > v7[-1].RightChild )
        {
          if ( LOBYTE(v16->LeftChild) )
            LOBYTE(v7[-1].LeftChild) = 1;
          v7[-1].RightChild = v16->RightChild;
        }
        RtlDeleteNoSplay(v20, v4);
        sub_140203D88((__int64)&stru_140CE2600, (_SLIST_ENTRY *)&v20[-1], v18);
      }
    }
    if ( LOBYTE(v7[-1].LeftChild) )
      sub_14021F514(v11, 0LL, 0LL, 0LL);
  }
  else
  {
    v8 = sub_140202234((__int64)&stru_140CE2600);
    if ( !v8 )
      return (char)v8;
    v9 = (PRTL_SPLAY_LINKS)(&v8[1].Next + 1);
    *((_BYTE *)&v8->Next + 8) = 0;
    v8[3].Next = (_SLIST_ENTRY *)a2;
    v8->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&v8[1].Next + 1) = (char *)v8 + 24;
    v8[2].Next = 0LL;
    *((_QWORD *)&v8[2].Next + 1) = 0LL;
    v8[1].Next = (_SLIST_ENTRY *)*p_Parent;
    v10 = v23;
    a2->Parent = 0LL;
    if ( v10 )
    {
      if ( v22 )
        v10->LeftChild = v9;
      else
        v10->RightChild = v9;
      v9->Parent = v10;
      v9 = RtlSplay(v9);
    }
    *v4 = v9;
  }
  LOBYTE(v8) = 1;
  return (char)v8;
}
