/*
 * XREFs of sub_1407943B0 @ 0x1407943B0
 * Callers:
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall sub_1407943B0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  v2 = *(_QWORD *)(a1 + 784);
  if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceSecurityDescriptor(a2, 1u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ (unsigned __int64)v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
