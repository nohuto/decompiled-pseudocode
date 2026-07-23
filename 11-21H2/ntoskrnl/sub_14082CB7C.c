/*
 * XREFs of sub_14082CB7C @ 0x14082CB7C
 * Callers:
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 *     sub_1406ACFF0 @ 0x1406ACFF0 (sub_1406ACFF0.c)
 *     sub_140706200 @ 0x140706200 (sub_140706200.c)
 *     sub_14070705C @ 0x14070705C (sub_14070705C.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

__int64 __fastcall sub_14082CB7C(PVOID BaseOfImage, ULONG64 Size, _QWORD *a3)
{
  __int64 v5; // r14
  int v6; // ebx
  _DWORD *v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  char v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v14) = 0;
  OutHeaders = 0LL;
  v12 = 0LL;
  v5 = (unsigned int)Size;
  memset(v13, 0, sizeof(v13));
  v6 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
  if ( v6 >= 0 )
  {
    v7 = sub_14075AEA4(BaseOfImage);
    if ( v7 && (int)*v7 >= 228 )
    {
      v8 = *((_QWORD *)v7 + 15);
      v9 = 0;
      if ( v8 && v8 >= (unsigned __int64)BaseOfImage && v8 < (unsigned __int64)BaseOfImage + v5 - 8 )
        v9 = v8 - (_DWORD)BaseOfImage;
      v6 = sub_140706200(
             (char *)BaseOfImage,
             (unsigned int)v5,
             (__int64)v7,
             *v7,
             0LL,
             OutHeaders->OptionalHeader.Magic,
             &v14,
             &v12);
      if ( v6 >= 0 )
      {
        v6 = sub_1406ACDDC((char *)BaseOfImage, v5, v14, &v12, v11, (unsigned int *)v13);
        if ( v6 >= 0 )
        {
          v6 = sub_1406ACFF0((__int64)v13, v9, v5, a3);
          sub_14070705C(v13);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
