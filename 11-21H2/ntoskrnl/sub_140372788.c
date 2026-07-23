/*
 * XREFs of sub_140372788 @ 0x140372788
 * Callers:
 *     sub_1407F42D0 @ 0x1407F42D0 (sub_1407F42D0.c)
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 * Callees:
 *     sub_140642A44 @ 0x140642A44 (sub_140642A44.c)
 *     sub_140642CDC @ 0x140642CDC (sub_140642CDC.c)
 *     RtlOpenCurrentUser @ 0x1407F4A70 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 *     RtlIsMultiUsersInSessionSku @ 0x1409B9200 (RtlIsMultiUsersInSessionSku.c)
 */

NTSTATUS __fastcall sub_140372788(int a1, __int64 a2, HANDLE *a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return -1073741811;
  v4 = dword_140C4EF70;
  if ( !dword_140C4EF70 )
  {
    if ( RtlIsMultiSessionSku() )
      v4 = 1;
    else
      v4 = (RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140C4EF70 = v4;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v7 )
    return sub_140642CDC(v7, a3);
  if ( (_DWORD)v7 != 1 )
    return -1073741595;
  v8 = 0;
  return sub_140642A44(v7, a2, a3, &v8);
}
