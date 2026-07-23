/*
 * XREFs of sub_140862B44 @ 0x140862B44
 * Callers:
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 *     sub_14094A3E4 @ 0x14094A3E4 (sub_14094A3E4.c)
 *     sub_140A22D04 @ 0x140A22D04 (sub_140A22D04.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A25AC0 @ 0x140A25AC0 (sub_140A25AC0.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 */

__int64 __fastcall sub_140862B44(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = sub_14078003C(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
