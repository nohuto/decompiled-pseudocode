/*
 * XREFs of sub_1402869C0 @ 0x1402869C0
 * Callers:
 *     sub_14022CBE0 @ 0x14022CBE0 (sub_14022CBE0.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140286884 @ 0x140286884 (sub_140286884.c)
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 * Callees:
 *     sub_14022CF78 @ 0x14022CF78 (sub_14022CF78.c)
 *     sub_140287428 @ 0x140287428 (sub_140287428.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C48A0 @ 0x1405C48A0 (sub_1405C48A0.c)
 *     sub_1405C4C6C @ 0x1405C4C6C (sub_1405C4C6C.c)
 */

__int64 __fastcall sub_1402869C0(_QWORD *BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  __int16 v7; // dx
  __int64 v8; // rax
  ULONG_PTR *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0 && (a2 & 8) != 0 && !(unsigned int)sub_140287428(*BugCheckParameter2) )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v9 = 0LL;
    }
    else if ( (v7 & 0x80u) != 0 )
    {
      v9 = &StartContext;
    }
    else
    {
      v8 = *((_QWORD *)KeGetCurrentThread() + 23);
      v9 = (v7 & 0x100) != 0
         ? *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v8 + 1368) + 366LL))
         : *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v8 + 1838));
    }
    if ( v9 != *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      v10 = sub_14022CF78(v3);
      v11 = sub_14022CF78(v10);
      v12 = *(_DWORD *)(v11 + 48) & 0x3FFFFFFF;
      if ( v12 != 0x3FFFFFFF )
      {
        sub_1405C4C6C(v3, (unsigned int)(v12 - 1));
        if ( v12 == 1 )
          v4 = sub_1405C48A0();
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x20) == 0 && (*(_BYTE *)(v3 + 34) & 1) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    *(_QWORD *)(v3 + 96) = v5 - 1;
  }
  return v4;
}
