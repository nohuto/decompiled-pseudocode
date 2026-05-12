/*
 * XREFs of sub_1C0081478 @ 0x1C0081478
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 */

__int64 __fastcall sub_1C0081478(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 >= (unsigned __int64)a4 + 56 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    LOWORD(v14) = *(_WORD *)(a3 + 24);
    sub_1C007A4E8((char *)&v14, 2u);
    *(_WORD *)(a1 + 4) = v14;
    v14 = (a4 + 39) & 0xFFFFFFFC;
    sub_1C007A4E8((char *)&v14, 4u);
    v9 = a5;
    *(_DWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 20) = v9;
    sub_1C007A4E8((char *)(a1 + 20), 4u);
    *(_DWORD *)(a1 + 24) = a6;
    sub_1C007A4E8((char *)(a1 + 24), v10);
    v14 = ((a4 + 39) & 0xFFFFFFFC) - 24;
    sub_1C007A4E8((char *)&v14, v11);
    *(_DWORD *)(a1 + 40) = v14;
    v14 = a4;
    sub_1C007A4E8((char *)&v14, v12);
    result = 0LL;
    *(_DWORD *)(a1 + 52) = v14;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      v13 = a4 + 56;
      sub_1C003EE60((__int64)off_1C0093070->AttachedDevice, 0x10u, (__int64)&unk_1C008B738, a2, v13);
    }
    return 3221225507LL;
  }
  return result;
}
