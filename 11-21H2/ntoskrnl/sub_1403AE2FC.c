/*
 * XREFs of sub_1403AE2FC @ 0x1403AE2FC
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_140A6F708 @ 0x140A6F708 (sub_140A6F708.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 *     sub_140A70264 @ 0x140A70264 (sub_140A70264.c)
 */

__int64 __fastcall sub_1403AE2FC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0;
  v13[0] = 56LL;
  v13[1] = a1;
  v4 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)v4 < 0x800u && qword_140D088C0[v4] && byte_140C31E40 )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v6 <= 0x3000
      && (v7 = *(unsigned int *)(a1 + 16), (unsigned int)v7 < (unsigned int)v6)
      && (v8 = *(unsigned int *)(a1 + 20), (_DWORD)v8)
      && v7 + v8 <= v6 )
    {
      sub_140A70244((char *)&unk_140CFCEE8 + (unsigned int)v7, *(_QWORD *)(a2 + 8), (unsigned int)v8);
      if ( v10 == v9 )
      {
        v11 = *(unsigned __int16 *)(a1 + 6);
        if ( (_WORD)v11 != (unsigned __int16)HIDWORD(KeGetPcr()[1].LockArray) )
          a3 = *(_QWORD *)(qword_140D088C0[v11] + 35264);
        sub_140A70264(&unk_140CFCEE8, (unsigned int)v9, &v14);
        sub_140A6F708(a3, v14, &unk_140CFCEE8);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, __int128 *))KdSendPacket)(
           2LL,
           v13,
           0LL,
           &xmmword_140C31E60);
}
