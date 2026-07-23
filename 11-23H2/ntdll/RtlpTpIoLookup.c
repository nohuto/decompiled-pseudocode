/*
 * XREFs of RtlpTpIoLookup @ 0x1801281DC
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180127DA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x18004BC74 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x180062E00 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x180127F2C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(_RTL_SPLAY_LINKS **a1, unsigned __int64 a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rbx
  int v7; // esi
  _RTL_SPLAY_LINKS *v8; // rdi
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v8 = v6 - 4;
      v12 = v6 - 4;
      if ( v6[-4].Parent == (_RTL_SPLAY_LINKS *)a2 )
        break;
      if ( v6[-4].Parent <= (_RTL_SPLAY_LINKS *)a2 )
      {
        RightChild = v6->RightChild;
        if ( !RightChild )
        {
          v7 = RtlpTpIoAlloc(&v12, a2, a3);
          v8 = v12;
          if ( !v12 )
            goto LABEL_14;
          p_Parent = &v12[4].Parent;
          v6->RightChild = v12 + 4;
          goto LABEL_13;
        }
      }
      else
      {
        RightChild = v6->LeftChild;
        if ( !RightChild )
        {
          v7 = RtlpTpIoAlloc(&v12, a2, a3);
          v8 = v12;
          if ( !v12 )
            goto LABEL_14;
          p_Parent = &v12[4].Parent;
          v6->LeftChild = v12 + 4;
LABEL_13:
          *p_Parent = v6;
          goto LABEL_14;
        }
      }
      v6 = RightChild;
    }
    v7 = TpBindFileToDirect(a3, (__int64)&v8->LeftChild, (_PEB_LDR_DATA *)v6[-1].LeftChild);
    if ( v7 >= 0 )
      ++LODWORD(v6[-1].RightChild);
  }
  else
  {
    v7 = RtlpTpIoAlloc(&v12, a2, a3);
    v8 = v12;
  }
LABEL_14:
  if ( v8 && RtlpTpIoTree != &v8[4] )
    RtlpTpIoTree = RtlSplay(v8 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v8;
  return (unsigned int)v7;
}
