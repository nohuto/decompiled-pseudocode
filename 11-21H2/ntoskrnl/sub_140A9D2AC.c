/*
 * XREFs of sub_140A9D2AC @ 0x140A9D2AC
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 */

signed __int8 __fastcall sub_140A9D2AC(_SLIST_ENTRY **a1)
{
  _SLIST_ENTRY *v1; // rbx
  signed __int8 result; // al
  _SLIST_ENTRY *Next; // rax
  _SLIST_ENTRY **v5; // rcx
  __int64 v6; // r8

  v1 = *a1;
  result = *((_BYTE *)&(*a1)[1].Next + 13);
  if ( SBYTE3((*a1)[1].Next[4].Next) >= result )
  {
    KeAcquireSpinLockAtDpcLevel(&qword_140D57750);
    if ( *((_BYTE *)&v1[1].Next + 12) )
    {
      Next = v1->Next;
      if ( *(&v1->Next->Next + 1) != v1 || (v5 = (_SLIST_ENTRY **)*((_QWORD *)&v1->Next + 1), *v5 != v1) )
        __fastfail(3u);
      *v5 = Next;
      *((_QWORD *)&Next->Next + 1) = v5;
      *((_BYTE *)&v1[1].Next + 12) = 0;
      --dword_140D57520;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D57750);
    result = (unsigned __int8)sub_140203D88((__int64)&unk_140D58FC0, v1, v6);
    *a1 = 0LL;
  }
  return result;
}
