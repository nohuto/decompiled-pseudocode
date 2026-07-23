/*
 * XREFs of sub_140955274 @ 0x140955274
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_1406BAE14 @ 0x1406BAE14 (sub_1406BAE14.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A23FCC @ 0x140A23FCC (sub_140A23FCC.c)
 */

__int64 __fastcall sub_140955274(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  __int16 v10; // r11
  __int64 v11; // rcx
  ULONG v12; // esi
  int inited; // edi
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  __int128 v19; // [rsp+48h] [rbp-41h] BYREF
  __int128 v20; // [rsp+58h] [rbp-31h]
  __int64 v21; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  WCHAR SourceString[8]; // [rsp+80h] [rbp-9h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  Value = 0;
  *a6 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  v8 = sub_14078A1A8(a1, a2, a5, (__int64)&v19);
  if ( v8 >= 0 )
  {
    if ( sub_14078A600(2u) )
    {
      if ( (_QWORD)v20 && DWORD2(v19) == 1 && a3 && a4 >= 8 )
      {
        v9 = sub_1406BAE14(SWORD2(v19), (int *)&v15);
        if ( v9 >= 0 )
        {
          if ( (v10 & 0xFF00) == 0x200 && HIDWORD(v20) == -1 )
          {
            if ( (int)sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v17) >= 0 )
            {
              v11 = 0LL;
              if ( *(_QWORD *)&qword_140D00AC0 )
                v11 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
              v12 = 0;
              if ( (int)sub_14077FFEC(
                          v11,
                          v17,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  if ( v9 < 0 )
                    break;
                  LODWORD(v17) = 5;
                  inited = sub_1406CB3B4(Handle, v12, (char *)SourceString, (unsigned int *)&v17);
                  if ( inited >= 0 )
                  {
                    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                    if ( inited >= 0 )
                    {
                      inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                      if ( inited >= 0 )
                      {
                        v9 = sub_140A23FCC(*(_QWORD *)&qword_140D00AC0, v20, v15);
                        if ( v9 == -1073741772 )
                          v9 = 0;
                      }
                    }
                  }
                  ++v12;
                }
                while ( inited >= 0 );
              }
            }
          }
          else
          {
            v9 = sub_140A23FCC(*(_QWORD *)&qword_140D00AC0, v20, v15);
          }
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v8 = sub_14078A584(v9, v21, a3, a4, a6);
  }
  sub_1406BACAC((__int64)&v19);
  return (unsigned int)v8;
}
