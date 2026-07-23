/*
 * XREFs of sub_140803250 @ 0x140803250
 * Callers:
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 *     sub_140800F20 @ 0x140800F20 (sub_140800F20.c)
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 *     sub_1409CE134 @ 0x1409CE134 (sub_1409CE134.c)
 *     sub_140A1D3AC @ 0x140A1D3AC (sub_140A1D3AC.c)
 *     sub_140A1E118 @ 0x140A1E118 (sub_140A1E118.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803438 @ 0x140803438 (sub_140803438.c)
 *     sub_14080346C @ 0x14080346C (sub_14080346C.c)
 *     sub_140803498 @ 0x140803498 (sub_140803498.c)
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140803250(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-49h]
  char v20; // [rsp+30h] [rbp-41h] BYREF
  char v21; // [rsp+31h] [rbp-40h]
  int v22; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v24 = a2;
  v22 = 0;
  if ( !a4 && a5 )
    return 3221225485LL;
  v23 = 0LL;
  v8 = 0LL;
  v20 = 0;
  v25 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    sub_14080271C(a1, a2);
    return 0LL;
  }
  LOBYTE(v9) = sub_1403A7864((char)a1);
  v21 = v9;
  result = sub_14081369C(v9);
  if ( (int)result >= 0 )
  {
    sub_1408138F0(2LL, L"Setting element %08x", a2);
    v11 = sub_140813164(a1, L"Elements", 131101LL, &v23);
    v12 = v11;
    if ( v11 < 0 )
    {
      sub_1408138F0(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v23 )
          sub_1408132F0(v23);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)sub_140803438(a1, &v24) )
            sub_14064CD04(a1);
        }
        LOBYTE(v13) = v21;
        sub_1408134D8(v13);
        return (unsigned int)v12;
      }
      v14 = sub_1408036C8(v23, DstBuf, 65538LL, 1LL, &v25, &v20);
      v12 = v14;
      if ( v14 < 0 )
      {
        sub_1408138F0(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v25;
      }
      else
      {
        v15 = sub_140803498(a2, a4, a5, 0LL, &P, &v22);
        v8 = v25;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          sub_1408138F0(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, v18, v19);
        }
        else
        {
          sub_14080346C(HIBYTE(a2) & 0xF);
          LODWORD(v19) = v22;
          v17 = sub_1408123B4(v8, L"Element", 0LL);
          v12 = v17;
          if ( v17 < 0 )
            sub_1408138F0(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v17,
              v16,
              v19);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        if ( v12 >= 0 )
          goto LABEL_13;
      }
    }
    if ( v20 )
    {
      sub_14080422C(v8);
      v8 = 0LL;
    }
LABEL_13:
    if ( v8 )
      sub_1408132F0(v8);
    goto LABEL_15;
  }
  return result;
}
