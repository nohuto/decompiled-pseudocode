/*
 * XREFs of ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C0092D78
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0096F5C (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00974C0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(struct _SINGLE_LIST_ENTRY *Src, struct _SINGLE_LIST_ENTRY *a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rbx
  _SINGLE_LIST_ENTRY *Pool2; // rax
  _SINGLE_LIST_ENTRY *v6; // rsi
  _SINGLE_LIST_ENTRY *Next; // rcx

  v2 = 0;
  v4 = (unsigned int *)Src;
  if ( Src )
  {
    while ( 1 )
    {
      Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(66LL, v4[4], 1802519630);
      v6 = Pool2;
      if ( !Pool2 )
        break;
      memmove(Pool2, v4, v4[4]);
      v6->Next = 0LL;
      v6[1].Next = 0LL;
      v6->Next = a2->Next;
      a2->Next = v6;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x60u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    v2 = -1073741670;
    while ( 1 )
    {
      Next = a2->Next;
      if ( !a2->Next )
        break;
      a2->Next = Next->Next;
      ExFreePoolWithTag(Next, 0);
    }
  }
  return v2;
}
