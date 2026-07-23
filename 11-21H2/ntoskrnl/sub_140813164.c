/*
 * XREFs of sub_140813164 @ 0x140813164
 * Callers:
 *     sub_14064CC20 @ 0x14064CC20 (sub_14064CC20.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 *     sub_140A1D808 @ 0x140A1D808 (sub_140A1D808.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 * Callees:
 *     sub_140250FF0 @ 0x140250FF0 (sub_140250FF0.c)
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A7830 @ 0x1403A7830 (sub_1403A7830.c)
 *     sub_1403A7848 @ 0x1403A7848 (sub_1403A7848.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140813164(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // esi
  void *v9; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  __int64 v13; // rdx
  HANDLE v14; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v15; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17[2]; // [rsp+48h] [rbp-70h] BYREF
  void *v18; // [rsp+C0h] [rbp+8h]

  v15 = 0LL;
  DestinationString = 0LL;
  *(&v17[0].Length + 1) = 0;
  *(&v17[0].Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    v14 = 0LL;
    v9 = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = (void *)sub_14025DBFC(a1);
    a3 |= 0x40000u;
    v17[0].Length = 48;
    v17[0].RootDirectory = v18;
    v17[0].Attributes = 576;
    v17[0].ObjectName = &DestinationString;
    *(_OWORD *)&v17[0].SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = sub_1403A7830(&v14, v10, v17);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      v9 = (void *)sub_140813344(983103);
      v11 = sub_1403A7848(v14, v13, v9);
      if ( v11 >= 0 )
      {
        v11 = sub_1403A7830(&v15, a3, v17);
        if ( v11 >= 0 )
        {
          sub_140250FF0(v14);
          v14 = v15;
LABEL_6:
          *a4 = v14;
        }
      }
    }
    if ( v11 < 0 && v14 )
      sub_140250FF0(v14);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4B444342u);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      a1 = (__int64)v18;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
