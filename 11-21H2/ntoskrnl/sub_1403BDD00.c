/*
 * XREFs of sub_1403BDD00 @ 0x1403BDD00
 * Callers:
 *     sub_1403BD0FC @ 0x1403BD0FC (sub_1403BD0FC.c)
 *     sub_1403BD3FC @ 0x1403BD3FC (sub_1403BD3FC.c)
 * Callees:
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     sub_1403BE068 @ 0x1403BE068 (sub_1403BE068.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BDD00(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rdx
  __int16 v6; // r9
  unsigned __int16 Length; // bp
  unsigned int v8; // r14d
  void *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  const void *v14; // rdx
  __int64 *v15; // rax
  int v17; // r11d
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-C8h] BYREF

  v1 = 0;
  DestinationString = 0LL;
  if ( byte_140C097A4 )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)a1 != 1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)(a1 + 4) != 240 )
      return (unsigned int)-1073741811;
    if ( (*(_DWORD *)(a1 + 220) & 0xFFFFF800) != 0 )
      return (unsigned int)-1073741811;
    v3 = *(_DWORD *)(a1 + 212);
    if ( !v3 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)(v3 - 1) > 1 )
      return (unsigned int)-1073741637;
    v4 = *(_DWORD *)(a1 + 216);
    if ( v4 == -1 )
      return (unsigned int)-1073741811;
    if ( sub_140252134(v4) )
      return (unsigned int)-1073741635;
    if ( *(_QWORD *)(a1 + 88)
      && *(_QWORD *)(a1 + 96)
      && !*(_QWORD *)(a1 + 64)
      && ((v6 & 1) == 0 || *(_QWORD *)(a1 + 8))
      && *(_QWORD *)(a1 + 16)
      && ((v6 & 2) == 0 || *(_QWORD *)(a1 + 24) && *(_DWORD *)(a1 + 224))
      && (!*(_DWORD *)(a1 + 236) || *(_QWORD *)(a1 + 128) && *(_QWORD *)(a1 + 136))
      && ((v6 & 0x400) == 0 || *(_QWORD *)(a1 + 176)) )
    {
      sub_1403BE068(a1, v5, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (*(_DWORD *)(a1 + 220) & 0x100) != 0 && sub_1403BAEA4() && qword_140C4C4A8 )
        *(_DWORD *)(a1 + 220) ^= v17;
      Length = DestinationString.Length;
      v8 = (((*(_DWORD *)(a1 + 208) + 367) & 0xFFFFFFF8) + DestinationString.Length + 9) & 0xFFFFFFF8;
      v9 = (void *)sub_1403BF104(v8, 1LL);
      v10 = (__int64)v9;
      if ( v9 )
      {
        memset(v9, 0, v8);
        v11 = (v10 + 367) & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v10 + 16) = v11;
        v12 = *(unsigned int *)(a1 + 208) + 7LL + v11;
        *(_QWORD *)(v10 + 256) = v10 + 248;
        *(_QWORD *)(v10 + 248) = v10 + 248;
        *(_QWORD *)(v10 + 272) = v10 + 264;
        *(_QWORD *)(v10 + 264) = v10 + 264;
        *(_QWORD *)(v10 + 344) = v12 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_DWORD *)(v10 + 24) = *(_DWORD *)(a1 + 208);
        *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 8);
        *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 40);
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 56);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 72);
        *(_OWORD *)(v10 + 112) = *(_OWORD *)(a1 + 88);
        *(_OWORD *)(v10 + 128) = *(_OWORD *)(a1 + 104);
        *(_OWORD *)(v10 + 144) = *(_OWORD *)(a1 + 120);
        *(_OWORD *)(v10 + 160) = *(_OWORD *)(a1 + 136);
        *(_OWORD *)(v10 + 176) = *(_OWORD *)(a1 + 152);
        *(_OWORD *)(v10 + 192) = *(_OWORD *)(a1 + 168);
        *(_OWORD *)(v10 + 208) = *(_OWORD *)(a1 + 184);
        *(_DWORD *)(v10 + 228) = *(_DWORD *)(a1 + 220);
        *(_DWORD *)(v10 + 224) = *(_DWORD *)(a1 + 212);
        *(_DWORD *)(v10 + 236) = *(_DWORD *)(a1 + 224);
        *(_DWORD *)(v10 + 240) = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(v10 + 288) = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(v10 + 292) = *(_DWORD *)(a1 + 232);
        *(_QWORD *)(v10 + 280) = 0LL;
        *(_DWORD *)(v10 + 296) = *(_DWORD *)(a1 + 236);
        v13 = *(_DWORD *)(a1 + 208);
        if ( v13 )
        {
          v14 = *(const void **)(a1 + 200);
          if ( v14 )
            memmove(*(void **)(v10 + 16), v14, v13);
        }
        *(_WORD *)(v10 + 336) = 0;
        *(_WORD *)(v10 + 338) = Length + 2;
        RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 336), &DestinationString);
        v15 = (__int64 *)qword_140C4DE78;
        if ( *(ULONG_PTR **)qword_140C4DE78 != &qword_140C4DE70 )
          __fastfail(3u);
        ++dword_140C4EFC0;
        *(_QWORD *)v10 = &qword_140C4DE70;
        *(_QWORD *)(v10 + 8) = v15;
        *v15 = v10;
        qword_140C4DE78 = v10;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v1;
}
