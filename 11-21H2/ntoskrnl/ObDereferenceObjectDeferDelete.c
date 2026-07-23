/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140348920
 * Callers:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     sub_1402483DC @ 0x1402483DC (sub_1402483DC.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402F5EA0 @ 0x1402F5EA0 (sub_1402F5EA0.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 *     sub_14038B6C0 @ 0x14038B6C0 (sub_14038B6C0.c)
 *     sub_14069FD64 @ 0x14069FD64 (sub_14069FD64.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 *     sub_1406D9780 @ 0x1406D9780 (sub_1406D9780.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     sub_140721B0C @ 0x140721B0C (sub_140721B0C.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_140808A98 @ 0x140808A98 (sub_140808A98.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 * Callees:
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( dword_140D05010 )
    sub_1405C5EC8((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    sub_1402440B4((signed __int64)Object - 48);
  }
}
