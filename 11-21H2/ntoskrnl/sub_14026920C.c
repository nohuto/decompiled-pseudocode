/*
 * XREFs of sub_14026920C @ 0x14026920C
 * Callers:
 *     sub_140263404 @ 0x140263404 (sub_140263404.c)
 *     sub_140269180 @ 0x140269180 (sub_140269180.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 * Callees:
 *     <none>
 */

__int64 sub_14026920C()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
  if ( *(_BYTE *)(v0 + 16732) )
    return v0 + 17024;
  else
    return 0LL;
}
