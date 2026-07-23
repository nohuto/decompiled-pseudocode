/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0
 * Callers:
 *     sub_140201AC4 @ 0x140201AC4 (sub_140201AC4.c)
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024EB80 @ 0x14024EB80 (sub_14024EB80.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_140367DEC @ 0x140367DEC (sub_140367DEC.c)
 *     sub_140577D00 @ 0x140577D00 (sub_140577D00.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14069A534 @ 0x14069A534 (sub_14069A534.c)
 *     sub_1406C29BC @ 0x1406C29BC (sub_1406C29BC.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407F6410 @ 0x1407F6410 (sub_1407F6410.c)
 *     sub_140811430 @ 0x140811430 (sub_140811430.c)
 * Callees:
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( dword_140D05010 )
    sub_1405C5EC8((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
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
