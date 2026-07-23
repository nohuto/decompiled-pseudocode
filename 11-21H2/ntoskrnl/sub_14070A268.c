/*
 * XREFs of sub_14070A268 @ 0x14070A268
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140B1B59C @ 0x140B1B59C (sub_140B1B59C.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_1402A012C @ 0x1402A012C (sub_1402A012C.c)
 *     sub_1402A01BC @ 0x1402A01BC (sub_1402A01BC.c)
 *     sub_1402A0314 @ 0x1402A0314 (sub_1402A0314.c)
 *     sub_1402A0324 @ 0x1402A0324 (sub_1402A0324.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_1403DE5C8 @ 0x1403DE5C8 (sub_1403DE5C8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140931900 @ 0x140931900 (sub_140931900.c)
 */

__int64 __fastcall sub_14070A268(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v11; // rsi
  unsigned __int16 *v12; // r14
  char v13; // r15
  unsigned __int16 v14; // bx
  int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned int v21; // ebp
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  v27 = 0;
  *(_BYTE *)(a1 + 640) = a2;
  v8 = a3;
  v9 = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_BYTE *)a1 = 3;
  *(_DWORD *)(a1 + 368) = 2097184;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  memset((void *)(a1 + 376), 0, 0x100uLL);
  if ( (a7 & 1) != 0 )
    *(_DWORD *)(a1 + 632) |= 1u;
  *(_WORD *)(a1 + 1040) = v8;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 2097153;
  memset((void *)(a1 + 88), 0, 0x100uLL);
  sub_140300030(a1 + 80, *(_WORD *)(a1 + 82), a4);
  LODWORD(v11) = sub_1402A0324(a4);
  sub_1402A0314(a1, v11);
  *(_DWORD *)(a1 + 840) = 0;
  v12 = a5;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 352) = a1 + 344;
  *(_QWORD *)(a1 + 344) = a1 + 344;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_BYTE *)(a1 + 641) = 6;
  if ( !v12 )
  {
    v26 = 0LL;
    WORD4(v26) = v8;
    if ( (unsigned __int16)v8 >= *a4 )
      v25 = 0LL;
    else
      v25 = *(_QWORD *)&a4[4 * v8 + 4];
    *(_QWORD *)&v26 = v25;
    v12 = (unsigned __int16 *)sub_1403DE5C8((__int64)&v26);
  }
  v13 = 0;
  *(_WORD *)(a1 + 836) = *v12;
  v14 = *v12;
LABEL_5:
  v27 = 0;
  v15 = v14;
  while ( 1 )
  {
    v16 = qword_140D31700[v15];
    v17 = *(_DWORD *)(v16 + 16) & v11;
    if ( v17 )
    {
      if ( (*(_BYTE *)(v16 + 10) & 1) == v13 || (unsigned __int16 *)v16 == v12 )
      {
        do
        {
          _BitScanReverse(&v18, v17);
          sub_1402A01BC(a1, (_WORD *)v16, v18);
          v11 = (unsigned int)v11 & (unsigned __int64)~(1LL << v18);
          v17 = *(_DWORD *)(v16 + 16) & v11;
        }
        while ( v17 );
        if ( !(_DWORD)v11 )
          break;
      }
    }
    v14 = *v12;
    v15 = sub_14030B3F0(*v12, &v27);
    if ( v15 == -1 )
    {
      if ( !(_DWORD)v11 )
        break;
      v13 = 1;
      goto LABEL_5;
    }
  }
  *(_QWORD *)(a1 + 880) = a6;
  if ( (dword_140D0507C & 8) != 0 )
  {
    v19 = sub_1402A012C(0x10u, 0);
    if ( v19 == -1 )
    {
      v19 = 0LL;
    }
    else
    {
      v20 = 0LL;
      if ( KeQueryMaximumProcessorCountEx(0xFFFFu) )
      {
        v21 = ((unsigned int)v19 >> 13) & 0x3FFFF;
        do
        {
          v27 = 0;
          _BitScanReverse(&v22, v21);
          v23 = *(_QWORD *)(qword_140C10DB0 + 8 * v20);
          v20 = (unsigned int)(v20 + 1);
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8LL * (v22 - 2))
                                + 8 * (v21 ^ (unsigned __int64)(unsigned int)(1 << v22))
                                + 8)
                    + 8LL * (((unsigned int)v19 >> 4) & 0x1FF)) = 0LL;
        }
        while ( (unsigned int)v20 < KeQueryMaximumProcessorCountEx(0xFFFFu) );
      }
    }
    *(_QWORD *)(a1 + 1024) = v19;
  }
  if ( (a7 & 2) != 0 )
  {
    v9 = sub_140931900(a1, 0LL, a1 + 992);
    if ( v9 >= 0 )
      *(_QWORD *)(a1 + 992) |= 1uLL;
  }
  if ( _bittest64(&qword_140D068D8, 0x37u) )
    *(_QWORD *)(a1 + 1032) = MEMORY[0xFFFFF78000000710];
  return (unsigned int)v9;
}
