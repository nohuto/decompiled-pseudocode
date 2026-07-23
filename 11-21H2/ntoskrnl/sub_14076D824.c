/*
 * XREFs of sub_14076D824 @ 0x14076D824
 * Callers:
 *     sub_14076D7D4 @ 0x14076D7D4 (sub_14076D7D4.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14076D824(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  __int64 v4; // r14
  __int128 v5; // xmm0
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  char v9[4]; // [rsp+68h] [rbp-59h] BYREF
  int v10; // [rsp+6Ch] [rbp-55h] BYREF
  int v11; // [rsp+70h] [rbp-51h] BYREF
  __int128 v12; // [rsp+78h] [rbp-49h] BYREF
  __int128 Buffer; // [rsp+88h] [rbp-39h] BYREF
  int v14; // [rsp+98h] [rbp-29h]
  int v15; // [rsp+9Ch] [rbp-25h]
  wchar_t Str2[40]; // [rsp+A8h] [rbp-19h] BYREF

  v1 = 0;
  v2 = 0;
  v11 = 0;
  v10 = 0;
  v15 = 0;
  v12 = 0LL;
  v9[0] = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    while ( 1 )
    {
      v4 = 32LL * v2;
      v5 = *(_OWORD *)(v4 + a1 + 80);
      v14 = *(_DWORD *)(v4 + a1 + 96);
      Buffer = v5;
      v6 = RtlLookupElementGenericTableAvl(&stru_140C45060, &Buffer);
      v7 = v6;
      if ( !*(_DWORD *)(v4 + a1 + 100) && !*(_QWORD *)(v4 + a1 + 104) && v6 )
        break;
      if ( ++v2 >= *(_DWORD *)(a1 + 76) )
        return (unsigned int)v1;
    }
    v1 = sub_14077DA5C(
           qword_140D00AC0,
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
           1,
           0,
           0LL,
           (__int64)&qword_140010A78,
           (__int64)&v10,
           (__int64)&v12,
           16,
           (__int64)&v11,
           0);
    if ( v1 >= 0 && v10 == 13 && v11 == 16 )
    {
      v1 = sub_140773030(&v12, Str2);
      if ( v1 >= 0 )
      {
        v1 = sub_14077DA5C(
               qword_140D00AC0,
               (unsigned int)Str2,
               5,
               0,
               0LL,
               (__int64)&qword_14000E180,
               (__int64)&v10,
               (__int64)v9,
               1,
               (__int64)&v11,
               0);
        if ( v1 >= 0 && v10 == 17 && v11 == 1 && (v9[0] != -1 || (v7[5] & 1) != 0) )
          return (unsigned int)sub_14076DAF0(Str2);
      }
    }
  }
  return (unsigned int)v1;
}
