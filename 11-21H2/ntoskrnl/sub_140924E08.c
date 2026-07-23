/*
 * XREFs of sub_140924E08 @ 0x140924E08
 * Callers:
 *     sub_140924C14 @ 0x140924C14 (sub_140924C14.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406881CC @ 0x1406881CC (sub_1406881CC.c)
 *     sub_14091A9EC @ 0x14091A9EC (sub_14091A9EC.c)
 *     sub_140925504 @ 0x140925504 (sub_140925504.c)
 *     sub_140925A18 @ 0x140925A18 (sub_140925A18.c)
 */

__int64 __fastcall sub_140924E08(_DWORD *a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  ULONG v12; // r14d
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned int v18; // [rsp+30h] [rbp-61h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-59h]
  unsigned int v20; // [rsp+40h] [rbp-51h]
  _DWORD BitMapHeader[5]; // [rsp+44h] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-39h]
  __int64 v23; // [rsp+60h] [rbp-31h]
  _DWORD v24[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+70h] [rbp-21h]
  int v26; // [rsp+78h] [rbp-19h]
  unsigned int v27; // [rsp+7Ch] [rbp-15h]
  __int128 v28; // [rsp+80h] [rbp-11h]

  v23 = a6;
  v9 = a1[10];
  v10 = *(_QWORD *)(a2 + 16);
  v20 = v9 >> 12;
  BugCheckParameter2 = a4;
  BitMapHeader[0] = 0;
  BitMapHeader[2] = 0;
  v19 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v18 = 0;
  v11 = sub_14042A5E0(v10, 512LL);
  if ( v11 >= 0 )
  {
    if ( *v19 == 1414678852 )
    {
      BitMapHeader[1] = a1[10] >> 9;
      *(_QWORD *)&BitMapHeader[3] = v19 + 1;
      v12 = RtlNumberOfSetBits((PRTL_BITMAP)&BitMapHeader[1]);
      if ( v12 )
      {
        v13 = v12 << 9;
        sub_1406881CC((PRTL_BITMAP)&BitMapHeader[1], 0LL, &v18);
        v14 = sub_14042A5E0(8 * v18, 0LL);
        v15 = v14;
        if ( v14 )
        {
          sub_1406881CC((PRTL_BITMAP)&BitMapHeader[1], v14, &v18);
          v16 = v18;
          v26 = a1[10];
          v24[0] = 1162638920;
          v27 = v18;
          v24[1] = v13 + 8 * (v18 + 5);
          if ( (unsigned __int8)sub_140925504(v24, v15, v18) )
          {
            v11 = sub_14042A5E0(*(_QWORD *)(a2 + 16), (v20 + 1027) & 0xFFFFFE00);
            if ( v11 >= 0 )
            {
              v11 = sub_14091A9EC(BugCheckParameter2, (__int64)v24, v15, (__int64)v19, v13, BitMapHeader);
              if ( v11 >= 0 )
              {
                if ( (v25 & 1) != 0 )
                  a1[36] |= 1u;
                if ( a7 )
                  sub_140925A18(v15, v16, a7);
                v11 = 1073741833;
              }
            }
          }
          else
          {
            v11 = -1073741492;
          }
          sub_14042A5E0(v15, 8 * v16);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( BYTE3(NlsMbOemCodePageTag) || (dword_140C4986C & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v11;
}
