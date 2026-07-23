/*
 * XREFs of sub_140840904 @ 0x140840904
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_140840CD8 @ 0x140840CD8 (sub_140840CD8.c)
 * Callees:
 *     sub_140815360 @ 0x140815360 (sub_140815360.c)
 */

PSLIST_ENTRY __fastcall sub_140840904(__int64 a1)
{
  __int64 i; // rdi
  __int64 j; // rdi
  PSLIST_ENTRY result; // rax
  _SLIST_ENTRY *v5; // rdx
  _SLIST_ENTRY *v6; // rdx

  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      v5 = *(_SLIST_ENTRY **)(a1 + 8 * i + 56);
      if ( v5 )
      {
        sub_140815360(0, v5);
        *(_QWORD *)(a1 + 8 * i + 56) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 48) = 0;
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 52); j = (unsigned int)(j + 1) )
    {
      v6 = *(_SLIST_ENTRY **)(a1 + 8 * j + 1048);
      if ( v6 )
      {
        sub_140815360(0, v6);
        *(_QWORD *)(a1 + 8 * j + 1048) = 0LL;
      }
    }
    *(_DWORD *)(a1 + 52) = 0;
    return sub_140815360(1, (_SLIST_ENTRY *)a1);
  }
  return result;
}
