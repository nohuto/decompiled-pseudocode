/*
 * XREFs of sub_14098E79C @ 0x14098E79C
 * Callers:
 *     sub_14098D650 @ 0x14098D650 (sub_14098D650.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     sub_14098E284 @ 0x14098E284 (sub_14098E284.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_14098E79C(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r14d
  ULONG_PTR v5; // r12
  __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // r15
  __int64 *Pool2; // r13
  _OWORD *v10; // rsi
  _OWORD **v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int16 **v16; // r15
  __int64 *v17; // r14
  __int128 v19; // [rsp+20h] [rbp-48h]
  __int64 HashValue; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v21 = a2;
  HashValue = a1;
  v3 = *(_DWORD *)(a3 + 28);
  v5 = qword_140D04890;
  LODWORD(HashValue) = 0;
  v6 = 16LL * v3;
  v22 = v3;
  v7 = 0;
  v8 = v3;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, v6, 1297630800LL);
  if ( Pool2 )
  {
    v10 = (_OWORD *)ExAllocatePool2(256LL, v6, 1297630800LL);
    if ( v10 )
    {
      v19 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      if ( v3 )
      {
        v11 = (_OWORD **)(a3 + 32);
        v12 = v10;
        do
        {
          *(_OWORD *)((char *)v12 + (char *)Pool2 - (char *)v10) = **v11;
          v13 = *v11++;
          *v12++ = v13[1];
          --v8;
        }
        while ( v8 );
      }
      v7 = sub_14042A5E0(40LL, a3);
      if ( !v7 )
        sub_1405CAE6C(0x605uLL, 0x28uLL, qword_140D04890, 0LL);
      RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, (PULONG)&HashValue);
      v14 = *(_QWORD *)(a3 + 16);
      if ( *(_DWORD *)v14 != (_DWORD)v19 || *(_QWORD *)(v14 + 8) != *((_QWORD *)&v19 + 1) || (_DWORD)HashValue != v21 )
        sub_1405CAE6C(0x705uLL, v5, 0x28uLL, 0x534E616DuLL);
      v15 = 0LL;
      if ( v3 )
      {
        v16 = (unsigned __int16 **)(a3 + 32);
        v17 = Pool2 + 1;
        do
        {
          if ( !sub_14098E284(*v16, *v17, *((unsigned __int16 *)v17 - 3)) )
            sub_1405CAE6C(0x706uLL, 0x28uLL, 0x4B657920uLL, *(_QWORD *)(a3 + 8 * v15 + 32) + 8LL);
          v7 = sub_14098E284(
                 *v16 + 8,
                 *(__int64 *)((char *)v17 + (char *)v10 - (char *)Pool2),
                 *(unsigned __int16 *)((char *)v17 + (char *)v10 - (char *)Pool2 - 6));
          if ( !v7 )
            sub_1405CAE6C(0x706uLL, 0x28uLL, 0x56616C75uLL, *(_QWORD *)(a3 + 8 * v15 + 32) + 24LL);
          v15 = (unsigned int)(v15 + 1);
          ++v16;
          v17 += 2;
        }
        while ( (unsigned int)v15 < v22 );
      }
    }
    ExFreePoolWithTag(Pool2, 0x4D584650u);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4D584650u);
  }
  return v7;
}
