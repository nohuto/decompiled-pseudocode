/*
 * XREFs of sub_14080271C @ 0x14080271C
 * Callers:
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_1409CE134 @ 0x1409CE134 (sub_1409CE134.c)
 *     sub_140A1D394 @ 0x140A1D394 (sub_140A1D394.c)
 *     sub_140A204C4 @ 0x140A204C4 (sub_140A204C4.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_14080271C(void *a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 result; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v15 = a2;
  LOBYTE(v4) = sub_1403A7864((char)a1);
  v5 = v4;
  result = sub_14081369C(v4);
  if ( (int)result >= 0 )
  {
    sub_1408138F0(2LL, L"Deleting element %08x", a2);
    v14 = 0LL;
    v16 = 0LL;
    v7 = sub_140813164(a1, L"Elements", 131097LL, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_1408138F0(4LL, L"Failed to open key for all object's elements. Status: %x", (unsigned int)v7);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = sub_140813164(v14, DstBuf, 0x10000LL, &v16);
      if ( v10 < 0 )
      {
        v13 = 4LL;
        if ( v10 == -1073741772 )
          v13 = 2LL;
        sub_1408138F0(v13, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v10);
        v11 = v16;
        v8 = -1073741275;
      }
      else
      {
        v11 = v16;
        v12 = sub_14080422C(v16);
        v8 = v12;
        if ( v12 < 0 )
          sub_1408138F0(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v12);
        else
          v11 = 0LL;
      }
      if ( v11 )
        sub_1408132F0(v11);
    }
    if ( v14 )
      sub_1408132F0(v14);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)sub_140803438(a1, &v15) )
        sub_14064CD04(a1);
    }
    LOBYTE(v9) = v5;
    sub_1408134D8(v9);
    return (unsigned int)v8;
  }
  return result;
}
