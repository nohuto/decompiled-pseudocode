/*
 * XREFs of PspInitializeFullProcessImageName @ 0x1406B3498
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     PspSetProcessShortName @ 0x1407CE6A8 (PspSetProcessShortName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r14
  int NameStringMode; // eax
  signed int v6; // edi
  __int64 v7; // rax
  void *v8; // rbx
  __int64 Pool2; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[34]; // [rsp+50h] [rbp-B0h] BYREF

  memset(Src, 0, sizeof(Src));
  if ( (*(_DWORD *)(a2 + 2172) & 1) != 0 )
    goto LABEL_16;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 1304);
    if ( !v11 )
      goto LABEL_16;
    v12 = MiSectionControlArea(v11);
    v4 = MiReferenceControlAreaFileWithTag(v12, 0x746C6644u);
  }
  v14 = *(_OWORD *)(v4 + 88);
  PspSetProcessShortName(a2, &v14);
  v13 = 272;
  NameStringMode = ObQueryNameStringMode(v4, (unsigned int)Src, 272, (unsigned int)&v13, 0);
  v6 = NameStringMode;
  if ( NameStringMode == -2147483643 || NameStringMode == -1073741789 || NameStringMode == -1073741820 )
  {
    if ( v13 > 0x110 )
    {
      Pool2 = ExAllocatePool2(64LL, v13, 1850307408LL);
      v8 = (void *)Pool2;
      if ( Pool2 )
      {
        v6 = ObQueryNameStringMode(v4, Pool2, v13, (unsigned int)&v13, 0);
        if ( v6 >= 0 )
          goto LABEL_11;
        ExFreePoolWithTag(v8, 0);
      }
    }
LABEL_16:
    v13 = 16;
    v8 = (void *)ExAllocatePool2(64LL, 16LL, 1850307408LL);
    v6 = v8 == 0LL ? 0xC0000017 : 0;
    goto LABEL_11;
  }
  if ( NameStringMode < 0 )
    goto LABEL_16;
  if ( v13 - 17 > 0xFF )
    goto LABEL_16;
  v7 = ExAllocatePool2(64LL, v13, 1850307408LL);
  v8 = (void *)v7;
  if ( !v7 )
    goto LABEL_16;
  *(_OWORD *)v7 = *(_OWORD *)Src;
  *(_QWORD *)(v7 + 8) = v7 + 16;
  memmove((void *)(v7 + 16), Src[1], WORD1(Src[0]));
LABEL_11:
  *(_QWORD *)(a2 + 1472) = v8;
  return (unsigned int)v6;
}
