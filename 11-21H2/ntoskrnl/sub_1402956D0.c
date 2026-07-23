/*
 * XREFs of sub_1402956D0 @ 0x1402956D0
 * Callers:
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140701F10 @ 0x140701F10 (sub_140701F10.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 * Callees:
 *     sub_14024ED80 @ 0x14024ED80 (sub_14024ED80.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_14045F176 @ 0x14045F176 (sub_14045F176.c)
 */

__int64 __fastcall sub_1402956D0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // esi
  int v9; // eax
  char v10; // bl
  int v11; // r15d
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v13 = 0;
  v6 = a1;
  result = sub_140297F80(a1, &v13);
  if ( (int)result < 0 )
    return result;
  v8 = 0;
  if ( (v6 & 0x10000) != 0 )
  {
    v4 = 716;
    v8 = 4;
  }
  else
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v4 = 1232;
    }
    else
    {
      if ( (v6 & 0x200000) != 0 )
      {
        v4 = 416;
        v8 = 8;
        goto LABEL_6;
      }
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_6;
      v4 = 912;
    }
    v8 = 16;
  }
LABEL_6:
  v9 = v4 + 32;
  v10 = v13;
  if ( (v13 & 2) != 0 )
  {
    v11 = -v8 & (v8 + v9 - 1);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v12 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & a3;
      sub_14045F176(v6, &v12);
      a3 = v12;
    }
    v9 = v11 - v8 - 448 + sub_14024ED80(a3);
  }
  if ( (v10 & 4) != 0 )
    v9 += 32;
  *a2 = v8 - 1 + v9;
  return 0LL;
}
